#include <iostream>
using std::cout;
using std::endl;
using std::cin;

void list_of_primes(int how_many){
  int integers; 
  int divisors;
  int number_of_primes_found;

  for (number_of_primes_found = 1; number_of_primes_found <= how_many;){
    for (divisors = 2; divisors <= integers-1; divisors++)
      {
	if (integers%divisors == 0)
	  break;
      }
    if (divisors == integers)
      {
	number_of_primes_found++;
	cout << integers << endl;
      }
    integers++;
  } 
}

int main (){
  cout << "How many primes do you want?"  << endl;
  int how_many;
  cin >> how_many;
  list_of_primes(how_many);
  return 0;
}


//C-x C-w : write under new name

// to get out of here
// first save:

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
