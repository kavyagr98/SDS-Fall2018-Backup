#include <cmath>
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

struct vector {double x; double y;};

void exchange(vector &a){
  double hold = a.x;
  a.x = a.y;
  a.y = hold;
}

int main (){
  struct vector a;
  cout << "Enter x" << endl;
  cin >> a.x;
  cout << "Enter y" << endl;
  cin >> a.y;
  exchange(a);
  cout << a.x << " " << a.y << endl;
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
