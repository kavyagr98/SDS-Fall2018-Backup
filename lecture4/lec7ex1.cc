#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
using std::cin;

float origin(int x, int y){
  float distance = sqrt((x*x)+(y*y));
  return distance; 
}

int main (){
  int a = 0;
  int b = 0;
  cout << "Type the first number: " << endl;
  cin >> a;
  cout << "Type the second number: " << endl;
  cin >> b;
  float distance = origin (a,b);
  cout << "The distance is: " << distance << endl;
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
