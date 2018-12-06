#include <iostream>
using std::cout;
using std::endl;

int main() {

  // find the longest sequence that starts under 1000
  // try all starting points and remember the longest sequence
  int longest_length=0, starting_point_with_longest_length = -1;
  for (int starting_point=2; starting_point<1000; starting_point++) {
    // construct the sequence starting at starting point and record the length
    int current_length=1;
    int current = starting_point;
    // while current is not 1, iterate:
    while (current!=1) {
      // update current
      if (current%2==0)
	current /= 2;
      else
	current = 3*current+1;
      current_length++;
    }
    // if the lenght is more than the previous max, record that
    if (current_length>longest_length) {
      starting_point_with_longest_length = starting_point;
      longest_length = current_length;
    }
  }
  cout << "The longest length is " << longest_length << "; it happened at " << starting_point_with_longest_length << endl;

  return 0;
}
