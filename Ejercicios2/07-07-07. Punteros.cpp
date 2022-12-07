#include <iostream.h>
#include <string.h>
#include <process.h>

struct pila
{
	char nombre[25];
	pila *sig;
};

pila *cima=NULL; //variable central
pila *aux; //Aux para rrecorrer la Pila
pila *dato; //pila nom[20]

void insertar()
{
	system ("cls");
	dato= new pila;
	cin.ignore();

	if (cima==NULL)
	{
		dato ->sig=NULL;
		cout<< " Nombre: ";
		cin.getline(dato ->nombre,25);
		cima = dato;
	}
	else
	{
		dato->sig = cima;
		cout << "Nombre: ";
		cin.getline(dato ->nombre,25);
		cima = dato;
	}
}

void mostrar()
{
	system ("cls");
	if(cima==NULL)
	{
		cout<< " PILA VACIA";
	}
	else
	{
		aux = new pila;
		aux= cima;

		while(aux!=NULL)
		{
			cout<< " " <<aux->nombre;
			aux= aux->sig;
		}
		delete (aux);
	}
	cin.get();
}

void eliminar()
{
	system ("cls");
	if (cima==NULL)
	{
		cout<<"PLA VACIA";
	}
	else
	{
		cout<< cima->nombre << " ELIMINADO\a!!!...";
		cima=cima->sig;
	}
	cin.get();
}

void main()
{
	int opc;
	do
	{
		system("cls");
		cout<<endl<<endl;
		cout << "\t\t\t\t PUNTEROS. PILAS Y COLAS "<<endl<<endl;

		cout << "\t\t\t 1.- INSERTAR    "<<endl<<endl;
		cout << "\t\t\t 2.- MOSTRAR "<<endl<<endl;
		cout << "\t\t\t 3.- ELIMINAR "<<endl<<endl;
		cout << "\t\t\t 4.- SALIR DEL PROGRAMA   "<<endl<<endl;
		cout << "\t\t INGRESE OPCION: ";
		cin>>opc;

		if (opc==1)
		{
			insertar();
			cin.get();
		}
		if (opc==2)
		{
			mostrar();
			cin.get();
		}
		if (opc==3)
		{
			eliminar();
			cin.get();
		}
	}while(opc!=4);
}