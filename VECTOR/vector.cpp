#include "vector.hpp"


myvector::myvector(void):	//constructor por defecto
tam(0),
elemento(NULL)
{}

myvector::myvector(unsigned int size):
tam(size),
elemento(NULL)
{
	elemento = new TDATO [tam];
	}
	

myvector::myvector(myvector& A): 	//constructor de copia
tam(0),
elemento(NULL)
{
   /* tam = A.tamanio();
    elemento = new TDATO [tam];
    
    unsigned int i;
    for(i=0;i<tam;i++) {
     
      elemento[i] = A[i];
      
    }*/
  *this = A;
  
}
	
myvector::~myvector(void) {
	
	if (elemento != NULL){
			delete [] elemento;
			elemento = NULL;
		}
	}

void myvector::mostrarVector(void) { //funcio para mostrar el vector entero
	
	unsigned int i;
	for(i=0;i<tam;i++) {
		
		std::cout << elemento[i] << " ";
	}
	
	std::cout << std::endl;
}

TDATO myvector::cojer_elemento(unsigned int i) {
	
	if( i < tam) {
		return (elemento[i]);
	}
	
}

void myvector::dejar_elemento(unsigned int i, TDATO elem) {
	
	if(i < tam) {
		elemento[i] = elem;
	} else {
		std::cout << "Error al depositar el elemento" << std::endl;
	}
}
	
unsigned int myvector::tamanio(void) const {
	
	return (tam);
}



TDATO myvector::operator[](unsigned int i) const {	//operador que sobrecarga para acceder a un elemento del vector

  return(elemento[i]);
  
}

myvector& myvector::operator=(const myvector& x) {	//operador de asignación

  if (tam != x.tamanio()) {
    tam = x.tamanio();
    delete[] elemento;
    elemento = new int[x.tamanio()];
  }
  // pasamos todos los elementos desde 'x'
  for (unsigned int i = 0; i < tam; i++)
    elemento[i] = x[i];

  return *this;

  
}



