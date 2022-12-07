//////LIBRERIAS//////
#include <iostream.h>
#include <string.h>
#include <windows.h>

//////VARIABLES GLOBALES//////
char codigo [28][10]= {".-","-...","-.-.","-..",".","..-.", "--." ,"....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--..",".----"};
char minus  []=       {"abcdefghijklmnopqrstuvwxyz1"};
char mayus  []=       {"ABCDEFGHIJKLMNOPQRSTUVWXYZ1"};
char *valor[28],*test,*test2;

///FUNCIONES/////
void inicio ();//
void cadena ();//
void morse  ();//
void menu   ();//
/////////////////

void inicio()
{
	for(int i=0; i<27; i++)
		valor[i]= &codigo [i][0];
	test= &mayus[0];
	test2= &minus[0];
}

void cadena()
{
	system ("cls");

	char cadena[80],*ptram;
	char  aux[80]= {"  "};
	int l=0; cout<<endl;

	cout << "\n\n INTRODUZCA LOS CARACTERES QUE DESEA CONVERTIR A MORSE: " <<endl;
	cout <<"\n     ";
	cin.getline(cadena,80);cin.getline(cadena,80);
	
	ptram=&cadena[0];
	l=strlen(cadena);
	for(int i=0;i<l;i++)
	{
		for(int j=0;j<27;j++)
		{
			if((*(ptram+i)==*(test+j)) || (*(ptram+i)==*(test2+j)))
			{
				strcat(aux,valor[j]);
			}
		}
	}

	cout <<"\n\n  LA EXPRESION MORSE ES: " <<aux <<endl<<endl<<endl;
	cout <<"\n\n  PRESIONE UNA TECLA PARA VOLVER AL MENU";
}

void morse()
{
	system ("cls");

	char cadena[80]= {" "},maux[80][80]={" "};
	char *ptrma,*ptrmaaux[80];
	char aux[80]= {" "},aux2[80]= {" "};
	int a,b,c,d;

	cout << "\n\n                              INGRESE SU CODIGO MORSE ";
	cout << "\n\n                        DEJE DOS ESPACIOS ENTRE CADA CODIGO: " <<endl;
	cout <<"\n     ";
	cin.getline (cadena,80); cin.getline (cadena,80);

	strcat ( cadena," " );
	ptrma= &cadena[0];

	a= strlen(cadena);
	b=0;
	c=0;
	for (int i=0; i<a; i++)
	{
		if(*(ptrma+i)!=' ')
		{
			maux[b][c]= *(ptrma+i);
			c++;
		}
		else
		{
			b++;
			c=0;
		}
	}
	for (i=0; i<b; i++)
		ptrmaaux[i]= &maux[i][0];
	d=0;
	for (i=0; i<b; i++)
	{
		for (int j=0; j<27; j++)
		{
			if (strcmp (ptrmaaux[i],valor[j]) ==0)
			{
				aux[d]= *test+j;
				d++;
			}
		}
	}

	strcpy (aux2,aux);

	cout << "\n\n  LA CONVERSION DEL C.M ES: " <<aux2 <<endl<<endl<<endl;
	cout <<"\n\n  PRESIONE UNA TECLA PARA VOLVER AL MENU";
}

void menu()
{
	int opc;
	inicio();
	do
	{
		system("color 0a");
		cout <<"ßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß \n" <<endl;
		cout <<"\t\t           UNIVERSIDAD VALLE DEL MOMBOY    \n " <<endl;
		cout <<"\t\t              FACULTAD DE INGENERIA        \n " <<endl;
		cout <<"\t\t          PROGRAMADOR: ELI D. AGUILAR G.   \n" <<endl <<endl;

		cout << "\t\t     ===========================================\n";
		cout << "\t\t     =  BIENVENIDO AL SISTEMA DE CODIGO MORSE  =";
		cout << "\n\t\t     ===========================================\n"<<endl<<endl;
	
		cout << " \t [ 1 ] Ingresar Cadena de Caracteres y Cambiar a Codigo Morse  \n" <<endl;
		cout << " \t [ 2 ] Ingresar Codigo Morse y Cambiar a Cadena de Caracteres  \n" <<endl;
		cout << " \t [ 3 ] Salir del Sistema                                       \n" <<endl<<endl<<endl<<endl;

		cout << " INGRESE LA OPCION: ";
		cin >> opc;

		cout<<""<<endl;

		if (opc==1)
		{
			cadena();
			cin.get();
			system("cls");			
		}	

		if (opc==2)
		{
			morse();
			cin.get();
			system("cls");	
		}
	}
	
	while (opc!=3);

}

void main()
{
	menu();
}