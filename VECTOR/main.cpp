#include "vector.hpp"

myvector operator+(myvector& A,myvector& B) {	//operador de suma sorecargado que suma los elementos de dos vectores

  

  if(A.tamanio() <= B.tamanio()) {
    myvector C(B);
    unsigned int i;
    for(i =0;i<A.tamanio();i++) {
    
      C.dejar_elemento(i, A[i] + C[i]);
      
    }
    
    return C;
      
   } else {
    
      myvector C(A);
      unsigned int i;
      for(i =0;i<B.tamanio();i++) {
    
      C.dejar_elemento(i, B[i] + C[i]);
      
      }
      
      return C;
      
    }
    
    
}

std::ostream& operator<<(std::ostream& os, const myvector& v) {

	for(int i = 0; i<v.tam;i++) {
		
		os << v[i] << " ";
		
	}

}

int main(void) {
	
	
	myvector A(5);
	myvector B(6);
	myvector C;
	std::cout << "Introduzca los elementos:" << std::endl;
	
	int i;
	TDATO dato;
	for(i=0; i<A.tamanio(); i++) {
		
		std::cout << i+1 << "º:";
		std::cin >> dato;
		std::cout << std::endl;
		A.dejar_elemento(i,dato);
	}
	
	int j;
	for(j=0; j<B.tamanio(); j++) {
		
		std::cout << j+1 << "º:";
		std::cin >> dato;
		std::cout << std::endl;
		B.dejar_elemento(j,dato);
	}
	
	
	std::cout << B[5] << std::endl;
	
	std::cout << A << std::endl;
	B.mostrarVector();
	std::cout << A[2] << std::endl;
	
	C = A + B; //suma los elementos de los vectores y los guarda en C
	
	std::cout << "Vector sumado: " << C << std::endl;
	
	
}

