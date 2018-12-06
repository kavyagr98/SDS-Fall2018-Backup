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
  string status_string();
  void update(); 
  int get_status();
  void infect(int days_sick);
  bool is_stable();
};

class Population {
private:
  vector<Person>the_population;
public: 
  Population(int npeople) 
  {
    the_population.resize(npeople);
  };
  void random_infection();
  int count_infected();
  void update_pop();
  void print_pop();
  void set_probability_of_transfer(float probability);
  void set_vaccinated(float vaccinated);
  void contacts(int intended_contacts,float probability);   
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
