
#include<iostream.h>
#include<process.h>
#include<windows.h>

struct inventario
{
	char titulo[25];
	char fecha_publicacion[20];
	char autor[30];
	int numero;
	int pedido;
	float precio_venta;
};
int i=0;
int resp;
inventario inve[100];
void ingresar();
void imprimir();
void main()
{
	system("cls");
	system("color 0a");
	do
	{
		
		cout<<"\t\tMenu principal"<<endl;
		cout<<"1. Ingresar datos"<<endl;
		cout<<"2. Imprimir datos"<<endl;
		cout<<"3. Salir del sistema"<<endl;
		cout<<"Ingrese su opcion ";
		cin>>resp;
		if(resp==1)
		{
			ingresar();
			system("cls");
		}
		if(resp==2)
		{
			imprimir();
			system("cls");
		}
		if(resp==3)
			cout<<"Adios";
	}while(resp!=3);
		cin.get();
		cin.get();
}
void ingresar()
{
	system("cls");
	char opc;
	do
	{
		cout<<"Ingrese el Titulo del libro ";
		cin.getline(inve[i].titulo,25);
		cin.getline(inve[i].titulo,25);
		cout<<"Ingrese la fecha de publicacion ";
		cin.getline(inve[i].fecha_publicacion,20);
		cout<<"Ingrese El autor ";
		cin.getline(inve[i].autor,30);
		cout<<"Ingrese el numero de libros existentes";
		cin>>inve[i].numero;
		cout<<"Ingrese el numero de pedidos ";
		cin>>inve[i].pedido;
		cout<<"Ingrese El precio de venta ";
		cin>>inve[i].precio_venta;
		cout<<"Desea de nuevo s/n "<<endl;
		cin>>opc;
		i++;
	}while(opc=='s' || opc=='S');
	imprimir();
	cin.get();
	cin.get();
}
void imprimir()
{
	system("cls");
	cout<<"Titulo\t\t"<<"fecha\t\t"<<"autor\t\t"<<"numero\t\t"<<"precio\t\t"<<endl;
	cout<<"________________________________________________________________________\n";
	for(int j=0;j<i;j++)
	{
		cout<<cata[j].titulo<<"\t\t"<<cata[j].fecha_publicacion<<"\t\t"<<cata[j].autor<<"\t\t"<<cata[j].numero<<"\t\t"<<cata[j].precio_venta<<endl;
	}cout<<"_______________________________________________________________________";
	cin.get();
	cin.get();
}