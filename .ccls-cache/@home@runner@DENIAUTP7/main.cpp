#include <iostream>
using namespace std; 
#include "Point.h"
#include "forme.h"


int main(){
  point p; 
  point y(5,5); 
  point b = y; 
  // cout << "les valeurs du point sont :" << p.getx() << " en abscisse et " << p.gety() << " en ordonné." << endl;  
  // p.translater(5,5);
  // cout << "les valeurs du point sont :" << p.getx() << " en abscisse et " << p.gety() << " en ordonné." << endl;  
  // p.translaterp(y);
  // cout << "les valeurs du point sont :" << p.getx() << " en abscisse et " << p.gety() << " en ordonné." << endl; 
  cout << "les valeurs du point sont :" << b.getx() << " en abscisse et " << b.gety() << " en ordonné." << endl; 
  cout << b<<endl; 
  // cout << y<< endl; 
  // y += 5;
  // cout << y << endl; 
  forme f; 
  f.perimetre (5.6);
  f.surface(6.5); 
  f.getc();
  cout << f.getp() << endl;
  cout << f.gets() << endl;
  f += 1; 
  f.getc();
  cout << f<<endl; 
  qse<f
}