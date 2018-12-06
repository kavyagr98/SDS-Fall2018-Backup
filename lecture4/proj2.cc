#include <iostream>
using std::cout;
using std::endl;
using std::cin;


int main (){
  cout << "Type the first number:"  << endl;
  int i;
  cin >> i;
  cout << "Type the second  number:"  << endl;
  int j;
  cin >> j;
  if (i % j == 0 || j % i == 0)
  {
    if (i<j)
    {cout << i << " is a divisor of " << j << endl;}
    else 
      {cout << j << " is a divisor of " << i << endl;}
  }
  else
 {
    if (i<j)
    {cout << i << " is not a divisor of " << j << endl;}
    else 
    {cout << j << " is not a divisor of " << i  << endl;}
  }}


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
