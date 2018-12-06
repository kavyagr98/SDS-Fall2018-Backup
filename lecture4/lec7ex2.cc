#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
using std::cin;

bool primality_test (int x){
  bool isprime = true;
  for (int divisors = 2; divisors < x; divisors++)
    {if (x%divisors == 0)
	bool isprime = false;
      bool isprime = true;}
  return isprime;   
}

int main (){
  int a = 0;
  cout << "Type a number: " << endl;
  cin >> a;
  bool isprime = primality_test(a);
  cout << isprime << endl;
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
