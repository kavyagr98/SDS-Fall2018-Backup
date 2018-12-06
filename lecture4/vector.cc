#include <cmath>
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

struct vector {double x; double y;};

double angle(vector a){
  return atan(a.y/a.x);
}

int main (){
  struct vector a;
  cout << "Enter x" << endl;
  cin >> a.x;
  cout << "Enter y" << endl;
  cin >> a.y;
  double output = angle(a);
  cout << output << endl;
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
