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
