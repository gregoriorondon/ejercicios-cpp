/*sistema de control de venta dwe una tienda de ropa(Damas y Cabaleros) 
Modulos

  Clientes
  proveedores
  factura
  productos

Cliente		Rif/C.I +Inicial+i:			Utilizar:STRCAT
												 STRNCAT

  Rif/C.I,Rasgo social o nombre, direccion tlf, celular, codigo.

Proveedores

   Rif/C.I,Rasgo social o nombre, direccion tlf, celular, codigo.

Productos

  Codigo, Nombre del producto, Feecha de ingreso, Costo, Cantidad, cantidad pedido y Stock
  
	
Factura 

  Nombre de la Empresa		#deFactura
  nombre del cliente
____________________________________________
| Cant | Descripocion | Total Uni. | Total  |
|------|--------------|------------|--------|
|------|--------------|------------|--------|
|------|--------------|------------|--------|
|------|--------------|------------|--------|
|------|--------------|------------|--------|
|------|--------------|------------|--------|
|------|--------------|------------|--------|
|------|--------------|------------|--------|
|------|--------------|------------|--------|
|------|--------------|------------|--------|
|------|--------------|Sub total   |--------|
|------|--------------|IVA  15°/   |--------|
|------|--------------|Totalgeneral|--------|*/
//#include<iostream.h>
#include<process.h>
#include<string.h>
struct cliente
{
	char rifce[25];
	char nombre[50];
	char direct[50];
	int telef;
	int celular;
	char codigo[20];
};
struct proveedor
{
	char rifce[25];
	char nombre[50];
	char direct[50];
	int telef;
	int celular;
	char codigo[20];
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
int m=0;
char aux[20];
int p=0;
int a=0;
proveedor prov[100];
cliente cl[100];
productos pro[100];
void ingmercancia();
void mercaexistente();
void reportes();
void buscareportcliente();
void buscareportproveedores();

void cliente()
{
	system("cls");
	do
	{
		system("cls");
		cout<<"Clientes"<<endl;
		cout<<"Nombre ";
		cin>>cl[i].nombre;
		cout<<"Cedula o Rif de "<<cl[i].nombre<<" \01 ";
		cin>>cl[i].rifce;
		cout<<"Direccion de "<<cl[i].nombre<<" \02 ";
		cin.getline(cl[i].direct,50);
		cin.getline(cl[i].direct,50);
		cout<<"Telefono de "<<cl[i].nombre<<" \03 ";
		cin>>cl[i].telef;
		cout<<"Celular de "<<cl[i].nombre<<" \04 ";
		cin>>cl[i].celular;
		cout<<"Codigo ";
		cin>>cl[i].codigo;
		cout<<"Desea Agregar otro s/n "<<endl;
		cin>>resp;
		i++;
	}while(resp=='s' || resp=='S');
}
void proveedores()
{
	system("cls");
	do
	{
		system("cls");
		cout<<"Proveedores"<<endl;
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
		cout<<"Codigo ";
		cin>>prov[i].codigo;
		cout<<"Desea Agregar otro s/n "<<endl;
		cin>>resp;
		j++;
	}while(resp=='s' || resp=='S');
}
void mercancia()
{
	system("cls");
	cout<<"Productos"<<endl;
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

void ingmercancia()
{
	do
	{
		system("cls");
		cout<<"Productos"<<endl;
		cout<<"Codigo ";
		cin>>pro[m].codigo;
		cout<<"Nombre del producto ";
		cin>>pro[m].nomproducto;
		cout<<"Fecha de Ingreso ";
		cin>>pro[m].fechaing;
		cout<<"Costo ";
		cin>>pro[m].costo;
		cout<<"cantidad ";
		cin>>pro[m].cantidad;
		cout<<"Pedido ";
		cin>>pro[m].pedido;
		cout<<"Stock ";
		cin>>pro[m].stock;
		cout<<endl;
		cout<<"Desea Agregar otro s/n ";
		cin>>resp;
		m++;
	}while(resp=='s'||resp=='S');
		if(resp=='n'||resp=='N')
		{
			mercancia();
		}
}
void mercaexistente()
{
	system("cls");
	cout<<"*************************************************"<<endl;
	for(int u=0;u<m;u++)
	{
		cout<<"Codigo "<<pro[u].codigo<<endl;
		cout<<"Nombre del producto "<<pro[u].nomproducto<<endl;
		cout<<"Fecha de ingreso "<<pro[u].fechaing<<endl;
		cout<<"Costo "<<pro[u].costo<<endl;
		cout<<"Cantidad "<<pro[u].cantidad<<endl;
		cout<<"Pedido "<<pro[u].pedido<<endl;
		cout<<"Stock "<<pro[u].stock<<endl;
		cout<<"-----------------------------------------------"<<endl;
	}cout<<endl;
	cin.get();
	cin.get();
	mercancia();
}

void reportes()
{	
	system("cls");
	
	cout<<"1. Cliente"<<endl;
	cout<<"2. Proveedores"<<endl;
	cout<<"3. Menu principal"<<endl;
	cout<<"Opcion ";
	cin>>opc;
	if(opc==1)
	
		buscareportcliente();
	if(opc==2)
		
		buscareportproveedores();

}
int buscar_provedor(char cadena[20])
{
	
	int band=-1;
	for(int a=0;a<j;a++)
	{
		if(strcmp(cadena,prov[a].codigo)==0)
		{
			band=a;
		}
	}
	return (band);
}
void buscareportproveedores()
{
	system("cls");
	char aux[20];
	int x;
	cout<<"Reporte Cliente"<<endl;
	cout<<"Codigo a buscar "<<endl;
	cin.getline(aux,20);
	cin.getline(aux,20);
	a=buscar_provedor(aux);
	if(x==-1)
	{
		cout<<"No esta registrado";
		cin.get();
		cin.get();
	}

	else
		cout<<"-------------------------"<<endl;
		cout<<"Registrado"<<endl;
		cout<<"-------------------------"<<endl;
	for(int a=0;a<j;a++)
	{
		if(strcmp(aux,prov[a].codigo)==0)
		{
			cout<<cl[a].nombre<<endl;
			cout<<cl[a].rifce<<endl;
			cout<<cl[a].telef<<endl;
			cout<<cl[a].celular<<endl;
			cout<<cl[a].codigo<<endl;
		}
	}
	cin.get();
	reportes();
}
int buscar_cliente(char cadena[20])
{
	
	int band=-1;
	for(int p=0;p<i;p++)
	{
		if(strcmp(cadena,cl[i].codigo)==0)
		{
			band=p;
		}
	}
	return (band);
}
void buscareportcliente()
{
	system("cls");
	char aux[20];
	int x;
	cout<<"Reporte del Cliente"<<endl;
	cout<<"Codigo a buscar ";
	cin.getline(aux,20);
	cin.getline(aux,20);
	p=buscar_cliente(aux);
	if(x==-1)
	{
		cout<<"NO esta registrado";
		cin.get();
	}
	else
		cout<<"Registrado"<<endl;
	for(int p=0;p<i;p++)
	{
		if(strcmp(aux,cl[p].codigo)==0)
		{
			cout<<cl[p].nombre<<endl;
			cout<<cl[p].rifce<<endl;
			cout<<cl[p].telef<<endl;
			cout<<cl[p].celular<<endl;
			cout<<cl[p].codigo<<endl;
		}
	}
	cin.get();
	reportes();
}
void factura();
void factura()
{

}
void main()
{
	system("cls");
	do
	{
		system("cls");
		cout<<"sistema de control de ventas"<<endl;
		cout<<"1. Ingresar Cliente"<<endl;
		cout<<"2. Ingresar Proveedor"<<endl;
		cout<<"3. Productos"<<endl;
		cout<<"4. Reportes"<<endl;
		cout<<"5. Facturas"<<endl;
		cout<<"6. Salir del programa"<<endl;
		cout<<"Opcion "<<endl;
		cin>>opc;
		if(opc==1)
		{
			cliente();
		}
		if(opc==2)
		{	proveedores();
		}
		if(opc==3)
		{
			mercancia();
		}
		if(opc==4)
		{
			reportes();
		}
		if(opc==5)
		{	
			factura();
		}
		}while(opc!=6);
}
