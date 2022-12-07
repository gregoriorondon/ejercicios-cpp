/*realice un programa que guarde los datos personales de los alumnos del curso C++
(Nombre, Apellido, Fecha de nacimiento, Cedula y Sexo).
Se desea que una vez guardada la informacion pueda ser consultada al introducir el
N° de C.I(Realice todas las validaciones que crea convenientes).
Si la C.I no existe debe emitir un mensaje y permitir que esa nueva persona sesa agregada

  Utilizar Programacion Modular, Registros, Estructuras Condicionales y Repetitivas*/

#include<iostream.h>
#include<string.h>
#include<windows.h>

void insertar();
void mostrar();
void buscar();

typedef struct
{
	char nombre[30];
	char apellido[30];
	char fecha_nac[15];
	char cedula[12];
	char sexo[3];
}registro;

registro c[200];
int  i=0;

void insertar()
{
	system("cls");
	char a='s';
	while(a=='s')
	{
		cin.ignore();
		cout<<"Ingrese el Nombre: ";
		cin.getline(c[i].nombre,30);
		cout<<endl;
		cout<<"Ingrese el Apellido: ";
		cin.getline(c[i].apellido,30);
		cout<<endl;
		cout<<"Ingrese la Fecha de Nacimiento: ";
		cin.getline(c[i].fecha_nac,15);
		cout<<endl;
		cout<<"Ingrese la Cedula: ";
		cin.getline(c[i].cedula,12);
		cout<<endl;
		cout<<"Ingrese el sexo: ";
		cin.getline(c[i].sexo,3);
		cout<<endl;
		i++;
		cout<<"Desea Agregar Otro (S/N)?";
		cin>>a;
		cout<<endl;
	}
	cin.get();
}

void mostrar()
{
	system("cls");
	if (i==0)
	{
		cout << "\n\n\t\t\t NO HAY DATOS REGISTRADOS";
	}
	else
	{
		cout<< "\t\t\t LISTADO GENERAL DE ALUMNOS DEL CURSO C++"<<endl<<endl;
		for (int x=0; x<i; x++)
		{
			cout<<endl;
			cout<< " NOMBRE : " <<c[x].nombre;cout<<endl;
			cout<< " APELLIDO : " <<c[x].apellido;cout<<endl;
			cout<< " FECHA DE NACIMIENTO : "<<c[x].fecha_nac;cout<<endl;
			cout << " CEDULA : " <<c[x].cedula;cout<<endl;
			cout << " SEXO : " <<c[x].sexo;cout<<endl;
		}
	}
	cin.get();
}

int buscar_ci(char cadena[12])
{
	int band=-1;
	for(int k=0;k<i;k++)
	{
		if(strcmp(cadena,c[k].cedula)==0)
		{
			band=k;
		}
	}
	return(band);
}

void buscar()
{
	char opc='s';
	system ("cls");
	char aux[12];int p;
		
	cout<<"Ingrese Cedula de Alumno a Consultar: ";
	cin.getline(aux,12);
	cin.getline(aux,12);
	p=buscar_ci(aux);
	if(p==-1)
	{
		cout<<endl;cout<<endl;
		cout<< "\t   La Cedula No Esta Registrada!!!...";cout<<endl<<endl;
		cout<< "\t   Ingresar Nuevo Alumno? S/N: ";
		cin>>opc;
		if ((opc=='s')||(opc=='S'))
		{
			insertar();
		}
		if (opc=='n')if (opc=='N')
		{
			void main();
		}
	}
	else
	{
		cout<<endl;cout<<endl;
		for(int k=0;k<i;k++)
		{
			if(strcmp(aux,c[k].cedula)==0)
			{
				cout << " Nombres: "   <<c[k].nombre;cout<<endl;
				cout << " Apellidos: "   <<c[k].apellido;cout<<endl;
				cout << " Cedula: "   <<c[k].cedula;cout<<endl;
				cout << " Fecha de Nacimiento: "  <<c[k].fecha_nac;cout<<endl;
				cout << " Sexo:   "   <<c[k].sexo;cout<<endl;
			}
			cin.get();
		}
	}
}


void main()
{
	system("color 1f");
	int opc;
	do
	{
		system("cls");
		cout<<endl<<endl;
		cout <<"\t\t\t\t 1._Insertar Datos \n"<<endl;
		cout <<"\t\t\t\t 2._Mostrar Datos  \n"<<endl;
		cout <<"\t\t\t\t 3._Buscar Datos  \n"<<endl;
		cout <<"\t\t\t\t 4._Salir \n"<<endl<<endl;
		cout <<"\t\t INGRESE SU OPCION: ";
		cin>>opc;

		if(opc==1)
		{
			insertar();
			cin.get();
			system("cls");
		}
		if(opc==2)
		{
			mostrar();
			cin.get();
			system("cls");
		}
		if(opc==3)
		{
			buscar();
			cin.get();
			system("cls");
		}
	}while (opc!=4);
}