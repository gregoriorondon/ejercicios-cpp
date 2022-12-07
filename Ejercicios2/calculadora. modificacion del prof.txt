/*calculadora mas cientifica*/
#include<iostream.h>
#include<math.h>
#include<conio.h>
#include<stdio.h>
float m[100][100];
void calculadora(char d)
{
	switch(d)
	{
	case '1':
		cout<<"A: ";
		cin>>m[0][0];
		cout<<"B: ";
		cin>>m[0][1];
		m[0][2]=m[0][0]+m[0][1];
		cout<<"A+B: "<<m[0][2];
	break;
	case '2':
		cout<<" A ";
		cin>>m[1][0];
		cout<<" B ";
		cin>>m[1][1];
		m[1][2]=m[1][0]-m[1][1];
		cout<<" A-B es "<<m[1][2];
	break;
	case '3':
		cout<<" A ";
		cin>>m[2][0];
		cout<<" B ";
		cin>>m[2][1];
		m[2][2]=m[2][0]*m[2][1];
		cout<<" AxB es "<<m[2][2];
	break;
	case'4':/*Falta Validar si el divisor es 0*/
		cout<<" A "<<endl;
		cin>>m[3][0];
		cout<<" B "<<endl;
		cin>>m[3][1];
		m[3][2]=m[3][0]/m[3][1];
		cout<<" A/B es "<<m[3][2];
	break;
	case'5':
		cout<<" A ";
		cin>>m[4][0];
		if(m[4][0]>=0)
		{
			m[4][1]=sqrt(m[4][0]);
			cout<<"Raiz de A "<<m[4][1];
		}
		else
		{
			cout<<" No se puede realizar";
		}
	break;
	case'6':
		cout<<" A ";
		cin>>m[5][0];
		m[5][1]=pow(m[5][0],2);
		cout<<"El resultado de A "<<m[5][1];
	break;

	case'7':
		/*Modificado*/
		cout<<" A ";
		cin>>m[6][0];
		/* Función recursiva para cálculo de factoriales */
		if(m[6][0]<0)
			cout<<endl<<"No se puede realizar";
		else
		{
			if(m[6][0]>1) 
				m[6][1]=m[6][0]*(m[6][0]-1); /* Recursividad */
			cout<<endl<<"El Factorial de un Numero es: "<<m[6][1];
		}	
		
	break;
	case'8':
		cout<<"Ingrese un numero en grados F ";
		cin>>m[7][0];
		m[7][1]=(m[7][0]-32)/1.8;
		cout<<"Grados Celsius "<<m[7][1];
		break;
	}
};

void main()
{
	char a;
	while(a!=0)
	{
		cout<<"\t"<<" MENU PRINCIPAL "<<endl;
		cout<<"\t"<<" 1. Sumar "<<endl;
		cout<<"\t"<<" 2. Restar "<<endl;
		cout<<"\t"<<" 3. Multiplicar "<<endl;
		cout<<"\t"<<" 4. Dividir "<<endl;
		cout<<"\t"<<" 5. Raiz cuadrada "<<endl;
		cout<<"\t"<<" 6. Exponente "<<endl;
		cout<<"\t"<<" 7. Factorial "<<endl;
		cout<<"\t"<<" 8. Grados de F a C "<<endl;
		cout<<"\t"<<" 0. Salir "<<endl;
		cout<<"\t"<<" Ingrese su opcion "<<endl;
		cin>>a;
		calculadora(a);
	}
	cin.get();
}