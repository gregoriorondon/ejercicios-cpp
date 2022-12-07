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
#include <conio.h>

#define FONDO (16)
#define FONDO1 (0)
#define AMARILLO (110)
#define GRIS (59)
#define AZUL (11)

//////////////////////////////////Librerias

typedef struct
{
	int n_carros[4];//modificar por 15
	int max;
	int j;
	int k;
}pila;

typedef struct
{
	int c_espera[10];//Modificar por 15
	int pi;
	int pf;
	
}cola;
//////////////////////////////////Struct////////////

char opc;
int x;
int y;

void crear_cola(cola *c)
{
	c->pf=-1;	c->pi=0;
}


void crear_pila(pila *p)
{
	p->max=-1;
}

//////////////////////////////////////////Funciones
void estacionar(pila *p,cola *c)
{
	int h;
	system("cls");
	if(p->max==3)//Modificar por 14
	{
		system("cls");
		system("color 0c");
		cout<<"\t\t\t...:::Estacionamiento Hp"<<endl;
		cout<<endl;cout<<endl;cout<<endl;cout<<endl;
		cout<<"\t\t...:::Estacionamiento Lleno.";
		cout<<" Por Favor Espere... "<<endl;
		cout<<endl;
		if(c->pf==9)//modificar por 9
		{
			cout<<"\t\t...:::Verificando\a\a\a\a";
			for(h=0;h<10;++h)
			{
				Sleep(15);
				cout<<".";	
			}
			cout<<endl;cout<<endl;cout<<endl;cout<<endl;
			cout<<"\t\t\t...Espacios en la Cola Saturado "<<endl;
		}
		else
		{
			system("color 0b");
			cout<<endl;cout<<endl;
			c->pf++;
			c->c_espera[c->pf]=y;
			cout<<"Ultimo Vehiculo registrado en cola "<<c->pf<<endl;
		}
	}
	else
	{
		system("cls");
		system("color 0b");
		cout<<"\t\t\t...:::Estacionamiento Hp"<<endl;
		cout<<endl;cout<<endl;
		p->max++;
		p->n_carros[p->max]=x;
		cout<<"Parque "<<p->max;
	}
	cin.get();
	cin.get();
}

void estacionados(pila *p,cola *c)
{	
	if(p->max==-1)
	{
		system("cls");
		system("color f1");
		cout<<"\t\t\t...:::Estacionamiento Hp"<<endl;
		cout<<endl;cout<<endl;cout<<endl;cout<<endl;
		cout<<"\t\t...:::No hay Carros en el Estacionamiento "<<endl;
	}
	else
	{
		system("cls");
		system("color 0e");
		cout<<"\t\t\t...:::Estacionamiento Hp"<<endl;
		cout<<endl;
		cout<<"\t\t...:::Vehiculos Estacionados:::..."<<endl;
		cout<<endl;
		for(p->j=0;p->j<=p->max;++p->j)
		{
			cout<<"parque "<<p->j<<endl;
		}
	}
	cin.get();cin.get();
}
void En_cola(cola *c)
{
	if(c->pf==-1)
	{
		system("cls");
		system("color 0f");
		cout<<"\t\t\t...:::Estacionamiento Hp"<<endl;
		cout<<endl;cout<<endl;cout<<endl;cout<<endl;
		cout<<"\t\t...:::No hay Carros en la Cola "<<endl;
	}
	else
	{
		system("cls");
		system("color 0e");
		cout<<"\t\t\t...:::Estacionamiento Hp"<<endl;
		cout<<endl;cout<<endl;cout<<endl;cout<<endl;
		cout<<"\t\t...:::Existen "<<c->pf<<" En Espera "<<endl;
	}
	cin.get();cin.get();
}

void eliminar_cola(pila *p,cola *c)
{
		if(c->pf>-1)
		{
			cout<<"Entro al Estacionamiento El "<<c->pf<<" Vehiculo de la Cola"<<endl;
			c->pf--;
		}
		else
		{
			cout<<endl;cout<<endl;cout<<endl;cout<<endl;
			cout<<"\t\t\t...:::No hay carros En Espera "<<endl;
		}

	
	cin.get();cin.get();
}
void Despachados(pila *p,cola *c)
{
		if(p->max==-1)
		{
			system("cls");
			system("color 0c");
			cout<<"\t\t\t...:::Estacionamiento Hp"<<endl;
			cout<<endl;cout<<endl;cout<<endl;cout<<endl;
			cout<<"\t\t...:::No hay carros en el Estacionados "<<endl;
			cin.get();cin.get();
		}
		else
		{
			system("cls");
			system("color 0b");
			cout<<"\t\t\t...:::Estacionamiento Hp"<<endl;
			cout<<endl;cout<<endl;cout<<endl;cout<<endl;
			cout<<"Despachados del Estacionamiento El "<<p->max<<" Vehiculo"<<endl;
			cout<<endl;
			p->max--;
			eliminar_cola(p,c);//facilita el ejercicio y es valido
			if(c->pf>-1)
			{
				p->max++;
				cout<<"Incremente el "<<p->max<<endl;
				cout<<endl;
				cout<<"Decremente al "<<c->pf<<endl;
				cin.get();cin.get();
			}
		}
}

void ultimo(cola *c)
{
	if(c->pf==-1)
	{
		system("cls");
		system("color 0c");
		cout<<"\t\t\t...:::Estacionamiento Hp"<<endl;
		cout<<endl;cout<<endl;cout<<endl;cout<<endl;
		cout<<"\t\t...:::No hay Carro en Espera"<<endl;
	}
	else
	{
		system("cls");
		system("color 0b");
		cout<<"\t\t\t...:::Estacionamiento Hp"<<endl;
		cout<<endl;cout<<endl;cout<<endl;cout<<endl;
		cout<<"Ultimo Vehiculo al estacionarse "<<c->pf<<" En la Cola"<<endl;
	}
	cin.get();cin.get();

}
/////////////////////////Void main()
void main()
{
	pila p;
	cola c;
	crear_pila(&p);
	crear_cola(&c);
	do
	{
		system("cls");
		HANDLE hStdInput=INVALID_HANDLE_VALUE,
		hStdOutput=INVALID_HANDLE_VALUE;
		hStdInput=GetStdHandle(STD_INPUT_HANDLE);
		hStdOutput=GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hStdOutput,FONDO1|AMARILLO);
		cout<<"\t\t\t...:::Estacionamiento Hp \270:::...                        "<<endl;
		cout<<endl;cout<<endl;
		SetConsoleTextAttribute(hStdOutput,FONDO|GRIS);
		cout<<"\311様様様様様様様様様様様様様様様様様様様様\273"<<endl;
		cout<<"\272 \176\t0. Estacionar vehiculo           \272"<<endl;
		cout<<"\272 \176\t1. vehiculos Estacionados        \272"<<endl;
		cout<<"\272 \176\t2. Vehiculos en Cola             \272"<<endl;
		cout<<"\272 \176\t3. Vehiculos Despachados         \272"<<endl;
		cout<<"\272 \176\t4. Ultimo vehiculo en Cola       \272"<<endl;
		cout<<"\272 \176\t5. Salir del Sistema             \272"<<endl;
		cout<<"\310様様様様様様様様様様様様様様様様様様様様\274"<<endl;
		SetConsoleTextAttribute(hStdOutput,FONDO|AZUL);
		cout<<endl;
		cout<<"Opcion ";
		cin>>opc;
		cout<<endl;cout<<endl;cout<<endl;cout<<endl;
		SetConsoleTextAttribute(hStdOutput,FONDO1|AMARILLO);
		cout<<"Autor. Acramhamade@hotmail.com"<<endl;
		getch();//hace una pausa
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