#include <iostream>
using std::cin;
using std::cout; 
using std::endl;

int main() {
  // ask the user for a number
  int number_to_be_tested;
  cout << "Give a number: "<< endl;
  cin >> number_to_be_tested;

  // test all the smaller numbers and report
  bool found_a_divisor=false;
  for (int divisor=2;
       divisor<number_to_be_tested and not found_a_divisor;
       divisor++) {
    // test is divisor is a divisor, and print if so
    if (number_to_be_tested%divisor==0) {
      found_a_divisor = true;
      cout << "found a divisor, namely: " << divisor << endl;
    }
  }
  // have we reported on it being prime?
  if (not found_a_divisor) 
    cout << "This was prime" << endl;

  return 0;
}

