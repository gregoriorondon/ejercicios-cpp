#include<iostream.h>
#include<string.h>
char codigo[27][20]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
char abe[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char abe2[]="abcdefghijklmnopqrstuvwxyz";
char *cod[27],*cod1,*cod2;

void funcion()
{
	for(int i=0;i<26;i++)
		cod[i]=&codigo[i][0];
	cod1=&abe[0];	
	cod2=&abe2[0];
}

void frase_a_morse()
{
	char letra[250],*codam;
	char  aux[250]={" "};
	int k=0;
	cout<<endl<<"\t\t         ingrese palabra: ";
	cin.getline(letra,255);
	cin.getline(letra,255);
	codam=&letra[0];
	k=strlen(letra);
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<27;j++)
		{
			if((*(codam+i)==*(cod1+j)) || (*(codam+i)==*(cod2+j)))
			{
				strcat(aux,cod[j]);
				strcat(aux,cod[j]);
			}
		}
	}
	cout<<endl<<"\t\t   La palabra Ingresada en Codigo Morse es: "<<endl<<"\t\t    "<<aux;
}

void morse_a_frace()
{
	char letra[300]={" "},maux[300][300]={" "};
	char *codma,*codmaaux[300];
	char aux[300]={" "},aux2[300]={" "};
	int k,l,m,x;
	cout<<endl<<"\t\t        Ingrese codigo morse:         ";
	cout<<endl<<"\t\t por favor deje un espacio por cada letra "<<endl;
	cin.getline(letra,255);
	cin.getline(letra,255);
	strcat(letra," ");
	codma=&letra[0];
	k=strlen(*cod);
	l=0;
	m=0;
	for(int i=0;i<k;i++)
	{
		if(*(codma+i)!=' ')
		{
			maux[l][m]=*(codma+i);
			m++;
		}
		else
		{
			l++;
			m=0;
		}
	}
	for(i=0;i<l;i++)
		codmaaux[i]=&maux[i][0];
	x=0;
	for(i=0;i<l;i++)
	{
		for(int j=0;j<26;j++)
		{
			if(strcmp(codmaaux[i],cod[j])==0)
			{
				aux[x]=*cod1+j;
				x++;
			}
		}
	}
	strcpy(aux2,aux);
	cout<<endl<<"\t\t   el codigo morse que usted ingreso significa: "<<endl<<"\t\t          "<<aux2;
}

void main()
{
	int opc;
	funcion();
	while(opc!=3)
	{
		cout<<endl<<"Elija Una Opcion para Empezar: ";
		cout<<endl<<"\t\t1._Frase a Codigo Morse: ";
		cout<<endl<<"\t\t2._Codigo Morse a Frase: ";
		cout<<endl<<"\t\t3._Salir: ";
		cin>>opc;
		if(opc==1)
		{
			frase_a_morse();
			cin.get();
			cin.get();
		}
		if(opc==2)
		{
			morse_a_frace();
			cin.get();
			cin.get();
		}
	}
			
				cin.get();
					cin.get();
}