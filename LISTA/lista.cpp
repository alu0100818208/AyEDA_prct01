#include "lista.hpp"

listilla::listilla(void):
front(NULL),
rear(NULL),
tam(0)
{}

listilla::~listilla(void) {

  mynodo* aux = front;
  while(front!=NULL) {
  
    front = front->get_next();
    delete aux;
    aux=front;
    
  }
  
}  

bool listilla::empty(void) {

  return(front == NULL ? true : false);
  
}

void listilla::insertar_vacio(TDATO elemento) {
  
  mynodo* dummy = new mynodo(elemento);
  front = dummy;
  rear = dummy;
  tam++;
}

void listilla::insertar_inicio(TDATO elemento) {

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

TDATO listilla::extraer_inicio(void) {

  if(empty()) {
    
    std::cout << "La lista ya está completamente vacia" << std::endl;
    
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

void listilla::insertar_final(TDATO elemento) {
  
   mynodo* dummy = new mynodo(elemento);

  if(empty()) {
    
    insertar_vacio(elemento);
  
  } else {
    
    rear->set_next(dummy);
    rear=dummy;
    
  }
  tam++;
}

TDATO listilla::extraer_final(void) {
  
  if(empty()) {
    
    std::cout << "La lista ya está completamente vacia" << std::endl;
    
  } else {
  
	if(front==rear) {
    
	  mynodo* aux = front;
	  front = NULL;
	  rear = NULL;
	  tam--;
	  return (aux->get_dato());
    
	} else {
  
	  mynodo* aux=front;
    
	  while(aux->get_next() != rear) {
    
	    aux=aux->get_next();
      
	  }
    
	  rear = aux;
	  aux = aux->get_next();
	  rear->set_next(NULL);
    
	  tam--;
	  return (aux->get_dato());
    
	 }
  }
  
}

void listilla::escribir(void) {
  
  
  mynodo* aux = front;
  
  while(aux != NULL) {
  
    std::cout << aux->get_dato() << " ";
    aux= aux->get_next();
  }
  
  std::cout << std::endl;
  
  //std::cout << tam << std::endl;
}



void listilla::insertar_despues(TDATO elemento, unsigned int pos) {
 
  if(pos == 0){
  
    insertar_inicio(elemento);
    
  } else { if(pos==tam-1) {
  
    insertar_final(elemento);
    
    } else { if(pos>tam-1) {
      
      std::cout << "ERROR, la posición solicitada es mayor que el tamaño de la lista" << std::endl;
      std::cout << "Si quiere expandirla por los extremos insete al final o al principio" << std::endl;
      
      } else {
      
	mynodo* dummy = new mynodo(elemento);  
	
	mynodo* aux = front;
	unsigned int i;
	for(i=1;i<pos;i++){
	
	  aux = aux->get_next();
	  
	}
	
	dummy->set_next(aux->get_next());
	aux->set_next(dummy);
	tam++;
	
      }
  
    }
  }
  
}


TDATO listilla::extraer(unsigned int pos) {

  if(empty()) {
    
    std::cout << "La lista ya está completamente vacia" << std::endl;
    
  } else {
  
	if(pos == 0){
  
	  return(extraer_inicio());
    
	} else { if(pos==tam-1) {
  
	  return(extraer_final());
    
	  } else { if(pos>tam-1) {
      
	    std::cout << "ERROR, la posición solicitada es mayor que el tamaño de la lista" << std::endl;
      
	    } else {
      
	      mynodo* aux = front;mynodo* aux2=front;
	      unsigned int i,j;
	      for(i=1;i<pos;i++){
	
		aux = aux->get_next();
	  
	      } for(j=1;j<pos-1;j++) {
	
		aux2 = aux2->get_next();
	  
	      }
	
	      aux2->set_next(aux->get_next());
	      tam--;
	      return (aux->get_dato());
	
	    }
  
	  }
	}
	
   }
  
}


void listilla::edicion(TDATO dato, unsigned int pos) {

  if((pos<tam-1) || (pos<0)) {
      
      std::cout << "ERROR, la posición solicitada es mayor que el tamaño de la lista" << std::endl;
      
  } else {
      
	mynodo* aux = front;
	unsigned int i;
	for(i=1;i<pos;i++){
	
	  aux = aux->get_next();
	  
	}
	
	aux->set_dato(dato);
	
      }
  
}


