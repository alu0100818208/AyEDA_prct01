#include "pila.hpp"

int main(void) {
 
  pila A;
  
  
    
  A.push(5);
  A.escribir();
  A.push(4);
  A.escribir();
  A.push(3);
  A.escribir();
  
  
  A.pop();
  A.escribir();
  A.pop();
  A.escribir();
  A.pop();
  A.escribir();
  A.pop();
  A.escribir();
  
  return 0;
}