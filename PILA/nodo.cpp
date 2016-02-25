#include "nodo.hpp"

mynodo::mynodo(TDATO ele):
dato(ele),
next(NULL)
{}

mynodo::~mynodo(void) {}

void mynodo::set_dato(TDATO ele) {
  dato=ele;
}

TDATO mynodo::get_dato(void) { 
  return(dato);
}

mynodo* mynodo::get_next(void) {
  return(next);
}

void mynodo::set_next(mynodo* A) {
  next = A;
}