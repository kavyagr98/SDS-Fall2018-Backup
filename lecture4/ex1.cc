#include <iostream>
using std::cout;
using std::endl;
using std::cin;


int main (){
  cout << "Type a  number:"  << endl;
  int i;
  cin >> i;
  if (i%3==0 && i%5==0)
    cout << "Fizzbuzz!" << endl;
  else if (i%3==0)
    cout << "Fizz!" << endl;
  else if (i%5==0)
    cout << "Buzz!" << endl;
  else cout << "Nothing." << endl;
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
