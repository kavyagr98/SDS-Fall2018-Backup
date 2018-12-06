#include <cmath>
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

bool is_prime(int last_number_tested){
  {
    for (int divisors = 2; divisors < last_number_tested; divisors++)
      if (last_number_tested%divisors == 0)
	return false;
  }
  return true;
}

class Primegenerator {
private:
  int how_many_primes_found, last_number_tested;
public: 
  Primegenerator(int how_many_primes_found, int last_number_tested) : how_many_primes_found(how_many_primes_found),last_number_tested(last_number_tested) {};
  int nextprime() {
    while(!is_prime(last_number_tested))
      {last_number_tested++;   
	how_many_primes_found++;}
    return last_number_tested;
  };
  int number_of_primes_found(){return how_many_primes_found;};
};

int main (){
  cout << "Choose an upper bound: " << endl;
  int bound;
  cin >> bound;
  for (int evens = 4; evens < bound; evens = evens+2){
    Primegenerator sequence(0,2);
    int q = evens-sequence.nextprime();
    int p = sequence.nextprime();
    if (is_prime(p)==true and is_prime(q)== true)
      cout << p  << " " << q << endl;
  }
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
