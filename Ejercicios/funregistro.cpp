/*Realizar un sistema de control de ventas de una tienda de ropa, damas y caballeros,debe llevar modulos
1. q maneje los clientes.
2. los proveedores.
3. Factura.
4. Productos(Articulos q esten a la venta).
5. Reportes
6. Cliente(Individual and General)

datos clientes
	Rif/Cedula
	Razon social
	direccion
	telefono
	celular
	codigo(LLeva Cedula+inicial nombre+posicion).
	Utilizar	STRCAT
				STRNCAT
Datos Proveedores
	rif/cedula
	Razon social o nombre
	Direccion
	Telefono
	Celular
	Codigo

Productos
	Codigo
	Nombre producto
	Fecha ingreso
	Costo
	cantidad
	Pedido
	Stock

Factura
	Datos de la empresa
	datos del cliente
	Numero de factura
	*/
#include<iostream.h>
#include<process.h>
#include<string.h>
struct cliente
{
	char rifce[25];
	char nombre[50];
	char direct[50];
	int telef;
	int celular;
};
struct proveedor
{
	char rifce[25];
	char nombre[50];
	char direct[50];
	int telef;
	int celular;
};
struct productos
{
	char codigo[25];
	char nomproducto[50];
	char fechaing[10];
	float costo;
	int cantidad;
	int pedido;
	int stock;
};

int opc;
char resp;
int i=0;
int j=0;
proveedor prov[100];
cliente cl[100];
productos pro[100];
void ingmercancia();
void mercaexistente();
void cliente()
{
	system("cls");
	do
	{
		system("cls");
		cout<<"\t\t\t...:::Clientes:::..."<<endl;
		cout<<"Nombre ";
		cin>>cl[i].nombre;
		cout<<"Cedula o Rif de "<<cl[i].nombre<<" \01 ";
		cin>>cl[i].rifce;
		cout<<"Direccion de "<<cl[i].nombre<<" \02 ";
		cin.getline(cl[i].direct,50);
		cin.getline(cl[i].direct,50);
		cout<<"Telefono de "<<cl[i].nombre<<" \03 ";
		cin>>cl[i].telef;
		cout<<endl;
		cout<<"Celular de "<<cl[i].nombre<<" \04 ";
		cin>>cl[i].celular;
		cout<<endl;
		i++;
		cout<<"Desea Agregar otro s/n "<<endl;
		cin>>resp;
	}while(resp=='s' || resp=='S');
}
void proveedores()
{
	system("cls");
	do
	{
		system("cls");
		cout<<"\t\t\t...:::Proveedores:::..."<<endl;
		cout<<"Nombre ";
		cin>>prov[j].nombre;
		cout<<"Cedula o Rif de "<<prov[j].nombre<<" \01 ";
		cin>>prov[j].rifce;
		cout<<"Direccion de "<<prov[j].nombre<<" \02 ";
		cin.getline(prov[j].direct,50);
		cin.getline(prov[j].direct,50);
		cout<<"Telefono de "<<prov[j].nombre<<" \03 ";
		cin>>prov[j].telef;
		cout<<"Celular de "<<prov[j].nombre<<" \04 ";
		cin>>prov[j].celular;
		cout<<endl;
		j++;
		cout<<"Desea Agregar otro s/n "<<endl;
		cin>>resp;
	}while(resp=='s' || resp=='S');
}
void mercancia()
{
	system("cls");
	cout<<"\t\t\t...:::Productos:::..."<<endl;
	cout<<"1. Ingresar "<<endl;
	cout<<"2. Existente"<<endl;
	cout<<"3. Volver al menu principal"<<endl;
	cout<<"Opcion ";
	cin>>opc;
	if(opc==1)
		ingmercancia();
	if(opc==2)
		mercaexistente();
}
int k=0;
void ingmercancia()
{
		system("cls");
		cout<<"\t\t\t...:::Productos:::..."<<endl;
		cout<<"Codigo ";
		cin>>pro[k].codigo;
		cout<<"Nombre del producto ";
		cin>>pro[k].nomproducto;
		cout<<"Fecha de Ingreso ";
		cin>>pro[k].fechaing;
		cout<<"Costo ";
		cin>>pro[k].costo;
		cout<<"cantidad ";
		cin>>pro[k].cantidad;
		cout<<"Pedido ";
		cin>>pro[i].pedido;
		cout<<"Stock ";
		cin>>pro[k].stock;
		cout<<endl;
		i++;
		cout<<"Desea Agregar otro s/n ";
		cin>>resp;
		if(resp=='n'||resp=='N')
		{
			mercancia();
		}
		else
		{
			ingmercancia();
		}
}
void mercaexistente()
{
	system("cls");
	cout<<"Codigo "<<pro[k].codigo<<endl;
	cout<<"Nombre del producto "<<pro[k].nomproducto<<endl;
	cout<<"Fecha de ingreso "<<pro[k].fechaing<<endl;
	cout<<"Costo "<<pro[k].costo<<endl;
	cout<<"Cantidad "<<pro[k].cantidad<<endl;
	cout<<"Pedido "<<pro[k].pedido<<endl;
	cout<<"Stock "<<pro[k].stock<<endl;
	cin.get();
	cin.get();
}

void main()
{
	system("cls");
	do
	{
		system("cls");
		cout<<"\t\t\t...:::Sistema Automatizado Hp:::..."<<endl;
		cout<<"1. Ingresar Cliente"<<endl;
		cout<<"2. Ingresar Proveedor"<<endl;
		cout<<"3. Productos"<<endl;
		cout<<"4. Facturas"<<endl;
		cout<<"5. Reportes"<<endl;
		cout<<"6. Salir del Software"<<endl;
		cout<<"Opcion ";
		cin>>opc;
		if(opc==1)
			cliente();
		if(opc==2)
			proveedores();
		if(opc==3)
			mercancia();
	}while(opc!=6);
}
