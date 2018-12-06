#include <iostream>
#include <iomanip>
using std::setbase;
using std::left;
using std::right;
using std::setw;
using std::setfill;
using std::cout;
using std::endl;
using std::cin;


int main (){
  cout << setbase(16) << setfill(' ');
  for (int i=0; i<16; i++) {
    for (int j=0; j<16; j++)
      cout<<right<<setfill('0')<<setw(2) << i*16+j << " " ;
    cout << endl;
  }
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
