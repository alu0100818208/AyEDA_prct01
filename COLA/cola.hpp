#include "nodo.hpp"

class cola {

    mynodo* front;
    mynodo* rear;
    unsigned int tam;
  
  public:
    cola(void);
    ~cola(void);
    
    TDATO pop(void);
    void push(TDATO elemento);
    
    void insertar_vacio(TDATO elemento);
   
    bool empty(void);
    void escribir(void);
};
