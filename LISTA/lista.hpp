#include "nodo.hpp"

class listilla {

    mynodo* front;
    mynodo* rear;
    unsigned int tam;
  
  public:
    listilla(void);
    ~listilla(void);
    
    void insertar_inicio(TDATO elemento);
    TDATO extraer_inicio(void);
    void insertar_final(TDATO elemento);
    TDATO extraer_final(void);
    void insertar_vacio(TDATO elemento);
   
    bool empty(void);
    void escribir(void);
    void insertar_despues(TDATO elemento, unsigned int pos);
    TDATO extraer(unsigned int pos);
    void edicion(TDATO dato, unsigned int pos);
};
