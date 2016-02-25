#pragma once
#include "common.hpp"
#include <iostream>

class mynodo {
  
    TDATO dato; //elemento que tiene el nodo
    mynodo* next; //puntero al siguiente nodo
  
  public:
    mynodo(TDATO ele); //constructor que añade un elemento
    mynodo(void); //constructor por defecto
    ~mynodo(void); //destructor por defecto
   
    void set_dato(TDATO ele); //metodo para cambiar el elemento
    TDATO get_dato(void); //método para saber el valor del elemento del nodo
    mynodo* get_next(void); // método para obtener el siguiente nodo
    void set_next(mynodo* inx); //método para determinar el siguiente nodo
};
