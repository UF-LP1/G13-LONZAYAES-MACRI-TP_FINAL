#pragma once
#include <list>


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
	
	void operator==(T* Elemento);

	

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
	return *T();
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
}

template<class T>
inline void cListas<T>::operator-(T* ElementoASacar)
{
}

template<class T>
inline void cListas<T>::operator==(T* Elemento)
{
}

