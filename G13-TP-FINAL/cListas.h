#pragma once
/*
#include <list>
#include <exception>
#include <iostream>


using namespace std;

template<class T>
class cListas
{
protected:

	list <T> Lista;

	//Hacemos friend a las clases que utilizan esta template

	//friend class cANPA; 
	//friend class cHospital;
	//friend class cRegistros;
	//friend class cPaciente;

public:

	cListas();

	~cListas();

	T* Buscar(int Referencia);

	T* Quitar(int Referencia);

	void Agregar(T *Elemento);

	void Eliminar(T* Elemento);

	int Size();

	T* Inicio();

	T* Fin();

	void operator+(T* NuevoElemento);
	
	void operator-(T* ElementoASacar);
	
	bool operator==(T* Elemento);

	T operator[](int pos);

	

};

//                                 ------------------------------ METODOS ------------------------------

template<class T>
inline cListas<T>::cListas() {}

template<class T>
inline cListas<T>::~cListas() {}

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
	this->Lista.push_back(*Elemento);
}

template<class T>
inline void cListas<T>::Eliminar(T* Elemento)
{

	if (Elemento != nullptr) Lista.erase(Elemento);
}

template<class T>
inline int cListas<T>::Size()
{
	
	if (this->Lista.size() > 0)return this->Lista.size();
	else return 0;
}

template<class T>
inline T* cListas<T>::Inicio()
{
	typename::list<T>::iterator it = this->Lista.begin();

	return *it;
}

template<class T>
inline T* cListas<T>::Fin()
{
	typename::list<T>::iterator it = this->Lista.end();

	return *it;
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
inline T cListas<T>::operator[](int pos)
{
	typename::list<T>::iterator it;

	int Cont = 0;

	if (this->Lista.size() >= pos) {

		for (it = this->Lista.begin(); it != this->Lista.end(); it++) {

			if (Cont == pos)return *it;

			Cont++;
		}
	}
	
}

*/