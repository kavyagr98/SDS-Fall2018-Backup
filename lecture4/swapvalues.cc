#include <iostream>
using std::cout;
using std::endl;
using std::cin;

void swap_values(int *i, int *j){
  *i = j;
  *j=i;
 }

int main (){
  cout << "Type the first number: " << endl;
  int first;
  cin >> first;
  cout << "Type the second number: " << endl;
  int second;
  cin >> second;
  swap_values(&first, &second);
  cout << first << " " << second << endl;
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
