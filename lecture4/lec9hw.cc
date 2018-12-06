#include <iostream>
using std::cout;
using std::endl;
using std::cin;

// make structure for input variables
struct primesequence {int number_of_primes_found; int last_number_tested; int how_many;};

//function to find prime numbers with structure input
void list_of_primes(primesequence sequence){
  int divisors; 
  //for loop to check for prime numbers until we find number needed
  for (sequence.number_of_primes_found = 1; sequence.number_of_primes_found <= sequence.how_many;){
    //check divisors until one less than last number tested to see if prime  
    for (divisors = 2; divisors <= sequence.last_number_tested-1; divisors++)
      {
	//if last number tested has a divisor, it is not prime to break out of loop
	if (sequence.last_number_tested%divisors == 0)
	  break;
      }
    if (divisors == sequence.last_number_tested)
      {
	//if all divisors are checked and last number tested is found, increment number of primes found and output last numner tested
	sequence.number_of_primes_found++;
	cout <<  sequence.last_number_tested << endl;
      }
    // increment to check next number
    sequence.last_number_tested++;
  }
}

int main (){
  // call structure that was created
  struct primesequence sequence; 
  cout << "How many primes do you want?"  << endl;
  cin >> sequence.how_many;
  // call function with how many primes wanted
  list_of_primes(sequence);
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
