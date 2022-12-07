//TEORIA DE COLAS//
#include<iostream.h>
#include<string.h>
#include<process.h>

void insertar();
void mostrar();
void eliminar();

typedef struct
{
	char nombre[30];
}cola;

cola c[100];

int inicio=0;
int final=0;

void insertar()
{
	system ("cls");

	if (final==20)
	{
		cout << " COLA LLENA";
	}

	else
	{
		cin.ignore();
		cout << "Intro Nombre: ";
		cin.getline(c[final].nombre,30);
		final++; cout<<endl;
		cout << " INSERTADO CON EXITO";
	}
}

void mostrar()
{
	system ("cls");

	if (final==0)
	{
		cout << "COLA VACIA";
	}

	else
	{
		for (int i=0; i<=final;i++)
		{
			cout<< " " <<c[i].nombre;
		}
	}
	cin.get();
}

void eliminar()
{
	system("cls");

	if (inicio==final)
	{
		cout << " COLA VACIA";
	}

	else
	{
		cout << c[inicio].nombre << " ELIMINADO";
		cin.get();
		for (int j=0; j<final-1; j++)
		{
			strcpy(c[j].nombre, c[j+1].nombre);
		}
		final--;
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
