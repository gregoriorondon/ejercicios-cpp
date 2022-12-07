/*Implemente una Cola en Visual C++, de manera que reciba los datos de personas en una cola de un
banco, esto es, nombre y conjunto de transacciones a realizar.  Se requiere conocer el tiempo
estimado de permanencia de cualquier persona en la cola, si se conocen los tiempos estimados
para cada tipo de transacci๓n: 
Retiro -> 4 min
Dep๓sito -> 2 min
Consulta -> 3 min
Actualizaci๓n -> 5 min
Pagos -> 2 min*/

#include <iostream.h>
#include <windows.h>
char r,R;

#define n 50



int cons,d,act,p,retiro;

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
void banco(cola *c)
{
		//do
		//{
			system("cls");
			//system("color 0b");
			cout<<"\t\t\t...:::BANCO HP"<<endl;
			cout<<endl;
			c->pf++;
			cout<<"Tiket "<<c->pf<<endl;
			cout<<"Nombre ";
			cin.ignore();
			cin.getline(c->p,50);
			cout<<endl;
			//cout<<"Desea Agregar Otro ";
			//cin>>r;
		//}while(r=='S'||r=='s');
a:
		//system("cls");
		//cout<<"\t\t\t...:::BANCO HP"<<endl;
		//cout<<endl<<endl<<endl;
		//cout<<"\311อออออออออออออออออออออออออออออออ\273"<<endl;
		cout<<"\272 ~ 1. Retiro\t\t        \272"<<endl;
		cout<<"\272 ~ 2. Deposito\t                \272"<<endl;
		cout<<"\272 ~ 3. Consulta\t                \272"<<endl;
		cout<<"\272 ~ 4. Actualizacion            \272"<<endl;
		cout<<"\272 ~ 5. Pagos\t                \272"<<endl;
		cout<<"\272 ~ 6. Pantalla Anterior\t\272"<<endl;
		//cout<<"\310อออออออออออออออออออออออออออออออ\274"<<endl;
		cout<<"Opcion ";
		cin>>r;
		if(r=='1')
			retiro=retiro+4;
		else
		{
			if(r=='2')
				d=d+2;
			else
			{
				if(r=='3')
					cons=cons+3;
				else
				{
					if(r=='4')
						act=act+5;
					else
					{
						if(r=='5')
							p=p+2;
						else
						{
							goto hp;
						}
					}
				}
			}
		}
		cout<<"Desea Realizar Otra Transacion ";
		cin>>r;
		if(r=='s'||r=='S')
		{
			goto a;
		}
		cout<<endl;
		c->pr=p+act+d+retiro+cons;
		system("cls");

		cout<<endl;
		//cout<<"\t\t...:::Tiempo ocupado dentro del Banco Hp"<<endl;
		cout<<endl<<endl;
		cout<<"Nombre "<<c->p<<endl;
		//cout<<"Tiket "<<i<<endl;
		cout<<endl;
		cout<<"\tRetiro "<<retiro;
		cout<<endl<<endl<<endl<<endl;

		//cout<<"\t\t...:::Total "<<c->pr<<endl;
		cout<<endl;
hp:;
		cin.get();cin.get();
}
void main()
{
	cola c;
	crear_cola(&c);
	do
	{
		system("cls");

		cout<<endl;
		cout<<"\t\t\t...:::BANCO HP"<<endl;
		cout<<endl<<endl<<endl;
		cout<<"\311อออออออออออออออออออออออออออออออ\273"<<endl;
		//cout<<"\272 ~ 0. Registro de usuarios     \272"<<endl;
		cout<<"\272 ~ 1. Usuario   \272"<<endl;
		cout<<"\272 ~ 2. Salir del Sistema        \272"<<endl;
		//cout<<"\310อออออออออออออออออออออออออออออออ\274"<<endl;
		cin>>R;
		if(R=='1')
		{
			banco(&c);
		}
	}while(R!='2');
}