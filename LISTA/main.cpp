#include "lista.hpp"


int main(void) {
 
  listilla A;
  
  
    
  A.insertar_inicio(5);
  A.escribir();
  A.insertar_inicio(4);
  A.escribir();
  A.insertar_inicio(3);
  A.escribir();
  
  A.insertar_final(6);
  A.escribir();
  A.insertar_final(7);
  A.escribir();
  A.insertar_final(8);
  A.escribir();
  
  A.extraer_inicio();
  A.escribir();
  
  A.extraer_final();
  A.escribir();
  
  A.insertar_despues(9, 2);
  A.escribir();
  A.extraer(2);
  A.escribir();
  A.insertar_despues(20,3);
  A.escribir();
  
  A.extraer_final();
  A.escribir();
  A.extraer_final();
  A.escribir();
  A.extraer_final();
  A.escribir();
  A.extraer_final();
  A.escribir();
  A.extraer_final();
  A.escribir();
  A.extraer_final();
  A.escribir();
  
  A.insertar_final(6);
  A.escribir();
  A.insertar_final(7);
  A.escribir();
  A.insertar_final(8);
  A.escribir();
}