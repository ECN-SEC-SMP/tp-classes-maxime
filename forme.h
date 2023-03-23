#include <iostream>
using namespace std; 
#include "Point.h"

#ifndef cpp_forme_h
#define cpp_forme_h

class forme : public point
{
private : 
  point c;
  float p;
  float s;
public : 
  void perimetre(float a);
  void surface(float b); 
  int getc();
  float getp();
  float gets();
  //constrcuteur
  forme (); 
  //destructeur
  ~forme(); 
  
  friend void operator+=(forme&f,int t);
}; 
ostream& operator<<(ostream& os, forme&f);
#endif 
