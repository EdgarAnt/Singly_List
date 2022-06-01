#pragma once
#ifndef LISTA_H
#define LISTA_H
#include <iostream>
#include "Nodo.h"

using namespace std;

class Lista
{
public:
	Lista();
	~Lista();
	Nodo* anterior(string);
	Nodo* siguiente(string);
	void elimiar(string);
	void ultimo();
	void primero();
	void incializa(void);
	int tamano();
    void insertaFinal(string);
	void mostrarTodo();
	void vaciar();
	bool vacia();
	void buscar(string);
	void insertaPos(string, int);
	void insertaInicio(string);

private:
	Nodo* h;
};
#endif
