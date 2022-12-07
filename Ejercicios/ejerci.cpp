/* la empresa "xyz" es distribuidorade los productos a,b,c. dichos productos llegan de la fabrica principal de 
uno en uno. la empresa para distribuirlo meneja la politica de que el primero que entra al deposito es el primero 
en distribuirse. se venden aproximadamente 100 productos mensuales. el dueño desea conocer: 
1- los produtos que se encuentran en el deposito.
2- el producto mas vendido.
3- el lugar del deposito donde se ubica el ultimo producto que llego de la fabrica.
se requiere mostrar un pequeño reporte con la informacion que debe aparecer en un menu de opciones*/

#include<iostream.h>
#include<stdlib.h>
#include<stdio.h>
#define n 100
int pa=0, pb=0, pc=0;

struct cola
{
   char lista [n];
   int pi;
   int pf;

 
};

void crearcola(cola*p, cola*f)
{
   p->pi=0;
   f->pf=-1;
}

bool colavacia(cola*p)
{ 

	if(p->pf==-1)

		return true;

	else
		return false;
}

bool colallena(cola*f)
{
	if(f->pf==n)

		return true;

	else

		return false;
}

void eliminar(cola *p)
{
	if(p->pi==-1)

		cout<<"cola vacia";

	
	else
	{
		cout<<"el valor a eliminar=";

	 p->lista[p->pi];
	*p++;
	}
}


void insertarcola(cola*p,char y)
	{
		if(p->pi==n)
			cout<<"cola LLena"<<endl;
		else
		{
		p->pi++;
		p->lista[p->pi]=y;
		}

	}
void mostrar(cola*p, cola *f)
{
	for (int i=p->pf;i<=p->pi;i++)
	{
	cout<<""<<p->lista[i];
	if((pa>pb) &&(pa>pc))
	cout<<"producto A el mas vendido\n";
	if ((pb>pa) && (pb>pc))
		cout<<"producto B el mas vendido\n";
	if ((pc>pa) && (pc>pb))
		cout<<"producto C el mas vendido\n";
	cout<<"el ultimo producto depositado:"<<p->lista[p->pi]<<"en posicion:"<<p->pi;
	}
}
void salir()
{
	cout<<"salir";
}

void main()
{
	cola p;
	cola f;
	char opc, x;
	int i=0;

	crearcola(&p, &f);
	
	do
	{
		system("color 5c");
		system("pause");
		system("cls");
		cout<<"MENU COLAS" <<endl;
		cout<<"1-Guardar producto"<<endl;
		cout<<"2-" <<endl;
		cout<<"3-mostrar cola"<<endl;
		cout<<"4-salir";
		cout<<"introduzca su opcion" <<endl;
		cin>>opc;
		if (opc=='1')
		{
			system("cls");
			cout<<"Ingrese el producto" <<endl;
			cin>>x;
			insertarcola(&p,x);
		}
		if (opc=='2')
		{
			eliminar (&p);
		}
		if (opc=='3')
		{
			mostrar(&p, &f);
		}
		if (opc=='4')
		{
			salir();
		}
	}while (opc!=0);
}
