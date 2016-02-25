#include "cola.hpp"

cola::cola(void):
front(NULL),
rear(NULL),
tam(0)
{}

cola::~cola(void) {

  mynodo* aux = front;
  while(front!=NULL) {
  
    front = front->get_next();
    delete aux;
    aux=front;
    
  }
  
}  

bool cola::empty(void) {

  return(front == NULL ? true : false);
  
}

void cola::insertar_vacio(TDATO elemento) {
  
  mynodo* dummy = new mynodo(elemento);
  front = dummy;
  rear = dummy;
  tam++;
}



TDATO cola::pop(void) {

  if(empty()) {
    
    std::cout << "La cola ya está completamente vacia" << std::endl;
    
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

void cola::push(TDATO elemento) {
  
   mynodo* dummy = new mynodo(elemento);

  if(empty()) {
    
    insertar_vacio(elemento);
  
  } else {
    
    rear->set_next(dummy);
    rear=dummy;
    
  }
  tam++;
}



void cola::escribir(void) {
  
  
  mynodo* aux = front;
  
  while(aux != NULL) {
  
    std::cout << aux->get_dato() << " ";
    aux= aux->get_next();
  }
  
  std::cout << std::endl;
  
  //std::cout << tam << std::endl;
}

