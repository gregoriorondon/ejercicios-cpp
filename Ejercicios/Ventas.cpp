/* sistema de control de ventas de una tienda de ropa (damas y caballeros) 
Modulos: 
-cliente, 
-proveedores,
-factura, 
-productos. 
Cliente: Rif/ced (codigo+inicial+i) strcat, strncat, razon social o nombre, direccion, 
telefono.
Proveedores: Rif/ced, razon social o nombre, direccion, telefono, codigo.
Productos: Codigo, nom_producto, fecha_ingreso, costo, cantidad_pedido, stock.
Factura: Datos de la empresa - constante. Datos del cliente- #factura.

   _____________________________________
  |cant|descripcion|total unitario|total|
  |____|___________|______________|_____|
  |    |           |  Sub-total   |     |
  |    |           |   IVA 15%    |     |
  |	   |		   |Total general |     |
  |____|___________|______________|_____|*/

#include <iostream.h>
#include <string.h>
#include <process.h>
char opcc;
void Cliente();
void Proveedores();
void Productos();
void Factura();
void regc();
void mosc();
void regp();
void mosp();
void regpr();
void mospr();
int i=0;
int j=0;
int k=0;
char s;
struct cliente
{
	char nomc[50];
	char cedc[50];
	int rifc;
	char direcc[50];
	int tlfc;
	int celc;
	char codigoc[50];
};
cliente c[100];

struct proveedores
{
	char nomp[50];
	int rifp;
	char direcp[50];
	int tlfp;
	int celp;
	char codigop[50];
};
proveedores p[100];

struct productos
{
	char cod[50];
	char nom_pro[50];
	char fi[50];
	int costo;
	int cp;
	int reserva;
};
productos pr[100];


struct factura
{
};

void main()
{	

	
	char resp='s';
	
	int opc;
		while (opc!=4)
		{
			cout<<"\n\n\t\t\t MENU"<<endl;
			cout<<"\n\n\t\t\t1.Cliente"<<endl;
			cout<<"\n\n\t\t\t2.Proveedores"<<endl;
			cout<<"\n\n\t\t\t3.Productos"<<endl;
			cout<<"\n\n\t\t\t4.Factura"<<endl;
			cin>>opc;

			system("cls");	
			switch (opc)
			{
			case 1:
				Cliente();
				break;
			case 2:
				Proveedores();
				break;
			case 3:
				Productos();
				break;
			case 4:
				Factura();
			case 5:
			goto a;
			}
		}
		a:;
}
void Cliente()
{
	int opc;
	system ("cls");
	b:
	while(opc!=3)
	{
		system("cls");
		cout<<"\t\t1.- Registrar\n"<<endl;
		cout<<"\t\t2.- Mostrar\n"<<endl;
		cout<<"\t\t3.- Salir"<<endl;
		cout<<"\n\t\tOpcion: ";
		cin>>opc;
		
		switch (opc)
		{
		case 1:
			regc();
			break;
		case 2:
			mosc();
			break;
		case 3:
			goto a;
			break;
		default:
			cout<<"Error"<<endl<<"Numero Equivocado"<<endl;
			goto b;
		}
	}
a:;
}
void regc()
{
	char resp;
	
	char opc;
	do
	{
		b:
		cout<<"Ingresar nombre"<<endl;
		cin.getline (c[i].nomc,50);
		cin.getline (c[i].nomc,50);
		cout<<"Ingresar cedula"<<endl;
		cin.getline (c[i].cedc,50);
		cout<<"Ingresar rif"<<endl;
		cin>>c[i].rifc;
		cout<<"Ingresar direccion"<<endl;
		cin.getline (c[i].direcc,50);
		cin.getline (c[i].direcc,50);
		cout<<"Ingresar telefono"<<endl;
		cin>>c[i].tlfc;
		cout<<"Ingresar celular"<<endl;
		cin>>c[i].celc;
		cout<<"Ingresar codigo"<<endl;
		cin.getline (c[i].codigoc,50);
		cin.getline (c[i].codigoc,50);
		cout<<"desea introducir mas s/n"<<endl;
		cin>>opc;
		i++;
		system ("cls");
		if (opc=='s')
		{
			goto b;
		}
	}while (opc=='s'|opc=='S');
	cout<<"Desea salir"<<endl;
	cin>>resp;
	if (resp=='s'|resp=='S')
	{
		Cliente();
	}
	cin.get();
	cin.get();
}
void mosc()
{
	for (int u=0;u<i;u++)
	{
		cout<<c[u].nomc<<endl;
		cout<<c[u].cedc<<endl;
		cout<<c[u].rifc<<endl;;
		cout<<c[u].direcc<<endl;;
		cout<<c[u].tlfc<<endl;
		cout<<c[u].celc<<endl;
		cout<<c[u].codigoc<<endl;
		
	}
	cin.get();
	cin.get();
}

void Proveedores()
{
	int opc;
	system ("cls");
	b:
	while(opc!=3)
	{
		system("cls");
		cout<<"\t\t1.- Registrar\n"<<endl;
		cout<<"\t\t2.- Mostrar\n"<<endl;
		cout<<"\t\t3.- Salir"<<endl;
		cout<<"\n\t\tOpcion: ";
		cin>>opc;
		
		switch (opc)
		{
		case 1:
			regp();
			break;
		case 2:
			mosp();
			break;
		case 3:
			goto a;
			break;
		default:
			cout<<"Error"<<endl<<"Numero Equivocado"<<endl;
			goto b;
		}
	}
a:;
}
void regp()
{
	char resp;
	
	char opc;
	do
	{
		b:
		cout<<"Ingresar nombre"<<endl;
		cin.getline (p[j].nomp,50);
		cin.getline (p[j].nomp,50);
		cout<<"Ingresar rif"<<endl;
		cin>>p[j].rifp;
		cout<<"Ingresar direccion"<<endl;
		cin.getline (p[j].direcp,50);
		cin.getline (p[j].direcp,50);
		cout<<"Ingresar telefono"<<endl;
		cin>>p[j].tlfp;
		cout<<"Ingresar codigo"<<endl;
		cin.getline (p[j].codigop,50);
		cin.getline (p[j].codigop,50);
		cout<<"desea introducir mas s/n"<<endl;
		cin>>opc;
		i++;
		if (opc=='s')
		{
			
			goto b;
		}

		}while (opc=='s'|opc=='S');
		cout<<"Desea salir"<<endl;
		cin>>resp;
		if (resp=='s'|resp=='S')
		{
			Proveedores();
	
		}
	cin.get();
	cin.get();
}
void mosp()
{
	for (int b=0;b<j;b++)
	{
		cout<<p[b].nomp<<endl;
		cout<<p[b].rifp<<endl;;
		cout<<p[b].direcp<<endl;;
		cout<<p[b].tlfp<<endl;
		cout<<p[b].codigop<<endl;
		
	}
	cin.get();
	cin.get();
}

void Productos()
{
	int opc;
	b:
	system ("cls");
	while(opc!=3)
	{
		system("cls");
		cout<<"\t\t1.- Registrar\n"<<endl;
		cout<<"\t\t2.- Mostrar\n"<<endl;
		cout<<"\t\t3.- Salir"<<endl;
		cout<<"\n\t\tOpcion: ";
		cin>>opc;
		
		switch (opc)
		{
		case 1:
			regpr();
			break;
		case 2:
			mospr();
			break;
		case 3:
			goto a;
			break;
		default:
			cout<<"Error"<<endl<<"Numero Equivocado"<<endl;
			goto b;
		}
	}
a:;
}
void regpr()
{
	char resp;
	
	char opc;
	do
	{
		b:
		cout<<"Ingresar nombre del producto"<<endl;
		cin.getline (pr[k].nom_pro,50);
		cin.getline (pr[k].nom_pro,50);
		cout<<"Ingresar codigo"<<endl;
		cin.getline (pr[k].cod,50);
		cin.getline (pr[k].cod,50);
		cout<<"Ingresar fecha de ingreso"<<endl;
		cin.getline (pr[k].fi,50);
		cin.getline (pr[k].fi,50);
		cout<<"Ingresar costo"<<endl;
		cin>>pr[k].costo;
		cout<<"Ingresar cantidad de pedido"<<endl;
		cin>>pr[k].cp;
		cout<<"Ingrese reserva"<<endl;
		cin>>pr[k].reserva;
		
		cout<<"desea introducir mas s/n"<<endl;
		cin>>opc;
		i++;
		if (opc=='s')
		{
			
			goto b;
		}

		}while (opc=='s'|opc=='S');
		cout<<"Desea salir"<<endl;
		cin>>resp;
		if (resp=='s'|resp=='S')
		{
			Proveedores();
	
		}
	cin.get();
	cin.get();
}
void mospr()
{
	for (int h=0;h<k;h++)
	{
		cout<<pr[h].nom_pro<<endl;
		cout<<pr[h].cod<<endl;;
		cout<<pr[h].fi<<endl;;
		cout<<pr[h].costo<<endl;
		cout<<pr[h].cp<<endl;
		cout<<pr[h].reserva<<endl;
	
	}
	cin.get();
	cin.get();
}


void Factura()
{
}
























