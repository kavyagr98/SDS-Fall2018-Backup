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

int main ()
{
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
}
