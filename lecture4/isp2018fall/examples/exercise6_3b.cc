#include <iostream>
using std::cin;
using std::cout;
using std::endl;
 
int main() {

  for (int i=1; i<=10; i++) {
    // for (int j=1; j<=10; j++) {
    //   if (abs(i-j)<2)
    // 	cout << "i,j=" << i << "," << j << "; " ;
    // }
    int jlo = i-1, jhi = i+1;
    for (int j=jlo; j<=jhi; j++) {
      if (abs(i-j)<2)
	cout << "i,j=" << i << "," << j << "; " ;
    }
    cout << endl;
  }
      
  return 0;
}
