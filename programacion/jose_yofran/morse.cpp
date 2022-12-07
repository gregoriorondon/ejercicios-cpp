#include<iostream.h>
#include<string.h>
			

				 //CODIGO MORSE

 //Alfabeto						//Numeros
char a[3]=".-";				char n1[6]=".----";			char dia[20]="Martes\t\"17/03/07\"";
char b[5]="-...";			char n2[6]="..---";
char c[5]="-.-.";			char n3[6]="...--";
char d[4]="-..";			char n4[6]="....-";
char e[2]=".";				char n5[6]=".....";
char f[5]="..-.";			char n6[6]="-....";
char g[4]="--.";			char n7[6]="--...";
char h[5]="....";			char n8[6]="---..";
char i[3]="..";				char n9[6]="----.";
char j[5]=".---";			char n0[6]="-----";
char k[4]="-.-";
char l[5]=".-..";
char m[3]="--";
char n[3]="-.";
char o[4]="---";
char p[5]=".--.";
char q[5]="--.-";
char r[4]=".-.";
char s[4]="...";
char t[2]="-";
char u[4]="..-";
char v[5]="...-";
char w[4]=".--";
char x[5]="-..-";
char y[5]="-.--";
char z[5]="--..";


void frase2morse();
void morse2frase();

void main()
{
	char resp='s';
	int opc;
	
	cout<<"\t\t\t***********************"<<endl;
	cout<<"\t\t\tSistema de codificacion"<<endl;
	cout<<"\t\t\t"<<dia<<endl;
	cout<<"\t\t\t***********************"<<endl<<endl;
	cout<<"\t\t\t\t\t\t\tIntegrantes:"<<endl<<endl;
	cout<<"\t\t\t\t\t\t\tYofran Diaz"<<endl;
	cout<<"\t\t\t\t\t\t\tJose Gonzalez"<<endl;

	while (resp=='s')
	{
		cout<<"\t\tMENU\n"<<endl;
		cout<<"1.-Pasar una frase a codigo morse"<<endl;
		cout<<"2.-Pasar de codigo morse a frase"<<endl;
		cout<<"3.-Salir"<<endl<<endl;

		cout<<"Que opcion desea realizar: ";
		cin>>opc;
		cout<<"\n";


		if(opc==1)
			frase2morse();
		if(opc==2)
			morse2frase();
		if(opc==3)
			resp='n';
	}	
	cin.get();
}

/*Esta parte el realiza la funcion precfectamente, lee cadenas
de caracteres completas y las transforma a codigo morse; incluso
esta parte dispone de sonido que simula del codigo morse gracias
al comando(\a: que emite una alarma). Y este nos permite simular
dicha accion*/

void frase2morse()
{
	char le[50];

	cout<<"Ingrese la frase en espanol para codificarla \n a morse: ";
	cin.ignore();
	cin.getline(le,50);

	for(int ch=0;ch<50;ch++)
	{
		if(le[ch]=='a')
			cout<<"\a"<<a;
		if(le[ch]=='b')
			cout<<"\a"<<b;
		if(le[ch]=='c')
			cout<<"\a"<<c;
		if(le[ch]=='d')
			cout<<"\a"<<d;
		if(le[ch]=='e')
			cout<<"\a"<<e;
		if(le[ch]=='f')
			cout<<"\a"<<f;
		if(le[ch]=='g')
			cout<<"\a"<<g;
		if(le[ch]=='h')
			cout<<"\a"<<h;
		if(le[ch]=='i')
			cout<<"\a"<<i;
		if(le[ch]=='j')
			cout<<"\a"<<j;
		if (le[ch]=='k')
			cout<<"\a"<<k;
		if(le[ch]=='l')
			cout<<"\a"<<l;
		if(le[ch]=='m')
			cout<<"\a"<<m;
		if(le[ch]=='n')
			cout<<"\a"<<n;
		if(le[ch]=='o')
			cout<<"\a"<<o;
		if(le[ch]=='p')
			cout<<"\a"<<p;
		if(le[ch]=='q')
			cout<<"\a"<<q;
		if(le[ch]=='r')
			cout<<"\a"<<r;
		if(le[ch]=='s')
			cout<<"\a"<<s;
		if(le[ch]=='t')
			cout<<"\a"<<t;
		if(le[ch]=='u')
			cout<<"\a"<<u;
		if(le[ch]=='v')
			cout<<"\a"<<v;
		if(le[ch]=='w')
			cout<<"\a"<<w;
		if(le[ch]=='x')
			cout<<"\a"<<x;
		if(le[ch]=='y')
			cout<<"\a"<<y;
		if(le[ch]=='z')
			cout<<"\a"<<z;

		if(le[ch]=='1')
			cout<<"\a"<<n1;
		if(le[ch]=='2')
			cout<<"\a"<<n2;
		if(le[ch]=='3')
			cout<<"\a"<<n3;
		if(le[ch]=='4')
			cout<<"\a"<<n4;
		if(le[ch]=='5')
			cout<<"\a"<<n5;
		if(le[ch]=='6')
			cout<<"\a"<<n6;
		if(le[ch]=='7')
			cout<<"\a"<<n7;
		if(le[ch]=='8')
			cout<<"\a"<<n8;
		if(le[ch]=='9')
			cout<<"\a"<<n9;
		if(le[ch]=='0')
			cout<<"\a"<<n0;

		cout<<endl;
	}
}

/*En esta parte el programa solo realiza la funcion para
letras o numeros individuales, no puede formar palabras
completas*/

void morse2frase()
{
	char le[6];

	cout<<"Ingrese una frase en codigo morse para su equvalente \n en espanol: ";
	cin.ignore();
	cin.getline(le,6);

	for(int ch=0;ch<1;ch++)
	{
		if(strcmp(le,a)==0)
			cout<<"\t\t a";
		if(strcmp(le,b)==0)
			cout<<"\t\t b";
		if(strcmp(le,c)==0)
			cout<<"\t\t c";
		if(strcmp(le,d)==0)
			cout<<"\t\t d";
		if(strcmp(le,e)==0)
			cout<<"\t\t e";
		if(strcmp(le,f)==0)
			cout<<"\t\t f";
		if(strcmp(le,g)==0)
			cout<<"\t\t g";
		if(strcmp(le,h)==0)
			cout<<"\t\t h";
		if(strcmp(le,i)==0)
			cout<<"\t\t i";
		if(strcmp(le,j)==0)
			cout<<"\t\t j";
		if(strcmp(le,k)==0)
			cout<<"\t\t k";
		if(strcmp(le,l)==0)
			cout<<"\t\t l";
		if(strcmp(le,m)==0)
			cout<<"\t\t m";
		if(strcmp(le,n)==0)
			cout<<"\t\t n";
		if(strcmp(le,o)==0)
			cout<<"\t\t o";
		if(strcmp(le,p)==0)
			cout<<"\t\t p";
		if(strcmp(le,q)==0)
			cout<<"\t\t q";
		if(strcmp(le,r)==0)
			cout<<"\t\t r";
		if(strcmp(le,s)==0)
			cout<<"\t\t s";
		if(strcmp(le,t)==0)
			cout<<"\t\t t";
		if(strcmp(le,u)==0)
			cout<<"\t\t u";
		if(strcmp(le,v)==0)
			cout<<"\t\t v";
		if(strcmp(le,w)==0)
			cout<<"\t\t w";
		if(strcmp(le,x)==0)
			cout<<"\t\t x";
		if(strcmp(le,y)==0)
			cout<<"\t\t y";
		if(strcmp(le,z)==0)
			cout<<"\t\t z";

		if(strcmp(le,n1)==0)
			cout<<"\t\t 1";
		if(strcmp(le,n2)==0)
			cout<<"\t\t 2";
		if(strcmp(le,n3)==0)
			cout<<"\t\t 3";
		if(strcmp(le,n4)==0)
			cout<<"\t\t 4";
		if(strcmp(le,n5)==0)
			cout<<"\t\t 5";
		if(strcmp(le,n6)==0)
			cout<<"\t\t 6";
		if(strcmp(le,n7)==0)
			cout<<"\t\t 7";
		if(strcmp(le,n8)==0)
			cout<<"\t\t 8";
		if(strcmp(le,n9)==0)
			cout<<"\t\t 9";
		if(strcmp(le,n0)==0)
			cout<<"\t\t 0";

		cout<<endl;
	
	}
	cout<<endl;
}
/*Este es nuestro programa, lo hicimos de la forma mas
sencilla posible, aplicando nuestros conocimientos adquiridos
en la materia*/