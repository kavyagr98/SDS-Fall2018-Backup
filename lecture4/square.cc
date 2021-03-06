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

class Rectangle {
private:
  float recwidth, recheight, area;
public:
  Rectangle(Point bl, float width, float height){
    recwidth = bl.getx()+width;
    recheight = bl.gety()+height;
    area = width*height;
    Point tr(recwidth,recheight);};
  float get_area(){return area;};
};

class Square : public Rectangle {
public:
  Square (Point bl, double side) : Rectangle (bl, side, side) {};
};

int main (){
  Point bl(2.,2.);
  Rectangle first(bl,3.,3.);
  Square second(bl,6.);
  int area = second.get_area();
  cout << "Area: " << area << endl;
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
