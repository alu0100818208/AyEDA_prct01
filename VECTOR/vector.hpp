#pragma once
#include "common.hpp"
#include <iostream>

//typedef int TDATO;

class myvector {
	
	private:
		TDATO* elemento; //puntero indicador de donde empieza el vector
		unsigned int tam; //tamaño del vector
	
	public:
		myvector (void);
		myvector (unsigned int size);
		myvector (myvector& A);
		~myvector (void); //destructor por defecto
		
		friend myvector operator+(const myvector&, const myvector&);
		
		TDATO operator[](unsigned int i) const;
		void mostrarVector(void); //método para ver el vector por pantalla
		TDATO cojer_elemento(unsigned int i); //método para seleccionar un elemento del vector
		void dejar_elemento(unsigned int i, TDATO elem); //método para introducir un elemento en el vector
		
		unsigned int tamanio(void) const; //método para que el usuario sepa el tamaño del vector
		
		myvector& operator=(const myvector&);
		friend std::ostream& operator<<(std::ostream&, const myvector&);
		
	};
