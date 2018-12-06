#include <cmath>
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::cin;
using std::vector;

float l2norm(vector<float> x){
  int sum = 0;
  for (auto e : x){
    e = e*e;
    sum += e;
  }
  float l2 = sqrt(sum);
  return l2;}
  
int main (){ 
  vector<float> x = {0.5, -2.5, 3.5, 4.5, 5.5};
  float l2sum = l2norm(x);
  float newsum = 0;
  for (auto &j : x){
    j = j/l2sum;
    j = j*j;
    newsum += j;
  } 
  cout << "Sum: " << newsum << endl;
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
