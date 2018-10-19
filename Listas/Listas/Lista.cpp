#include "pch.h"
#include "Lista.h"


Lista::Lista()
{
	this->arrayPersonas = NULL;
}


Lista::~Lista()
{
}

bool Lista::insertarPersona(Nodo * persona)
{
	//Asigno memoria
	Nodo* aux = (Nodo*)malloc(sizeof(Nodo));

	if (aux == NULL)
	{
		return false;
	}
	aux = persona;
	aux->sgte = NULL;

	//Si la lista esta vacia
	if (this->arrayPersonas == NULL)
	{
		this->arrayPersonas = aux;
	}
	else
	{
		Nodo* arrayAux = (Nodo*)malloc(sizeof(Nodo));
		arrayAux = this->arrayPersonas;
		arrayAux->sgte = NULL;

		this->arrayPersonas = aux;
		aux->sgte = arrayAux;
	}

	return true;
}

void Lista::imprimirPersonas()
{
	//Si esta vacio
	if (this->arrayPersonas == NULL)
	{
		cout << "La lista no contiene nada" << endl;
	}
	else
	{
		while (this->arrayPersonas != NULL)
		{
			cout << this->arrayPersonas->nombre << " " << this->arrayPersonas->edad << endl;
			this->arrayPersonas = this->arrayPersonas->sgte;
		}
	}
}
