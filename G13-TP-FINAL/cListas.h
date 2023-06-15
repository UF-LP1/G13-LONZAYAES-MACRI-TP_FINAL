#pragma once
#include <list>
#include <exception>
#include <iostream>
#include "cANPA.h"
#include "cHospital.h"

using namespace std;

template<class T>
class cListas
{
protected:

	list <T> *Lista;

	//Hacemos friend a las clases que utilizan esta template

	friend class cANPA; 
	//friend class cHospital;

public:

	cListas();

	~cListas();

	T* Buscar(int Referencia);

	T* Quitar(int Referencia);

	void Agregar(T *Elemento);

	void Eliminar(T* Elemento);

	void operator+(T* NuevoElemento);
	
	void operator-(T* ElementoASacar);
	
	friend ostream& operator<<(ostream& out, cListas<T>& Lista);
	
	bool operator==(T* Elemento);

	

};

//                                 ------------------------------ METODOS ------------------------------

template<class T>
inline cListas<T>::cListas()
{
	this->Lista = NULL;
}

template<class T>
inline cListas<T>::~cListas()
{
	this->Lista = NULL;
}

template<class T>
inline T* cListas<T>::Buscar(int Referencia)
{
	T* Aux = nullptr;

	typename::list<T>::iterator it;

	for (it = this->Lista->begin(); it != this->Lista->end(); it++) {

		if (it->GetCodigo() == Referencia) return it;
	}
	return Aux;
}

template<class T>
inline T* cListas<T>::Quitar(int Referencia)
{
	return nullptr;
}

template<class T>
inline void cListas<T>::Agregar(T* Elemento)
{
	this->Lista->push_back(Elemento);
}

template<class T>
inline void cListas<T>::Eliminar(T* Elemento)
{
	T* Aux = this->Agregar(Elemento);

	if (Aux != nullptr) Lista->erase(Elemento);
}


//                               ------------------------------ SOBRECARGAS ------------------------------


template<class T>
inline void cListas<T>::operator+(T* NuevoElemento)
{
	this->Agregar(NuevoElemento);
}

template<class T>
inline void cListas<T>::operator-(T* ElementoASacar)
{
	this->Eliminar(ElementoASacar);
}

template<class T>
inline bool cListas<T>::operator==(T* Elemento)
{
	typename::list<T>::iterator it = nullptr;
	
	for (it = this->Lista->begin(); it != this->Lista->end(); it++) {

		if (it == Elemento) return true;
	}
	return false;
}

template<class T>
inline ostream& operator<<(ostream& out, cListas<T>& Lista)
{

}

