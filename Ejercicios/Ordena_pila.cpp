/*Se tienen dos pilas (stacks) que contienen n๚meros enteros; la primera ordenada ascendentemente desde el tope
 hacia el fondo, y la segunda ordenada descendentemente desde el tope hacia el fondo. Si se cuenta con las
 operaciones bแsicas definidas para pilas, elabore un programa que fusione ambas pilas en una tercera ordenada
 descendentemente desde el tope hacia el fondo.*/
#include <iostream.h>
#include <windows.h>

#define n1 4
#define n2 4
#define n3 8

#define FONDO (11)//texto
#define FONDO1 (26)//Encabezado
#define AMARILLO (150)
#define O (16)

typedef struct
{
	int numero1[n1];
	int tope1;
}pila1;

typedef struct
{
	int numero2[n2];
	int tope2;
}pila2;

typedef struct
{
	int numero3[n3];
	int tope3;
}pila3;

char r;
int i,j,tmp;

void crear_pila1(pila1 *p1)
{
	p1->tope1=-1;
}
void crear_pila2(pila2 *p2)
{
	p2->tope2=-1;
}
void crear_pila3(pila3 *p3)
{
	p3->tope3=-1;
}

void enter(pila1 *p1,pila2 *p2,pila3 *p3)
{
	if(p1->tope1==n1-1)
	{
		system("cls");
		system("color 0c");
		cout<<endl;
		cout<<"\t\t\t...:::Metodos de Ordenamiento"<<endl;
		cout<<endl;
		cout<<"\t...No hay mas espacio para Digitos"<<endl;
	}
	else
	{
		system("cls");
		system("color 0b");
		cout<<endl;
		cout<<"\t\t\t...:::Metodos de Ordenamiento"<<endl;
		cout<<endl;
		cout<<"\t\t\t...:::Insercion de Digitos"<<endl;
		cout<<endl<<endl;

		p1->tope1++;//ascendente
		p2->tope2++;//descendente
		p3->tope3++;//calculo final
		
		cout<<"Digito ";
		cin>>p1->numero1[p1->tope1];
		p2->numero2[p2->tope2]=p1->numero1[p1->tope1];
		p3->numero3[p3->tope3]=p1->numero1[p1->tope1];
		//cout<<endl;
		//cout<<p1->numero1[p1->tope1]<<" "<<p1->tope1<<endl;
	}
	//cin.get();cin.get();
}

void ascendente(pila1 *p1)
{
	if(p1->tope1==-1)
	{
		system("cls");
		system("color 0c");
		cout<<endl;
		cout<<"\t\t\t...:::Metodos de Ordenamiento"<<endl;
		cout<<endl;
		cout<<endl<<endl;
		cout<<"Debes Primero Ingresar Digitos en la Opcion 1"<<endl;
	}
	else
	{
		system("cls");
		system("color 0a");
		cout<<endl;
		cout<<"\t\t\t...:::Metodos de Ordenamiento"<<endl;
		cout<<endl;
		for(i=0; i<=p1->tope1;i++)
		{
			for(j=0;j < p1->tope1;j++)
			{
				if(p1->numero1[j] > p1->numero1[j+1])
				{
					tmp=p1->numero1[j];
					p1->numero1[j]=p1->numero1[j+1];
					p1->numero1[j+1]=tmp;
				}
			}
		}
		cout<<endl;
		cout<<"\tAscendente"<<endl;
		cout<<endl;
		for(i=0;i<=p1->tope1;i++)
			cout<<"\t   "<<p1->numero1[i]<<endl;
	}
	cin.get();cin.get();
}

void descendente(pila2 *p2)
{
	if(p2->tope2==-1)
	{
		system("cls");
		system("color 0c");
		cout<<endl;
		cout<<"\t\t\t...:::Metodos de Ordenamiento"<<endl;
		cout<<endl;
		cout<<"\t...Debes 1ro Insertar Digitos en la 1ra Opcion"<<endl;
	}
	else
	{
		system("cls");
		system("color 0e");
		cout<<endl;
		cout<<"\t\t\t...:::Metodos de Ordenamiento"<<endl;
		cout<<endl;
		cout<<"\tDescendente"<<endl;
		for(i=0;i<=p2->tope2;i++)
		{
			for(j=0;j<p2->tope2;j++)
			{
				if(p2->numero2[j] < p2->numero2[j+1])
				{
					tmp=p2->numero2[j];
					p2->numero2[j]=p2->numero2[j+1];
					p2->numero2[j+1]=tmp;
				}
			}
		}
		cout<<endl;
		for(i=0;i<=p2->tope2;i++)
			cout<<"\t   "<<p2->numero2[i]<<endl;
	}
	cin.get();cin.get();
}

void combinar(pila3 *p3)
{
	if(p3->tope3==-1)
	{
		system("cls");
		system("color 0c");
		cout<<endl;
		cout<<"\t\t\t...:::Metodos de Ordenamiento"<<endl;
		cout<<endl;
		cout<<"\t...Debes 1ro Insertar Digitos en la 1ra Opcion"<<endl;
	}
	else
	{
		system("cls");
		system("color 0b");
		cout<<endl;
		cout<<"\t\t\t...:::Metodos de Ordenamiento"<<endl;
		cout<<endl;
		cout<<"\tCombinado"<<endl;
		for(i=0;i<=p3->tope3;i++)
		{
			for(j=0;j<p3->tope3;j++)
			{
				if(p3->numero3[j] < p3->numero3[j+1])
				{
					tmp=p3->numero3[j];
					p3->numero3[j]=p3->numero3[j+1];
					p3->numero3[j+1]=tmp;
				}
			}
		}
		cout<<endl;
		for(i=0;i<=p3->tope3;i++)
			cout<<"\t   "<<p3->numero3[i]<<endl;
	}
	cin.get();cin.get();
}

void main()
{
	pila1 p1;
	pila2 p2;
	pila3 p3;
	
	crear_pila1(&p1);
	crear_pila2(&p2);
	crear_pila3(&p3);

	do
	{
		system("cls");
		HANDLE hStdInput=INVALID_HANDLE_VALUE,
		hStdOutput=INVALID_HANDLE_VALUE;
		hStdInput=GetStdHandle(STD_INPUT_HANDLE);
		hStdOutput=GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hStdOutput,FONDO1|AMARILLO);

		cout<<"\t\t\t                                                        ";
		cout<<"\t\t\t...:::ORDENAMIENTO HP                                   "<<endl;
		cout<<endl<<endl<<endl;
		SetConsoleTextAttribute(hStdOutput,FONDO|O);
		cout<<"\t\t\311อออออออออออออออออออออออออออออออออออออออออออ\273"<<endl;
		cout<<"\t\t\272 ~ 1. Ingresar Numeros                     \272"<<endl;
		cout<<"\t\t\272 ~ 2. Orden Ascendente                     \272"<<endl;
		cout<<"\t\t\272 ~ 3. Descendente                          \272"<<endl;
		cout<<"\t\t\272 ~ 4. Combinar [1 Y 2] en Descendente      \272"<<endl;
		cout<<"\t\t\272 ~ 5. Abandonar el Sistema                 \272"<<endl;
		cout<<"\t\t\310อออออออออออออออออออออออออออออออออออออออออออ\274"<<endl;
		cout<<endl<<"\t\t";
		cin>>r;
		if(r=='1')
			enter(&p1,&p2,&p3);
		if(r=='2')
			ascendente(&p1);
		if(r=='3')
			descendente(&p2);
		if(r=='4')
			combinar(&p3);
	}while(r!='5');
}
