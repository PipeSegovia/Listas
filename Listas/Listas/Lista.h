#pragma once
#ifndef LISTA_H
#define LISTA_H


#include <math.h>
#include <iostream>
#include <string>

using namespace std;

struct Nodo
{
	char* nombre;
	int edad;
	Nodo* sgte;
};

class Lista
{
public:
	Lista();
	~Lista();
	bool insertarPersona(Nodo *persona);
	void imprimirPersonas();

private:
	Nodo* arrayPersonas;

};


#endif // !LISTA_H


