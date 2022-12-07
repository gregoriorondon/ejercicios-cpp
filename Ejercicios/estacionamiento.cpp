/*En un estacionamiento se distribuyen los vehiculos uno de tras del otro, lo que quiere decir que
el ultimo en entrar es el primero en salir. sin enbargo cuando el estacionamiento esta lleno, los 
vehiculos deben esperarse en las afueras del mismo haciendo una cola. el horario de trabajo del 
estacionamiento es de 8 a 12 y su capacidad es de 15 puesto. dicha informacion debe considerarse 
para parquear los vehiculos en el estacionamiento.

se requiere mostrar:
- los vehiculos estacionados
- los vehiculos en cola 
- cuantos vehiculos salen del estacionamiento 
- y cual es el ultimo vehiculo en la cola

NOTA: en la cola no pueden haber mas de 10 vehiculos*/
#include<iostream.h>
#include<stdlib.h>
#include <windows.h>
#include<stdio.h>
#include<process.h>
#define n 4

typedef struct

{
	int lista[n];
	int tope;
	int j;

}pila;

typedef struct
{
	int lista[n];
	int pi;
	int pf;
}cola;

char opc;
int a;
int b;

void crear_cola(cola *c)
{
	c->pf=-1;
	c->pi=0;
}

void crear_pila(pila *p)
{
	p->tope=-1;
}

void estacionar_vehiculo(pila *p,cola *c)
{
	system ("cls");		
	int hora;
	cout<<"ESTACIONAMIENTO"<<endl;
	cout<<"hora de trabajo"<<endl;
	cin>> hora;

	if(hora<8||hora>12)
	{
		cout<<"ESTACIONAMIENTO CERRADO"<<endl;
	}
	else
	{

	
	if(p->tope==n-1)
	{		
		cout<<endl;
		cout<<"no hay espacios en la pila"<<endl;
		cout<<endl;
	
	if(c->pf==n-1)
	{
		cout<<endl;
		cout<<"cola llena"<<endl;
	}	
	else
	{		cout<<endl;
		c->pf++;
		c->lista[c->pf]=b;
		cout<<"cola inical"<<c->pi<<endl;
		cout<<"cola final"<<c->pf<<endl;
	}
	
	}

else
	{
		cout<<endl;cout<<endl;
		p->tope++;
		p->lista[p->tope]=a;
		cout<<"estacionamiento"<<p->lista[p->tope]<<endl;
		cout<<"puesto"<<p->tope;
	}
	}
	
	cin.get();
	cin.get();

}

void estacionados(pila *p, cola * c)

{
	system("cls");
	cout<<"Estacionamiento"<<endl;
	if(p->tope==-1)
	{
		cout<<endl;cout<<endl;cout<<endl;
		cout<<"pila vacia"<<endl;
		cout<<"no hay carros estacionados"<<endl;
	}
	else
	{
		cout<<endl;
		cout<<"Vehiculos Estacionados"<<endl;
		cout<<endl;
		for(p->j=0;p->j<=p->tope;++p->j)
		{
			cout<<"estacionado "<<p->j<<endl;
		}
	}
	cin.get();
	cin.get();
}

void vehiculos_en_cola(cola *c)
{
	system("cls");
	cout<<"ESTACIONAMIENTO"<<endl;
	if(c->pf==-1)
	{
		cout<<endl;
		cout<<"no hay carros en la cola"<<endl;
	}
	else
	{
		cout<<endl;
		cout<<"\t\t\t hay "<<c->pf<<"En Espera"<<endl;
	}
	
	cin.get();
	cin.get();
}


void eliminar_cola(pila *p,cola *c)
{
	cout<<endl;
	
	if(c->pf>-1)
		{
			cout<<"Entro al Estacionamiento El "<<c->pf<<" de la Cola"<<endl;
			c->pf--;
						
		}
		else
		{
			cout<<endl;cout<<endl;cout<<endl;
			cout<<"\t\t\t No existen carros En Espera "<<endl;
		}

	
	cin.get();
	cin.get();
}
void atendidos(pila *p,cola *c)
{
	system("cls");
	cout<<"\t\t\tEstacionamiento "<<endl;
		if(p->tope==-1)
		{
			cout<<endl;
			cout<<"\t\tNo hay carros  Estacionados "<<endl;
		}
		else
		{
			cout<<endl;cout<<endl;
			cout<<"Atendidos del Estacionamiento "<<p->tope<<endl;
			p->tope--;
			eliminar_cola(p,c);
			if(c->pf>-1)
			{
				p->tope++;
				cout<<"aumenta "<<p->tope<<endl;
				cout<<endl;
				cout<<"Decrementa "<<c->pf<<endl;
			}
			else
			{
				cout<<"N0 Existen mas Vehiculos en Cola"<<endl;
			}
		}
		cin.get();
		cin.get();
}


void ultimo(cola *c)
{
	system("cls");
	cout<<"Estacionamiento"<<endl;
	cout<<endl;cout<<endl;
	if(c->pf==-1)
	{
		cout<<"No hay vehiculo en Espera"<<endl;
	}
	else
	{
		cout<<"Ultimo en estacionarse "<<c->pf<<endl;
	}
	cin.get();
	cin.get();

}

void main ()
{
	pila p;
	cola c;
	crear_pila(&p);
	crear_cola(&c);
	do
	{
		system("cls");
		system("color 0a");
		cout<<"\t\t\t***ESTACIONAMIENTO*****"<<endl;
		cout<<endl;
		cout<<"1. ESATCIONAR CARRO"<<endl;
		cout<<"2.VEHICULOS ESTACIONADOS"<<endl;
		cout<<"3.VEHICULOS EN COLA"<<endl;
		cout<<"4.VEHICULOS ATENDIDOS"<<endl;
		cout<<"5.ULTIMO CARRO EN LA COLA"<<endl;
		cout<<"6.ELIMINAR COLA"<<endl;
		cout<<"7.SALIR DEL SISTEMA"<<endl;
		cout<<"introduzca su opcion"<<endl;
		cin>>opc;

		if(opc=='1')
			estacionar_vehiculo(&p,&c);
		
		if(opc=='2')
			estacionados(&p,&c);

		if(opc=='3')
			vehiculos_en_cola(&c);
		if(opc=='4')
			atendidos(&p,&c);

		if(opc=='5')

			ultimo(&c);
	
		if(opc=='6')

			eliminar_cola(&p,&c);
	
	
	}while(opc!='7');

}