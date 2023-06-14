#pragma once
#include <list>
#include <exception>
#include <iostream>

using namespace std;

template<class T>
class cListas
{
protected:

	list <T> *Lista;

	friend class cANPA;  //Hacemos friend a ANPA para mejor manejo de sus listas

public:

	cListas();

	~cListas();

	T* Buscar(int Referencia);

	void Agregar();

	T* Quitar(int Referencia);

	void Eliminar(int Referencia);

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
	for (std::list<T>::iterator it = this->Lista->begin(); it != this->Lista->end(); it++) {

		if (it->GetCodigo() == Referencia) return T;
	}
}

template<class T>
inline void cListas<T>::Agregar()
{
	
}

template<class T>
inline T* cListas<T>::Quitar(int Referencia)
{
	return nullptr;
}

template<class T>
inline void cListas<T>::Eliminar(int Referencia)
{
}

//                               ------------------------------ SOBRECARGAS ------------------------------


template<class T>
inline void cListas<T>::operator+(T* NuevoElemento)
{
	if(NuevoElemento != NULL) this->Lista->push_back(NuevoElemento);
}

template<class T>
inline void cListas<T>::operator-(T* ElementoASacar)
{

	this->Lista->erase(ElementoASacar);
	/*try {
		this->Lista->erase(ElementoASacar);
	}
	catch (exception* e) {

		cout << e.what() << endl;
		delete e;
	}
*/
}

template<class T>
inline bool cListas<T>::operator==(T* Elemento)
{
	for (std::list<T>::iterator it = this->Lista->begin(); it != this->Lista->end(); it++) {

		if(it == Elemento) return true
	}
	return false
}

template<class T>
inline ostream& operator<<(ostream& out, cListas<T>& Lista)
{

}

