#include <iostream>
using std::cout;
using std::endl;
using std::cin;


int main (){
  for (int i = 1; i<=10;  i++){
    {
    for (int j = 1; j<=i; j++)
      cout << "I is: " << i << ". J is: " << j << endl; 
    }} 

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
