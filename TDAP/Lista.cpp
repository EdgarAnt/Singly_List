#include "Lista.h"


//void Nodo::eliminar_todo()
//{
	//if (sig)
		//sig->eliminar_todo();
	//delete this;
//}

int Lista::tamano()
{
	int cont = 0;
	Nodo* aux = h;
	while (aux)
	{
		cont++;
		aux = aux->sig;

	}
	cout << cont << endl;
	return cont;
}
void Lista::incializa(void)
{
	h = nullptr;

}
void Lista::insertaPos(string d, int pos)
{
	Nodo* tpm = new Nodo();
	tpm->dato = d;
	Nodo* aux = h, * auxret = h;

	int i = 0;
	if (pos >= 1 && pos - 1 < tamano())
	{


		while (i < pos - 1 && aux)
		{
			auxret = aux;
			aux = aux->sig;
			i++;
		}
		if (aux == h)
		{
			tpm->sig = h;
			h = tpm;
		}
		else
		{
			auxret->sig = tpm;
			tpm->sig = aux;
		}
	}
	else
	{
		cout << "posision no valida" << endl;
	}
}
void Lista::insertaInicio(string d)
{
	Nodo* tmp = new Nodo;
	tmp->dato = d;

	if (vacia())
	{
		h = tmp;
	}
	else
	{
		tmp->sig = h;
		h = tmp;
	}
}
void Lista::insertaFinal(string d)
{
	Nodo* tpm = new Nodo();
	tpm->dato = d;
	Nodo* aux = h;

	if (aux == nullptr)
	{
		h = tpm;
	}
	else
	{
		while (aux->sig)
		{
			aux = aux->sig;
		}
		aux->sig = tpm;
	}
}
void Lista::elimiar(string d)
{
	Nodo* aux = h;
	Nodo* auxR = nullptr;
	bool band = true;
	if (aux)
	{
		while (aux && band)
		{
			if (aux->dato != d)
			{
				auxR = aux;
				aux = aux->sig;
			}
			else
			{
				band = false;

			}
		}
		if (aux == nullptr)
		{
			cout << "Dato no encontrado" << endl;
		}
		else if (aux == h)
		{
			h = h->sig;
			delete aux;
		}
		else
		{
			auxR->sig = aux->sig;
			delete aux;
		}

	}
	else
	{
		cout << "lista vacia" << endl;
	}


}


bool Lista::vacia()
{
	if (h == nullptr)
	{
		//cout << "Si esta vacia" << endl;
		return true;
	}
	else
	{
		//cout << "No esta vacia" << endl;
		return false;
	}
}

void Lista::ultimo()
{
	if (vacia()) {
		cout << "La lista esta vacia" << endl;
	}
	else {
		Nodo* aux = h;
		while (aux->sig != nullptr) {
			aux = aux->sig;
		}
		cout << "Ultimo elemento= " << aux << endl;
	}
}
Nodo* Lista::siguiente(string d)
{
	if (vacia()) {
		cout << "La lista esta vacia" << endl;
	}
	else {
		Nodo* aux = nullptr;
		Nodo* auxS = h;
		bool band = true;

		if (auxS) {
			while (auxS and band) {
				if (auxS->dato != d) {
					aux = auxS;
					auxS = auxS->sig;
				}
				else {
					band = false;
				}
			}

			if (auxS == nullptr) {
				cout << "El dato no existe " << endl;
				return nullptr;
			}
			else if (auxS->sig == nullptr) {
				cout << "Ultima posicion " << endl;
				return auxS;
			}
			else {
				cout << "Elemento siguiente a " << d << " es: " << auxS->sig << endl;
				return auxS->sig;
			}
		}
	}
	return nullptr;
}


void Lista::primero()
{
	if (vacia()) {
		cout << "La lista esta vacia" << endl;
	}
	else {
		cout << "Primer elemento = " << h << endl;
	}
}
Nodo* Lista::anterior(string d)
{
	if (vacia()) {
		cout << "La lista esta vacia" << endl;
	}
	else {
		Nodo* aux = h;
		Nodo* auxR = nullptr;
		bool band = true;

		if (aux) {
			while (aux and band) {
				if (aux->dato != d) {
					auxR = aux;
					aux = aux->sig;
				}
				else {
					band = false;
				}
			}

			if (auxR == nullptr) {
				cout << "Primera posicion " << endl;
				return auxR;
			}
			else if (aux == nullptr) {
				cout << "El dato no existe " << endl;
				return nullptr;
			}
			else {
				cout << "Elemento anterior a " << d << ": " << auxR << endl;
				return auxR;
			}
		}
	}
	return nullptr;
}

void Lista::buscar(string d) {
	Nodo* aux = h;
	int cont = 1;
	int cont2 = 0;

	if (vacia()) {
		cout << "Error, lista vacia" << endl;
	}
	else {
		while (aux) {
			if (aux->dato == d) {
				cout << "El dato " << d << " se encuentra en la posicion: " << cont - 1 << endl;
				cont2++;
			}
			aux = aux->sig;
			cont++;
		}
		if (cont2 == 0) {
			cout << "No existe el dato (buscar)" << endl;
		}
		cout << endl << endl;
	}
}

void Lista::mostrarTodo()
{
	Nodo* aux = h;
	if (aux)
	{
		while (aux) {
			cout << aux->dato << "= " << &aux->dato << endl;
			aux = aux->sig;
		}
	}
	else
	{
		cout << "lista vacia" << endl;
	}
}
void Lista::vaciar()
{
	if (vacia()) {
		cout << "Error,lista vacia" << endl;
	}
	else {
		//h->eliminar_todo();
		h = 0;
		cout << "Lista vaciada con exito" << endl;
	}
}


Lista::Lista()
{
	incializa();
}

Lista::~Lista()
{

}
