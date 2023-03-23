#include <iostream>
using namespace std; 

#include "forme.h"
#include "Point.h"

int forme::getc(){
  cout << "les valeurs du point sont en x : " << c.getx()<< " et en y : "<<c.gety() <<endl; 
  return 0 ;
}
float forme::getp(){
  return p ;
}
float forme::gets(){
  return s ;
}

void forme::perimetre(float a){
  p = a;
}

void forme::surface(float b){
  s = b; 
}

//constructeur

forme::forme() {
  point c; 
}

//destructeur

forme::~forme(){
  
}

// surcharge de <<
ostream& operator<<(ostream& os, forme& f)
{
    os << "Pour le centre "<< f.getc() << " Le perimetre vaut : " << f.getp()<< " et la surface vaut : " << f.gets() <<  endl;
    return os;
}

// surcharge += 
void operator+=(forme &f, int t){
  f.c.translater (t,t);
}
