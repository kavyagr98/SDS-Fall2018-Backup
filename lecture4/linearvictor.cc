#include <cmath>
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

class Point {
private:
  float x,y;
public:
  Point(float x, float y) : x(x),y(y) {};
  float getx(){
    return x;};
  float gety(){
    return y;} //accessor function 
};
  
class LinearFunction {
private:
  float slope,intercept;
public:
  LinearFunction(Point p, Point q){
    slope = (q.gety()-p.gety())/(q.getx()-p.getx());
    intercept = p.gety()-slope*p.getx(); 
  };
  float evaluate_at(float x){
    return slope*x+intercept;
  };
};

int main (){
  Point p(1.,5.);
  Point q(2.,9.);
  LinearFunction line(p,q);
  cout << "Value at 4.0 " << line.evaluate_at(4.0) << endl;


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
