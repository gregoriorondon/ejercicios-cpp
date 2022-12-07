#include <iostream.h>
#include <string.h>
#include <process.h>

void insertar();
void mostrar();
void modificar();
void eliminar();

typedef struct
{
	char nombre[30];
	char cedula[12];
	char edad[3];
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
		cout<<"Ingrese la Cedula: ";
		cin.getline(c[i].cedula,12);
		cout<<endl;
		cout<<"Ingrese la Edad: ";
		cin.getline(c[i].edad,3);cout<<endl;
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
		for (int x=0; x<i; x++)
		{
			cout<<endl;
			cout<< "\t\t\t LISTADO GENERAL DE USUARIOS"<<endl<<endl;
			cout << " NOMBRE: " <<c[x].nombre;cout<<endl;
			cout << " CEDULA: " <<c[x].cedula;cout<<endl;
			cout << " EDAD: " <<c[x].edad;cout<<endl;
		}
	}
	cin.get();
}
					


void eliminar()
{
	system("cls");
	char r='s';
	if(i==0)
	{
		system ("cls");
		cout<<"n\t\t\tNo Se Puede Eliminar. No hay Usuarios registrados";
	}
	
	else
	{
		char aux[12];
		int band='n';int j=0;
		cout<<endl<<"Ingrese la Cedula que Quiere Eliminar  ";
		cin.getline(aux,12);cin.getline(aux,12);cout<<endl;
		
		while(band=='n')
		{
			if(strcmp(aux,c[j].cedula)==0)
			{
				cout<<"Desea Eliminar a:  "<<c[j].nombre;
				cin>>r;cout<<endl;
				if(r=='n')
					cout<<"Datos no Tocados";
				else
				{
					for(int k=j;k+1<i;k++)
					{
						strcpy(c[k].nombre,c[k+1].nombre);
						strcpy(c[k].cedula,c[k+1].cedula);
						strcpy(c[k].edad,c[k+1].edad);
					}
					
					i--;
				}
				
				cout<<endl<<"DATO ELIMINADO"<<endl<<endl;
				band='s';
			}
			
			else
			{
				if((band=='n')&&(j==i))
				{
					cout<<"DATO NO ENCONTRADO";
				}
			}
		}
	}
	cin.get();
}

void modificar()
{
	system("cls");
	if(i==0)
	{
		system("cls");
		cout << "\n\t\t\tNO SE PUEDE MODIFICAR. HO HAY DATOS";cout<<endl;
	}
	
	else
	{
		char r='s';
		char aux[12];
		int band='n';int j=0;
		cout<<endl<<"Ingrese la Cedula que Quiere Modificar: ";
		cin.getline(aux,12);cin.getline(aux,12);cout<<endl;

		while(band=='n')
		{
			if(strcmp(aux,c[j].cedula)==0)
			{
				cout<<"Desea Modificar a "<<c[j].nombre <<" S/N: ";
				cin>>r;
				
				if(r=='n')
					cout<<"Datos no Tocados";
				else
				{
					cout<<endl<<"Ingrese Nuevo Nombre: ";
					cin.getline(c[j].nombre,30);cin.getline(c[j].nombre,30);cout<<endl;
					cout<<"INFORMACION MODIFICADA CORRECTAMENTE";
					band='s';
				}
			}
			
			else
			{
				j++;
			}
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
		cout <<"\t\t\t\t 1._Insertar Datos \n"<<endl;
		cout <<"\t\t\t\t 2._Mostrar Datos  \n"<<endl;
		cout <<"\t\t\t\t 3._Eliminar Datos \n"<<endl;
		cout <<"\t\t\t\t 4._Modificar Datos \n"<<endl;
		cout <<"\t\t\t\t 5._Salir \n"<<endl<<endl;
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
			eliminar();
			cin.get();
			system("cls");
		}

		if(opc==4)
		{
			modificar();
			cin.get();
			system("cls");
		}
	}while (opc!=5);
}

