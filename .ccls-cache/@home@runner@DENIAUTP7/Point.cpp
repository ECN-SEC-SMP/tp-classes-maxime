#include <iostream>
using namespace std; 

#include "Point.h"

int point::getx(){
  return x;
}
int point::gety(){
  return y;
}

void point::translater(int a, int o){
  x = x + a; 
  y = y + o; 
}

void point::translaterp(point p){
  x = x + p.x; 
  y = y + p.y; 
}

point::point() {
  x = 0;
  y = 0; 
}
point::point(int _x, int _y) {
  x = _x;
  y = _y; 
}
point::point(const point  &p) {
  x = p.x; 
  y = p.y; 
}

point::~point(){
  
}

// surcharge de <<
ostream& operator<<(ostream& os, point& pt)
{
    os << "X : "<< pt.getx() << " ; y : " << pt.gety();
    return os;
}

// surcharge += 
void operator+=(point &p, int t){
  p.translater (t,t);
}
