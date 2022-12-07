#include<iostream.h>
#include<stdio.h>

typedef struct
{
	char nombre[80];
	int cedula;
	char sexo[1];
	char direccion[100];
	int  telefono;
	int hijos;
	

}usuarios;

usuarios p[100];
int i=0;

void ingresar();
void modificar();
void consultar();
void eliminar();
void mostrar();

void main(void)
{
	char opcion;

	cout << "\n     SISTEMA DE REGISTRO\n";
	cout << "\n Operaciones Disponibles:\n";
	do
	{
		cout <<endl <<endl;
		cout << " 1. Ingresar Nuevo Usuario\n";
		cout << " 2. Modificar Datos de Usuario\n";
		cout << " 3. Consultar Usuario\n";
		cout << " 4. Eliminar Usuario\n";
		cout << " 5. Salir del Sistema\n";
	
		cout << "\n Marque su Opcion: ";
		
		switch (opcion)
		{
			case '1': ingresar(); break;
			case '2': modificar(); break;
			case '3': consultar(); break;
			case '4': eliminar(); break;
			case '5': break;
		}
	}
}

void ingresar()
{
	char w='s';
	int i=0;
	while((w=='s')&&(i<100))
	{
		//usuarios;
		cout<<"Introduzca Nombre del Usuario";
		cin.getline	(p[i].nombre, 80); 
		cout<<"Introduzca Cedula de Indentidad";	
		cin>>p[i].cedula;
		cout<<"Introduzca Sexo del Usuario";
		cin.getline (p[i].sexo, 1);
		cout<<"Introduzca Direccion de Habitacion";
		cin.getline (p[i].direccion, 100);
		cout<<"Introduzca Numero de Telefono";
		cin>>p[i].telefono;
		cout<<"Introduzca Numero de Hijos";
		cin>>p[i].hijos;

		i++;
		cout<<"desea continuar s/n:";
		cin>> w;
	}
}			