#pragma once
#ifndef NODO_H
#define NODO_H

#include <iostream>

using namespace std;

class Nodo
{
public:
	Nodo();
	~Nodo();


	string dato;
	Nodo* sig;
};

#endif // NODO_H
