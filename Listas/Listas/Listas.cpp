#include "pch.h"
#include <iostream>
#include "Lista.h"
#include <malloc.h>

using namespace std;

int main()
{
	cout << "Listas" << endl;

	cout << "Inserto un valor a la lista de nodos" << endl;

	Lista* listaPersonas = new Lista();
	//Asigno memoria
	Nodo* persona = (Nodo*)malloc(sizeof(Nodo));
	persona->nombre = (char*)"Juan";
	persona->edad = 32;

	Nodo* persona2 = (Nodo*)malloc(sizeof(Nodo));
	persona2->nombre = (char*)"Pepe";
	persona2->edad = 14;

	listaPersonas->imprimirPersonas();

	if (listaPersonas->insertarPersona(persona) == true)
	{
		cout << "Se inserto correctamente" << endl;
	}
	else
	{
		cout << "Ups! hubo un problema" << endl;
	}

	listaPersonas->imprimirPersonas();

	if (listaPersonas->insertarPersona(persona2) == true)
	{
		cout << "Se inserto correctamente" << endl;
	}
	else
	{
		cout << "Ups! hubo un problema" << endl;
	}
	listaPersonas->imprimirPersonas();


	cin.get();
}

