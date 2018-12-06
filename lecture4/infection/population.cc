#include "population.h"
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

string Person :: status_string(){
  if (status == 0)
    return "susceptible";
  else if (status == -1)
    return "recovered";
  else if (status == -2)
    return "inoculated";
  else if (status >= 1)
    return "sick";
};

void Person :: update(){
  if(status > 1)
    status--;
  else if (status == 1)
    status = -1;
};

int Person :: get_status(){return status;};

void Person :: infect(int days_sick){
  status = days_sick;};

bool Person :: is_stable(){
  return (status == -1);
};

void Population :: random_infection(){
  int infected = rand()%the_population.size();
  the_population[infected].infect(6);
};

int Population :: count_infected(){
  int num_infected = 0;
  for (auto e : the_population)
    {if (e.get_status()>=1)
	num_infected++;}
  return num_infected;
};

void Population :: update_pop(){
  for (auto &f : the_population)
    {f.update();}
};

void Population :: print_pop(){
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

void Population :: set_probability_of_transfer(float probability){
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

void Population :: set_vaccinated(float vaccinated){
  for (int i = 0; i<the_population.size(); i++)
    {
      float random = (float) rand()/(float)RAND_MAX;
      if (vaccinated>random and the_population[i].get_status()==0)
	{the_population[i].infect(-2);}
    }
};

void Population :: contacts(int intended_contacts,float probability){
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
