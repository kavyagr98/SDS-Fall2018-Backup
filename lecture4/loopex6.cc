#include <iostream>
using std::cout;
using std::endl;
using std::cin;


int main (){

  int max = 0; 
  int start = 0;
  for (int i =2; i<1000; i++)
    {
      int length = 1;
      int current = i;
      while (current!=1){
	if (current%2==0)
	  current /= 2;
	else
	  current = 3*current+1;
	length++;
      }
      if (length>max)
	{start = i;
	  max = length;}
    }
  cout << "The longest length is: " << max << " it happpened at " << start << endl;
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
