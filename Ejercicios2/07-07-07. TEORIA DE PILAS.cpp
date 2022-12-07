//Teoria de PILAS//
#include<iostream.h>
#include<string.h>
#include<process.h>

void insertar();
void mostrar();
void eliminar();

int pila[20];
int cima=-1;

void insertar()
{
	system("cls");
	if (cima==20)
	{
		cout << " PILA LLENA";
	}

	else
	{
		cout<< " Introduzca Dato ["<<cima; cout<<"]: ";
		cin>>pila[cima];
		cima++;
		cout<< endl;
		cout<< " Elemento Insertado!!!...";
	}
	cin.get();
}	

void mostrar()
{
	system("cls");
	if (cima==-1)
	{
		cout << "PILA VACIA";
	}
	
	else
	{
		for (int i=cima; i>-1; i--)
		{
			cout<<endl<<pila[i];
		}
	}
	cin.get();
}

void eliminar()
{
	system ("cls");
	char r;
	if (cima==-1)
	{
		cout<< " PILA VACIA";
	}
	else
	{
		cout << " Desea Eliminar " <<pila[cima]<<" (S/N): ";
		cin>>r;

		if ((r=='s') || (r=='S'))
		{
			cout<<endl;
			cout <<" " << pila[cima] << " ELIMINADA!!...";
			cima--;
		}
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
		cout << "\t\t\t\t PILAS Y COLAS "<<endl<<endl;

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

