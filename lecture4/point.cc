#include <cmath>
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

class Point {
private:
  float x,y;
public: 
  Point(float xcoordinate, float ycoordinate){
    x = xcoordinate, y=ycoordinate;
  };
  float distance_to_origin() {return sqrt((x*x)+(y*y));};
  void printout() {cout << x << " " << y << endl;};
  float angle() {return atan(y/x);};
};

int main (){
  Point p1(3.,4.);
  p1.printout();
  cout << "The distance is " <<  p1.distance_to_origin() << endl;
  cout << "The angle is " <<  p1.angle() << endl;

}

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
