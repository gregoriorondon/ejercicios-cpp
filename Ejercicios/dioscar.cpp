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


#include <iostream.h>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int n_carros[4];//pila
	int max;
	int z;
	
}pila;

typedef struct
{
	int c_espera[4];
	int pi;
	int pf;
	
}cola;


char opc;
int a;
int b;

void crear_cola(cola *c)
{
	c->pf=-1;	c->pi=0;
}


void crear_pila(pila *p)
{
	p->max=-1;
}


void estacionar(pila *p,cola *c)
{
	system("cls");
		cout<<"\t\t\t Estacionamiento "<<endl;
	if(p->max==3)
	{
		cout<<endl;
		cout<<"\t\t Estacionamiento Lleno.";
		cout<<" Por Favor Espere "<<endl;
		cout<<endl;
		if(c->pf==3)
		{
			cout<<endl;cout<<endl;cout<<endl;cout<<endl;
			cout<<"\t\t\t Espacios en la Cola Saturado "<<endl;
		}
		else
		{
			
			cout<<endl;cout<<endl;
			c->pf++;
			c->c_espera[c->pf]=b;
			cout<<"Cola inicial "<<c->pi<<endl;
			cout<<"Cola Final"<<c->pf<<endl;
		}
	}
	else
	{
		cout<<endl;cout<<endl;
		p->max++;
		p->n_carros[p->max]=a;
		cout<<"Estacionamiento "<<p->n_carros[p->max]<<endl;
		cout<<"Parque "<<p->max;
	}
	cin.get();
	cin.get();
}

void estacionados(pila *p,cola *c)
{
	system("cls");
	cout<<"\t\t\t Estacionamiento "<<endl;
	if(p->max==-1)
	{
		cout<<endl;cout<<endl;cout<<endl;cout<<endl;
		cout<<"\t\t No hay Carros en el Estacionamiento "<<endl;
	}
	else
	{
		cout<<endl;
		cout<<"\t\t Vehiculos Estacionados"<<endl;
		cout<<endl;
		for(p->z=0;p->z<=p->max;++p->z)
		{
			cout<<"parque "<<p->z<<endl;
		}
	}
	cin.get();
	cin.get();
}
void En_cola(cola *c)
{
	system("cls");
	cout<<"\t\t\t Estacionamiento "<<endl;
	if(c->pf==-1)
	{
		cout<<endl;cout<<endl;cout<<endl;cout<<endl;
		cout<<"\t\t No hay Carros en la Cola "<<endl;
	}
	else
	{
		cout<<endl;cout<<endl;
		cout<<"\t\tExisten "<<c->pf<<" En Espera "<<endl;
	}
	cin.get();
	cin.get();
}

void eliminar_cola(pila *p,cola *c)
{
		if(c->pf>-1)
		{
			cout<<"Entro al Estacionamiento El "<<c->pf<<" de la Cola"<<endl;
			c->pf--;
		}
		else
		{
			cout<<endl;cout<<endl;
			cout<<"\t\t\tNo hay carros En Espera "<<endl;
		}

	
	cin.get();
	cin.get();
}
void Despachados(pila *p,cola *c)
{
	system("cls");
	cout<<"\t\t\t **----Estacionamiento---*** "<<endl;
		if(p->max==-1)
		{
			cout<<endl;cout<<endl;cout<<endl;cout<<endl;
			cout<<"\t\t.No hay carros en el Estacionados "<<endl;
		}
		else
		{
			cout<<endl;cout<<endl;
			cout<<"Despachados del Estacionamiento "<<p->max<<endl;
			p->max--;
			eliminar_cola(p,c);
			if(c->pf>-1)
			{
				p->max++;
				cout<<"Incremente "<<p->max<<endl;
				cout<<endl;
				cout<<"Decremente "<<c->pf<<endl;
			}
			else
			{
				cout<<"No Existen mas Vehiculos en Cola"<<endl;
			}
		}
		cin.get();
		cin.get();
}

void ultimo(cola *c)
{
	system("cls");
	cout<<"\t\t\t**----Estacionamiento-------*****"<<endl;
	cout<<endl;cout<<endl;cout<<endl;cout<<endl;
	if(c->pf==-1)
	{
		cout<<"\t\t  No hay Carro en Espera"<<endl;
	}
	else
	{
		cout<<"Ultimo Vehiculo para estacionarse "<<c->pf<<endl;
	}
	cin.get();
	cin.get();

}

void main()
{
	pila p;
	cola c;
	crear_pila(&p);
	crear_cola(&c);
	do
	{
		system("cls");
		cout<<"\t\t\t**-----Estacionamiento ----******"<<endl;
		cout<<endl;cout<<endl;
		cout<<"0. Estacionar vehiculo"<<endl;
		cout<<"1. vehiculos Estacionados"<<endl;
		cout<<"2. Vehiculos en Cola"<<endl;
		cout<<"3. Vehiculos Despachados"<<endl;
		cout<<"4. Ultimo vehiculo en Cola"<<endl;
		cout<<"5. Salir del Sistema"<<endl;
		cout<<"OPcion ";
		cin>>opc;
		
		if(opc=='0')
			estacionar(&p,&c);
		
		if(opc=='1')
			estacionados(&p,&c);
	
		if(opc=='2')
			En_cola(&c);
		
		
		if(opc=='3')
			Despachados(&p,&c);
		
		if(opc=='4')
			ultimo(&c);
	
	}while(opc!='5');

}



