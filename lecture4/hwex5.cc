#include <iostream>
using std::cout;
using std::endl;
using std::cin;


int main (){
  cout << "Enter a number: " << endl;
  int input = 1;
  cin >> input;
 
  bool test = false;
  int j = 1;
  while (test == false)
    {int i = 1;
      while (i<10 and j<10 and test == false)
	{ if (i*j > input)
	    { cout << j << "," << i << endl;
	      test = true;}
	  i++;}
      j++;}

int min = 100;
int i = 1;
int first = 1;
int second = 1;
 while (i<10){
   j = 1;
   while (j<10){
     if (i*j > input){
       if (i*j < min){
       first = i;
       second = j;
     min = i*j;}}
     j++;}
     i++;}
 cout << first << "," << second << endl;
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
