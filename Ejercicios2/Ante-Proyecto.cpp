/*Realizar un programa que simula una calculadora científica de modo gráfico, el código debe
realizar las siguientes operaciones: suma, resta, multiplicación, división, promedio,
X2, X3, Xn (n: es cualquier número), factorial, conversión de Binario a Decimal, 
Decimal a Binario, si un número es primo o no, Máximo común divisor, Mínimo común múltiplo,
Convertir un número entero a su correspondiente representación en cifras romanas. 
Requerimientos: Visual C++ 6.0 ó Otro lenguaje según las necesidades, Funciones, Matrices,
Registros, y Archivos.*/

#include <iostream.h>	//#include<malloc.h>
#include <string.h>		//#include<stdlib.h>
#include <windows.h>
#include <math.h>		//#include<conio.h>			
						//#include<ctype.h>
						//#include<stdio.h>
void sumar();
void restar();
void multiplicar();
void dividir();
void promedio();
void exponencial();
void factorial();
void bianrio_decimal();
void decimal_binario();
void primo();
void MCD();
void MCM();
void decimal_romano();

void sumar()
{
	system("cls");
	cout <<"ßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß";
			cout << "\t\t            =========================== \n";
			cout << "\t\t            =  CALCULADORA CIENTIFICA =";
			cout << "\n\t\t            =========================== \n"<<endl;
	cin.get();
}


void restar()
{
	system("cls");
	cout <<"ßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß";
			cout << "\t\t            =========================== \n";
			cout << "\t\t            =  CALCULADORA CIENTIFICA =";
			cout << "\n\t\t            =========================== \n"<<endl;
	cin.get();
}


void multiplicar()
{
	system("cls");
	cout <<"ßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß";
			cout << "\t\t            =========================== \n";
			cout << "\t\t            =  CALCULADORA CIENTIFICA =";
			cout << "\n\t\t            =========================== \n"<<endl;
	cin.get();
}


void dividir()
{
	system("cls");
	cout <<"ßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß";
			cout << "\t\t            =========================== \n";
			cout << "\t\t            =  CALCULADORA CIENTIFICA =";
			cout << "\n\t\t            =========================== \n"<<endl;
	cin.get();
}


void promedio()
{
	system("cls");
	cout <<"ßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß";
			cout << "\t\t            =========================== \n";
			cout << "\t\t            =  CALCULADORA CIENTIFICA =";
			cout << "\n\t\t            =========================== \n"<<endl;
	cin.get();
}


void exponencial()
{
	char opc;

	do
	{
		system("cls");
		cout <<"ßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß";
		cout << "\t\t            =========================== \n";
		cout << "\t\t            =  CALCULADORA CIENTIFICA =";
		cout << "\n\t\t            =========================== \n"<<endl;
		
		double x, y, z;

		cout<< " INTRODUZCA BASE DECIMAL: ";
		cin>> x;
		cout<<endl;
		cout<< " INTRODUZCA NUMERO EXPONECIAL O EXPONENTE DE LA BASE: ";
		cin>>y;
		cout<<endl;

		z = pow(x, y);

		cout << " EL RESULTADO ES: "<< z;
		cout<<endl;
		cout<<endl;
		cout<<"\n";
		
		cout <<" DESEA REALIZAR NUEVAMENTE EL PROCESO S/N: ";
		cin>>opc;
	
		
	}
	
	while ((opc=='s') || (opc=='S'));
}


void factorial()
{
	char opc;

	do
	{
		system("cls");
		
		cout <<"ßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß";
		cout << "\t\t            =========================== \n";
		cout << "\t\t            =  CALCULADORA CIENTIFICA =";
		cout << "\n\t\t            =========================== \n"<<endl;

		double factorial(int valor);
		int j=1;
		int numero;

		cout << " INTRODUZCA NUMERO: ";
		cin >> numero;
		cout << endl;
		cout << endl;

		cout<<" EL RESULTADO ES: " <<  numero << "! ES IGUAL A: " << factorial(numero) << endl;
		cout<<endl;
		cout<<"\n";

		cout <<" DESEA REALIZAR NUEVAMENTE EL PROCESO S/N: ";
		cin>>opc;
	}
	
	while ((opc=='s') || (opc=='S'));
}
double factorial(int valor)
{
	int j=1;
    double resultado;

    if(valor<=1)
    return 1;
    else
    {
        resultado = (valor*factorial(valor-1));
        j = j+1;
    }

    return resultado;
}


void bianrio_decimal()
{
	system("cls");
	cout <<"ßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß";
			cout << "\t\t            =========================== \n";
			cout << "\t\t            =  CALCULADORA CIENTIFICA =";
			cout << "\n\t\t            =========================== \n"<<endl;
	cin.get();
}


void decimal_binario()
{
	char opc;

	do
	{
		system("cls");
		cout <<"ßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß";
		cout << "\t\t            =========================== \n";
		cout << "\t\t            =  CALCULADORA CIENTIFICA =";
		cout << "\n\t\t            =========================== \n"<<endl;
		
		int num;
		const int a=10;
		int ArrayBin [a];

		int f=0;
		cout <<" INGRSE NUMERO QUE DESEA CONVETIR A BINARIO: ";
		cin >>num;

		if(num>=0)
		{
			cout<<" \n EL NUMERO BINARIO ES: ";
		}
				
		for(int i=0;num>0;i++)
		{
			ArrayBin [i]= num % 2;
			num=num/2;
			f=f+1;
		}
		
		for (int j=f-1;j>=0;j--)
		{
			cout <<ArrayBin [j];
		}

		cout<<endl;
		cout<<endl;
		cout <<"\n DESEA REALIZAR NUEVAMENTE EL PROCESO S/N: ";
		cin>>opc;
	}
	
	while ((opc=='s') || (opc=='S'));
}


void primo()
{
	char opc;

	do
	{
		system("cls");
		cout <<"ßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß";
		cout << "\t\t            =========================== \n";
		cout << "\t\t            =  CALCULADORA CIENTIFICA =";
		cout << "\n\t\t            =========================== \n"<<endl;

		int i,num,numDivisores=0;

		cout<<" INGRESE UN NUMERO: ";
		cin>>num;
		cout<<endl;

		for(i=1;i<=num;i++) 
		{
			if(num%i==0)   //el operador % nos da el resto de la división.
			{
				numDivisores=numDivisores+1; //veamos cuantos divisores tiene nuestro número.
			}
		}
		
		if(numDivisores==2) //si tiene 2 divisores(el mismo y la unidad).
		{
			cout<<" " <<num<<" ES UN NUMERO PRIMO"<<endl;
		}
				
		else   //si tiene mas divisores.
		{
			cout<<" " <<num<<" NO ES UN NUMERO PRIMO"<<endl;
		}

		cout<<endl;
		cout<<endl;
		cout <<"\n DESEA REALIZAR NUEVAMENTE EL PROCESO S/N: ";
		cin>>opc;
	}
	
	while ((opc=='s') || (opc=='S'));
	
}


void MCD()
{
	char opc;
	int a, b, x, z, y=1, i=2;
	do
	{
		system("cls");
		cout <<"ßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß";
		cout << "\t\t            =========================== \n";
		cout << "\t\t            =  CALCULADORA CIENTIFICA =";
		cout << "\n\t\t            =========================== \n"<<endl;

	    cout<<" INGRESE PRIMER NUMERO: ";
        cin>>a;
		cout<<endl;
        cout<<" INGRESE SEGUNDO NUMERO: ";
        cin>>b;
		cout<<endl;

		if (a<b)
		{
			x=a;
			z=b;
		}
		
		else
		{
			x=b;
			z=a;
		}
		
		do
		{
			if (x%i==0 && z%i==0)
			{
				y=y*i;
				x=x/i;
				z=z/i;
				i=2;
			}
			
			else i++;
		}
		
		while(i<=x);

		cout<<" EL MAXIMO COMUN DIVISOR ES: "<<y;
		cout<<endl;
		cout<<endl;
		cout <<"\n DESEA REALIZAR NUEVAMENTE EL PROCESO S/N: ";
		cin>>opc;
	}
	
	while ((opc=='s') || (opc=='S'));
}


void MCM()
{
	char opc;
	int a, b, x, z, y=1, i=2;

	do
	{
		system("cls");
		cout <<"ßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß";
		cout << "\t\t            =========================== \n";
		cout << "\t\t            =  CALCULADORA CIENTIFICA =";
		cout << "\n\t\t            =========================== \n"<<endl;

		cout<<" INGRESE PRIMER NUMERO: ";
		cin>>a;
		cout<<endl;
		cout<<" INGRESE SEGUNDO NUMERO: ";
		cin>>b;
		cout<<endl;

		if (a<b)
		{
			x=a;
			z=b;
		}
		
		else
		{
			x=b;
			z=a;
		}

		do
		{
			if (x%i==0)
			{
				if(z%i==0)
				{
					y = y * i;
					x = x/i;
					z = z/i;
					i=2;
				}
				
				else i++;
			}
			
			else i++;
		}
		
		while(i<=x);
		y = y * z * x;
		
		cout<<" EL MINIMO COMUN MULTIPLO ES: "<<y;
		cout<<endl;
		cout<<endl;
		
		cout <<"\n DESEA REALIZAR NUEVAMENTE EL PROCESO S/N: ";
		cin>>opc;
	}
	
	while ((opc=='s') || (opc=='S'));
}



void decimal_romano()
{
	system("cls");
	cout <<"ßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß";
			cout << "\t\t            =========================== \n";
			cout << "\t\t            =  CALCULADORA CIENTIFICA =";
			cout << "\n\t\t            =========================== \n"<<endl;
	cin.get();
}


void main()
{
		system("cls");
		system("color 0a");

		int opc;
		
		do
		{
			cout <<"ßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß";
			cout <<"\t\t           UNIVERSIDAD VALLE DEL MOMBOY    \n " <<endl;
		cout <<"\t\t              FACULTAD DE INGENERIA        \n " <<endl;
		cout <<"\t\t          PROGRAMADORES: ELI D. AGUILAR G.   \n" <<endl;
		cout <<"\t\t                         FRANCISCO PERDOMO \n" <<endl;
			cout << "\t\t            =========================== \n";
			cout << "\t\t            =  CALCULADORA CIENTIFICA =";
			cout << "\n\t\t            =========================== \n"<<endl;
	
			cout << " \t	 1)  SUMAR                         \n" <<endl;
			cout << " \t	 2)  RESTAR                        \n" <<endl; 
			cout << " \t 	 3)  MULTIPLICAR                   \n" <<endl;
			cout << " \t	 4)  DIVIDIR                       \n" <<endl;
			cout << " \t	 5)  PROMEDIO                      \n" <<endl;
			cout << " \t	 6)  EXPONECIAL                    \n" <<endl;
			cout << " \t	 7)  FACTORIAL DE UN NUMERO        \n" <<endl;
			cout << " \t	 8)  CONVERSION:BINARIO A DECIMAL  \n" <<endl;
			cout << " \t	 9)  CONVERSION:DECIMAL A BINARIO  \n" <<endl;
			cout << " \t	 10) NUMERO PRIMO                  \n" <<endl;
			cout << " \t	 11) MAXIMO COMUN DIVISOR          \n" <<endl;
			cout << " \t	 12) MINIMO COMUN MULTIPLO         \n" <<endl;
			cout << " \t	 13) CONVERSION:DECIMAL A ROMANO   \n" <<endl;
			cout << " \t	 14) SALIR DE LA CALCULADORA      \n"  <<endl <<endl;
	
			cout << "    INGRESE LA OPCION QUE DESEA REALIZAR: ";
			cin >> opc;
			cout<<""<<endl;

			if (opc==1)
			{
				sumar();
				cin.get();
				system("cls");			
			}

			if (opc==2)
			{
				restar();
				cin.get();
				system("cls");	
			}
			
			if (opc==3)
			{
				multiplicar();
				cin.get();
				system("cls");
			}

			if (opc==4)
			{
				dividir();
				cin.get();
				system("cls");
			}

			if (opc==5)
			{
				promedio();
				cin.get();
				system("cls");
			}

			if (opc==6)
			{
				exponencial();
				cin.get();
				system("cls");
			}

			if (opc==7)
			{
				factorial();
				cin.get();
				system ("cls");
			}

			if (opc==8)
			{
				bianrio_decimal();
				cin.get();
				system ("cls");
			}

			if (opc==9)
			{
				decimal_binario();
				cin.get();
				system ("cls");
			}

			if (opc==10)
			{
				primo();
				cin.get();
				system ("cls");
			}

			if (opc==11)
			{
				MCD();
				cin.get();
				system ("cls");
			}

			if (opc==12)
			{
				MCM();
				cin.get();
				system ("cls");
			}

			if (opc==13)
			{
				decimal_romano();
				cin.get();
				system ("cls");
			}
		}
		
		while (opc!= 14);
}

	