#include "nodo.hpp"

class pila {

    mynodo* front;
    mynodo* rear;
    unsigned int tam;
  
  public:
    pila(void);
    ~pila(void);
    
    void push(TDATO elemento);
    TDATO pop(void);
    void insertar_vacio(TDATO elemento);
   
    bool empty(void);
    void escribir(void);
    
};
