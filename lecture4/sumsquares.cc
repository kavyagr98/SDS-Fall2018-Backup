#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int sum_squares(int n){
  if (n==1)
    {return n*n;}
  else {return ((n*n) + sum_squares(n-1));}
 }

int main (){
  for (int input = 1; input <= 100; input++){
    //  sum_squares(input);
    int answer = sum_squares(input);
    cout << answer << endl;}
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
