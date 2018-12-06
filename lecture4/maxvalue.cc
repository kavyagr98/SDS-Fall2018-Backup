#include <cmath>
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main (){ 
  vector<int> numbers = {1,-4,2,-6,5};
  int max = 0;  
  for (auto e : numbers){
    e = abs(e);
    if (e>max){
      max = e;}
  }
  cout << max << endl;
}

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
