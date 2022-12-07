/*Implemente una Cola en Visual C++, de manera que reciba los datos de personas en una cola de un
banco, esto es, nombre y conjunto de transacciones a realizar.  Se requiere conocer el tiempo
estimado de permanencia de cualquier persona en la cola, si se conocen los tiempos estimados
para cada tipo de transacción: 
Retiro -> 4 min
Depósito -> 2 min
Consulta -> 3 min
Actualización -> 5 min
Pagos -> 2 min*/

#include <iostream.h>
#include <windows.h>
char opc,opcc;

#define n 50



int consulta,deposito,actualizacion,pagos,retiro;

typedef struct
{
	int pr;
	int pf;
	int pi;
	char p[50];
}cola;
int i=0;
void crear_cola(cola *c)
{
	c->pf=-1;	c->pi=0;
}
void operacion(cola *c)
{
	
		
			system("cls");
		
			cout<<"BANCO "<<endl;
			cout<<endl;
			c->pf++;
			cout<<"Ingrese Nombre "<<endl;;
			cin.ignore();
			cin.getline(c->p,50);
			cout<<endl;
		
a:
		system("cls");
		
		cout<<endl<<endl<<endl;
		cout<<"Operaciones"<<endl;
		cout<<"0. Retiro"<<endl;
		cout<<"1. Deposito"<<endl;
		cout<<"2. Consulta"<<endl;
		cout<<"3. Actualizacion"<<endl;
		cout<<"4. Pagos"<<endl;
		cout<<"5. regresar al menu"<<endl;
	
		cout<<"Opcion ";
		cin>>opc;
		if(opc=='0')
			retiro=retiro+4;
		else
		{
		if(opc=='1')
				deposito=deposito+2;
			else
			{
				if(opc=='2')
					consulta=consulta+3;
				else
				{
					if(opc=='3')
						actualizacion=actualizacion+5;
					else
					{
						if(opc=='4')
							pagos=pagos+2;
						else
						{
							goto b;
						}
					}
				}
			}
		}
		
		cout<<"Desea hacer otra operacion"<<endl;
		cin>>opc;

		if(opc=='s'||opc=='S')
		{
			goto a;
		}
		cout<<endl;
		c->pr=pagos+actualizacion+deposito+retiro+consulta;
		system("cls");
		cout<<endl;
		cout<<endl<<endl;
		cout<<"Ingerse Nombre "<<c->p<<endl;
		cout<<endl;
		cout<<"Tiempo Retiro "<<retiro<<endl;
		cout<<"Tiempo de deposito   "<<deposito<<endl;
		cout<<"Tiempo de consulta   "<<consulta<<endl;
		cout<<"Tiempo de pagos   "<<pagos<<endl;
		cout<<"Tiempo de actualizacion   "<<actualizacion<<endl;
		cout<<"total de tiempo en el banco"  <<c->pr<<endl;	
		cout<<endl<<endl<<endl<<endl;

		cout<<endl;
b:;
		cin.get();
		cin.get();
}
void main()
{
	cola c;
	crear_cola(&c);
	do
	{
		system("cls");
		system("color 1a");
		cout<<endl;
		cout<<"SISTEMA BANCARIO "<<endl;
		cout<<endl<<endl<<endl;
	
		cout<<" 1. Clientes   "<<endl;
		cout<<" 2. Salir del Sistema"<<endl;
		cout<<"opcion"<<endl;	
		cin>>opcc;
		if(opcc=='1')
		{
			operacion(&c);
		}
	}while(opcc!='2');
}