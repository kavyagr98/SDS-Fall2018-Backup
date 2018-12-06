#include <cmath>
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <vector>
using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::vector;

class Person {
private:
  int status;
public: 
  Person(){status = 0;};
  Person(int status) : status(status) {};
  string status_string() {
    if (status == 0)
      return "susceptible";
    else if (status == -1)
      return "recovered";
    else if (status == -2)
      return "inoculated";
    else if (status >= 1)
      return "sick";
  };
  void update(){ 
    if(status > 1)
      status--;
    else if (status == 1)
      status = -1; 
  };
  int get_status(){return status;}
  void infect(int days_sick){
    status = days_sick;};
  bool is_stable(){
    return (status == -1);
  };
};

class Population {
private:
  vector<Person>the_population;
public: 
  Population(int npeople) 
  {
    the_population.resize(npeople);
  };
  void random_infection(){
    int infected = rand()%the_population.size();
    the_population[infected].infect(6);
  }
  int count_infected(){
    int num_infected = 0;
    for (auto e : the_population)
      {if (e.get_status()>=1)
	  num_infected++;}
    return num_infected;
  };
  void update_pop(){
    for (auto &f : the_population)
      {f.update();}
  };
  void print_pop(){
    cout << " #sick: " << count_infected() << " : ";
    for (auto p : the_population ) {
      if(p.get_status() == 0)
	cout << " ? ";
      else if (p.get_status() == -2)
	cout << " / "; 
      else if (p.get_status() >= 1)
	cout << " + ";
      else cout << " - ";
    }
  };
  void set_probability_of_transfer(float probability){
    float chance_before = (float) rand()/(float)RAND_MAX;
    float chance_after = (float) rand()/(float)RAND_MAX;   

    vector<bool>old_population;
    for(auto e:the_population)
      {
	if(e.get_status()>=1)
	  old_population.push_back(true);
	else
	  old_population.push_back(false);
      }   
    for (int i = 0; i<the_population.size(); i++)
      {
	if (i > 0 and old_population[i] and probability > chance_before and the_population[i-1].get_status()==0)
	  {the_population[i-1].infect(5);}
	if (i < the_population.size()-1 and old_population[i] and probability > chance_after and the_population[i+1].get_status()==0)
	  {the_population[i+1].infect(5);}
      }
  };
  void set_vaccinated(float vaccinated){
    for (int i = 0; i<the_population.size(); i++)
      {
	float random = (float) rand()/(float)RAND_MAX;
	if (vaccinated>random and the_population[i].get_status()==0)
	  {the_population[i].infect(-2);}
      }
  };
  void contacts(int intended_contacts,float probability){   
    int people_contacted = 0;  
    float chance_of_infection = (float) rand()/(float)RAND_MAX;
    while(intended_contacts>people_contacted){
      for (int i=0; i<the_population.size();i++){
	int random = rand()%the_population.size();
	if (probability > chance_of_infection and the_population[i].get_status()==0)
	  {the_population[random].infect(5);}
      }
      people_contacted++;
    }
  };
};

int main (){
  Person sally(0);
  float bad_luck = float (rand()) / float(RAND_MAX);
  if (bad_luck>-1) {
    sally.infect (5);
    int step = 1;
    for (step = 1;sally.is_stable() == false;step++){
      int left = 5-step;
      cout << "On day " << step << ", Sally is " <<sally.status_string() << " (" << left << " to go)"  << endl;
      sally.update(); 
    }
    cout << "On day " << step << ", Sally is recovered" << endl;
  }

  cout <<"Size of population? " << endl;
  int popsize = 0;
  cin >> popsize;
  Population population(popsize);
  population.random_infection();
  int days = 0;
  for (days = 0; population.count_infected()>0; days++)
    {
      cout << "\nIn step " << days;      
      population.print_pop();     
      population.update_pop();    
    } 
  cout << "\nIn step " << days;
  population.print_pop();
  cout << endl; 
  cout << "Disease ran its course by " << days << " days" << endl;

  cout << "Enter the probability of getting sick (between 0 and 1): " << endl;
  float probability;
  cin >> probability;
  Population contagion(popsize);
  contagion.random_infection();
  int i = 0;  
  while (i<popsize)
    {
      contagion.set_probability_of_transfer(probability);
      i++;
    } 
  int days2 = 0;
  for (days2 = 0; contagion.count_infected()>0; days2++)
    {
      cout <<"\nIn step " << days2;
      contagion.print_pop();
      contagion.update_pop();
    }
  cout << "\nIn step " << days2;
  contagion.print_pop();
  cout << endl;
  cout << "Disease ran its course by " << days2 << " days" << endl;

  cout << "Enter the percent of people who have been vaccinated (from 0 to 1): " << endl;
  float vac_percent;
  cin >> vac_percent;
  Population vaccinated(popsize);
  vaccinated.set_vaccinated(vac_percent);
  vaccinated.random_infection();
  vaccinated.set_probability_of_transfer(probability);
  int days3 = 0;
  for (days3 = 0; vaccinated.count_infected()>0; days3++)
    {
      cout <<"\nIn step " << days3;
      vaccinated.print_pop();
      vaccinated.update_pop();
    }
  cout << "\nIn step " << days3;
  vaccinated.print_pop();
  cout << endl;
  cout << "Disease ran its course by " << days3 << " days" << endl;
 
  Population spread(popsize);
  spread.set_vaccinated(vac_percent);
  spread.random_infection();
  spread.contacts(3,probability);
  int days4 = 0;
  for (days4 = 0; spread.count_infected()>0; days4++)
    {
      cout << "\nIn step " <<days4;
      spread.print_pop();
      spread.update_pop();
    }
  cout << "\nIn step " << days4;
  spread.print_pop();
  cout << endl;
  cout << "Disease ran its course by " << days4 << " days" << endl;
}

// C-x C-s
// then exit:
// C-x C-c
// if you're stuck 
// C-g
// C-k : kill meaning successive line delete
// C-y : yank back
// C-v : next screen
// Esc-v: previous screen
// C-l : reposition current line
// Esc > : end of file
// Esc < : beginning of file
