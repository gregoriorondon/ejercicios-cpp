/*Se tienen dos pilas (stacks) que contienen números enteros; la primera ordenada ascendentemente desde el tope
 hacia el fondo, y la segunda ordenada descendentemente desde el tope hacia el fondo. Si se cuenta con las
 operaciones básicas definidas para pilas, elabore un programa que fusione ambas pilas en una tercera ordenada
 descendentemente desde el tope hacia el fondo.*/


#include <iostream.h>
#include <windows.h>

#define l1 4
#define l2 4
#define l3 8

//#define FONDO (11)//texto
//#define FONDO1 (26)//Encabezado
//#define AMARILLO (150)
//#define O (16)

typedef struct
{
	int lista1[l1];
	int tope1;
}pila1;

typedef struct
{
	int lista2[l2];
	int tope2;
}pila2;

typedef struct
{
	int lista3[l3];
	int tope3;
}pila3;

char opc;
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

void introducir_enteros(pila1 *p1,pila2 *p2,pila3 *p3)
{
	if(p1->tope1==l1-1)
	{
		system("cls");
		system("color 0c");
		cout<<endl;
		cout<<endl;
		cout<<"Pila llena"<<endl;
	}
	else
	{
		system("cls");
		system("color 0b");
		cout<<endl;
		cout<<endl;
		cout<<"NUMEROS ENTEROS"<<endl;
		cout<<endl<<endl;

		p1->tope1++;//ascendente
		p2->tope2++;//descendente
		p3->tope3++;//calculo final
		
		cout<<"NUMERO ";
		cin>>p1->lista1[p1->tope1];
		p2->lista2[p2->tope2]=p1->lista1[p1->tope1];
		p3->lista3[p3->tope3]=p1->lista1[p1->tope1];
		//cout<<endl;
	
	}
	cin.get();

	cin.get();
}

void ascendente(pila1 *p1)
{
	if(p1->tope1==-1)
	{
		system("cls");
		system("color 0c");
		cout<<endl;
	
		cout<<"introducir numeros enteros en la Opcion 1"<<endl;
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
				if(p1->lista1[j] > p1->lista1[j+1])
				{
					tmp=p1->lista1[j];
					p1->lista1[j]=p1->lista1[j+1];
					p1->lista1[j+1]=tmp;
				}
			}
		}
		cout<<endl;
		cout<<"\t Orden Ascendente"<<endl;
		cout<<endl;
		for(i=0;i<=p1->tope1;i++)
			cout<<"\t   "<<p1->lista1[i]<<endl;
	}
	cin.get();
	cin.get();
}

void descendente(pila2 *p2)
{
	if(p2->tope2==-1)
	{
		system("cls");
		system("color 0c");
		cout<<endl;
		
		cout<<endl;
		cout<<"introducir numeros enteros en la Opcion 1"<<endl;
		
	}
	else
	{
		system("cls");
		system("color 0e");
		cout<<endl;
		cout<<"\t\t\t...:::Metodos de Ordenamiento"<<endl;
		cout<<endl;
		cout<<"\t Orden Descendente"<<endl;
		for(i=0;i<=p2->tope2;i++)
		{
			for(j=0;j<p2->tope2;j++)
			{
				if(p2->lista2[j] < p2->lista2[j+1])
				{
					tmp=p2->lista2[j];
					p2->lista2[j]=p2->lista2[j+1];
					p2->lista2[j+1]=tmp;
				}
			}
		}
		cout<<endl;
		for(i=0;i<=p2->tope2;i++)
			cout<<"\t   "<<p2->lista2[i]<<endl;
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
		
		cout<<"introducir numeros enteros en la Opcion 1"<<endl;
	}
	else
	{
		system("cls");
		system("color 0b");
		cout<<endl;
		cout<<"\t\t\t...:::Metodos de Ordenamiento"<<endl;
		cout<<endl;
		cout<<"\t Orden Combinado"<<endl;
		for(i=0;i<=p3->tope3;i++)
		{
			for(j=0;j<p3->tope3;j++)
			{
				if(p3->lista3[j] < p3->lista3[j+1])
				{
					tmp=p3->lista3[j];
					p3->lista3[j]=p3->lista3[j+1];
					p3->lista3[j+1]=tmp;
				}
			}
		}
		cout<<endl;
		for(i=0;i<=p3->tope3;i++)
			cout<<"\t   "<<p3->lista3[i]<<endl;
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
		//HANDLE hStdInput=INVALID_HANDLE_VALUE,
		//hStdOutput=INVALID_HANDLE_VALUE;
		//hStdInput=GetStdHandle(STD_INPUT_HANDLE);
		//hStdOutput=GetStdHandle(STD_OUTPUT_HANDLE);
		//SetConsoleTextAttribute(hStdOutput,FONDO1|AMARILLO);

		cout<<"\t\t\t                                                        ";
		cout<<"ORDENAMIENTO ASCEDENTE Y DESCEDENTE"<<endl;
		cout<<endl<<endl<<endl;
//		SetConsoleTextAttribute(hStdOutput,FONDO|O);
		
		cout<<"1. Ingresar Numeros Enteros "<<endl;
		cout<<"2. Orden Ascendente"<<endl;
		cout<<"3. Descendente"<<endl;
		cout<<"4. Combinar [1 Y 2] en Orden Descendente"<<endl;
		cout<<"5. Salir"<<endl;
		
		cout<<"opcion"<<endl;
		cin>>opc;
		if(opc=='1')
			introducir_enteros(&p1,&p2,&p3);
		if(opc=='2')
			ascendente(&p1);
		if(opc=='3')
			descendente(&p2);
		if(opc=='4')
			combinar(&p3);
	}while(opc!='5');
}
