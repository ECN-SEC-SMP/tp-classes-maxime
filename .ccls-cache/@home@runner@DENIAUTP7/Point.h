#include <iostream>
using namespace std; 

#ifndef cpp_Point_h
#define cpp_Point_h

class point{
private : 
  int x;
  int y;
public : 
  void translater(int a, int o);
  void translaterp(point p);
  int gety();
  int getx();
  //constrcuteur
  point (); 
  point (int x, int y); 
  point (const point  &p); 
  //destructeur
  ~point(); 
  
  friend void operator+=(point&p,int t);
}; 
ostream& operator<<(ostream& os, point& pt);
#endif 
