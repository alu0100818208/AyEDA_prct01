#include "pila.hpp"

pila::pila(void):
front(NULL),
rear(NULL),
tam(0)
{}

pila::~pila(void) {

  mynodo* aux = front;
  while(front!=NULL) {
  
    front = front->get_next();
    delete aux;
    aux=front;
    
  }
  
}  

bool pila::empty(void) {

  return(front == NULL ? true : false);
  
}

void pila::insertar_vacio(TDATO elemento) {
  
  mynodo* dummy = new mynodo(elemento);
  front = dummy;
  rear = dummy;
  tam++;
}

void pila::push(TDATO elemento) {

  if(empty()) {
    
    insertar_vacio(elemento);
    
  } else {
    
      mynodo* dummy = new mynodo(elemento);
    
    if(front == rear) {
      
      dummy->set_next(rear);
      front = dummy;
    
    } else {
    
      dummy->set_next(front);
      front = dummy;
    }
   tam++;
  }

}

TDATO pila::pop(void) {

  if(empty()) {
    
    std::cout << "La pila ya está completamente vacia" << std::endl;
    
  } else  {
    
	if(front==rear) {
	  mynodo* aux = front;
	  front = NULL;
	  rear = NULL;
	  tam--;
	  return (aux->get_dato());
    
	} else {
  
	  mynodo* aux=front;
	  front = front->get_next();
	  tam--;
	  return (aux->get_dato());
    
	}
  }
  
}

void pila::escribir(void) {
  
  
  mynodo* aux = front;
  
  while(aux != NULL) {
  
    std::cout << aux->get_dato() << " ";
    aux= aux->get_next();
  }
  
  std::cout << std::endl;
  
  //std::cout << tam << std::endl;
}


