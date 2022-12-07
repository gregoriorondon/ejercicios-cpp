#include<iostream.h>
#include<string.h>

/* tabla morse para pruebas

A  .-  
B  -...  
C  -.-.  
D  -..  
E  .  
F  ..-.  
G  --.  
H  ....  
I  ..  
J  .---  
K  -.-  
L  .-..  
M  --  
N  -.  
Ñ  --..--  
O  ---  
P  .--.  
Q  --.-  
R  .-.  
S  ...  
T  -  
U  ..-  
V  ...-  
W  .--  
X  -..-  
Y  -.--   
Z  --..  
1  .----  
2  ..---  
3  ...-- 
4  ....- 
5  ..... 
6  -.... 
7  --... 
8  ---.. 
9  ----. 
0  ----- 

*/

char enemin=164;  //para usar en la comparacion de las eñes 
char enemay=165;



int menu()
{

int opc;

	cout<<"1.- Convertir Espa"<<enemin<<"ol->Morse"<<endl;
	cout<<"2.- Convertir Morse->Espa"<<enemin<<"ol"<<endl;
	cout<<"3.- Salir"<<endl;
	cout<<"Seleccione: ";

	cin>>opc;
	return opc;

}


char* frasemorse()
{
cin.ignore();

char *frase,texto[250]={""};

	frase=new char;

	cout<<"Introduzca Texto a convertir: ";

	cin.getline(frase,255);


	int o=strlen(frase);

	for(int i=0;i<o;i++)

	{

		
		if(frase[i]=='a'||frase[i]=='A')
			strcat(texto,".- ");
		if(frase[i]=='b'||frase[i]=='B')
			strcat(texto,"-... ");
		if(frase[i]=='c'||frase[i]=='C')
			strcat(texto,"-.-. ");
		if(frase[i]=='d'||frase[i]=='D')
			strcat(texto,"-.. ");
		if(frase[i]=='e'||frase[i]=='E')
			strcat(texto,". ");
		if(frase[i]=='f'||frase[i]=='F')
			strcat(texto,"..-. ");
		if(frase[i]=='g'||frase[i]=='G')
			strcat(texto,"--. ");
		if(frase[i]=='h'||frase[i]=='H')
			strcat(texto,".... ");
		if(frase[i]=='i'||frase[i]=='I')
			strcat(texto,".. ");
		if(frase[i]=='j'||frase[i]=='J')
			strcat(texto,".--- ");
		if(frase[i]=='k'||frase[i]=='K')
			strcat(texto,"-.- ");
		if(frase[i]=='l'||frase[i]=='L')
			strcat(texto,".-.. ");
		if(frase[i]=='m'||frase[i]=='M')
			strcat(texto,"-- ");
		if(frase[i]=='n'||frase[i]=='N')
			strcat(texto,"-. ");
		if(frase[i]==enemin||frase[i]==enemay) //se usa el valor ASCII de las eñes
			strcat(texto,"--..-- ");
		if(frase[i]=='o'||frase[i]=='O')
			strcat(texto,"--- ");
		if(frase[i]=='p'||frase[i]=='P')
			strcat(texto,".--. ");
		if(frase[i]=='q'||frase[i]=='Q')
			strcat(texto,"--.- ");
		if(frase[i]=='r'||frase[i]=='R')
			strcat(texto,".-. ");
		if(frase[i]=='s'||frase[i]=='S')
			strcat(texto,"... ");
		if(frase[i]=='t'||frase[i]=='T')
			strcat(texto,"- ");
		if(frase[i]=='u'||frase[i]=='U')
			strcat(texto,"..- ");
		if(frase[i]=='v'||frase[i]=='V')
			strcat(texto,"...- ");
		if(frase[i]=='w'||frase[i]=='W')
			strcat(texto,".-- ");
		if(frase[i]=='x'||frase[i]=='X')
			strcat(texto,"-..- ");
		if(frase[i]=='y'||frase[i]=='Y')
			strcat(texto,"-.-- ");
		if(frase[i]=='z'||frase[i]=='Z')
			strcat(texto,"--.. ");
		if(frase[i]==' '||frase[i]==' ')
			strcat(texto,"   ");
		if(frase[i]=='1')
			strcat(texto,".---- ");
		if(frase[i]=='2')
			strcat(texto,"..--- ");
		if(frase[i]=='3')
			strcat(texto,"...-- ");
		if(frase[i]=='4')
			strcat(texto,"....- ");
		if(frase[i]=='5')
			strcat(texto,"..... ");
		if(frase[i]=='6')
			strcat(texto,"-.... ");
		if(frase[i]=='7')
			strcat(texto,"--... ");
		if(frase[i]=='8')
			strcat(texto,"---.. ");
		if(frase[i]=='9')
			strcat(texto,"----. ");
		if(frase[i]=='0')
			strcat(texto,"----- ");

	}

	

	return texto;//ya convertido
}

char* morsefrase()
{
char *morse,texto[250]={""},aux[6];
	cout<<"Introduzca el codigo morse a traducir"<<endl;
	cout<<"(Use un espacio entre letra codificada y dos espacios \nentre palabra codificada, use solo \".\" y \"-\")"<<endl<<endl;
	morse=new char;

	int cont=0,cont2=0; //cont me lleva la posicion actual del auxiliar, y cont2 la posicion actual del texto convertido
	cin.ignore();
cin.getline(morse,255);

	for(int i=0;i<strlen(morse);i++)
	{
		for(int k=0;k<=strlen(morse);k++)
		{

			if(morse[k]==' '||morse[k]=='\0')
			{
				

					for(int ini=i;ini<k;ini++)
					{
						aux[cont]=morse[ini];
						cont++;

					}
					
					aux[cont]='\0';
					cont=0;
								
////////////////////////


					if(strcmp(aux,".-")==0)
					{
						texto[cont2]='A';
						texto[cont2+1]='\0';
						cont2++;
					}
					if(strcmp(aux,"-...")==0)
					{
						texto[cont2]='B';
						texto[cont2+1]='\0';
						cont2++;
					}
					if(strcmp(aux,"-.-.")==0)
					{
						texto[cont2]='C';
						texto[cont2+1]='\0';
						cont2++;
					}
					if(strcmp(aux,"-..")==0)
					{
						texto[cont2]='D';
						texto[cont2+1]='\0';
						cont2++;
					}
					if(strcmp(aux,".")==0)
					{
						texto[cont2]='E';
						texto[cont2+1]='\0';
						cont2++;
					}
					if(strcmp(aux,"..-.")==0)
					{
						texto[cont2]='F';
						texto[cont2+1]='\0';
						cont2++;
					}
					if(strcmp(aux,"--.")==0)
					{
						texto[cont2]='G';
						texto[cont2+1]='\0';
						cont2++;
					}
					if(strcmp(aux,"....")==0)
					{
						texto[cont2]='H';
						texto[cont2+1]='\0';
						cont2++;
					}
					if(strcmp(aux,"..")==0)
					{
						texto[cont2]='I';
						texto[cont2+1]='\0';
						cont2++;
					}
					if(strcmp(aux,".---")==0)
					{
						texto[cont2]='J';
						texto[cont2+1]='\0';
						cont2++;
					}
					if(strcmp(aux,"-.-")==0)
					{
						texto[cont2]='K';
						texto[cont2+1]='\0';
						cont2++;
					}
					if(strcmp(aux,".-..")==0)
					{
						texto[cont2]='L';
						texto[cont2+1]='\0';
						cont2++;
					}
					if(strcmp(aux,"--")==0)
					{
						texto[cont2]='M';
						texto[cont2+1]='\0';
						cont2++;
					}
					if(strcmp(aux,"-.")==0)
					{
						texto[cont2]='N';
						texto[cont2+1]='\0';
						cont2++;
					}
					if(strcmp(aux,"--..--")==0)
					{
						texto[cont2]=enemay;
						texto[cont2+1]='\0';
						cont2++;
					}
					if(strcmp(aux,"---")==0)
					{
						texto[cont2]='O';
						texto[cont2+1]='\0';cont2++;
					}
					if(strcmp(aux,".--.")==0)
					{
						texto[cont2]='P';
						texto[cont2+1]='\0';cont2++;
					}
					if(strcmp(aux,"--.-")==0)
					{
						texto[cont2]='Q';
						texto[cont2+1]='\0';cont2++;
					}
					if(strcmp(aux,".-.")==0)
					{
						texto[cont2]='R';
						texto[cont2+1]='\0';cont2++;
					}
					if(strcmp(aux,"...")==0)
					{
						texto[cont2]='S';
						texto[cont2+1]='\0';cont2++;
					}
					if(strcmp(aux,"-")==0)
					{
						texto[cont2]='T';
						texto[cont2+1]='\0';cont2++;
					}
					if(strcmp(aux,"..-")==0)
					{
						texto[cont2]='U';
						texto[cont2+1]='\0';cont2++;
					}
					if(strcmp(aux,"...-")==0)
					{
						texto[cont2]='V';
						texto[cont2+1]='\0';cont2++;
					}
					if(strcmp(aux,".--")==0)
					{
						texto[cont2]='W';
						texto[cont2+1]='\0';cont2++;
					}
					if(strcmp(aux,"-..-")==0)
					{
						texto[cont2]='X';
						texto[cont2+1]='\0';cont2++;
					}
					if(strcmp(aux,"-.--")==0)
					{
						texto[cont2]='Y';
						texto[cont2+1]='\0';cont2++;
					}
					if(strcmp(aux,"--..")==0)
					{
						texto[cont2]='Z';
						texto[cont2+1]='\0';cont2++;
					}
					if(strcmp(aux,".----")==0)
					{
						texto[cont2]='1';
						texto[cont2+1]='\0';cont2++;
					}
					if(strcmp(aux,"..---")==0)
					{
						texto[cont2]='2';
						texto[cont2+1]='\0';cont2++;
					}
					if(strcmp(aux,"...--")==0)
					{
						texto[cont2]='3';
						texto[cont2+1]='\0';cont2++;
					}
					if(strcmp(aux,"....-")==0)
					{
						texto[cont2]='4';
						texto[cont2+1]='\0';cont2++;
					}
					if(strcmp(aux,"......")==0)
					{
						texto[cont2]='5';
						texto[cont2+1]='\0';cont2++;
					}
					if(strcmp(aux,"-....")==0)
					{
						texto[cont2]='6';
						texto[cont2+1]='\0';cont2++;
					}
					if(strcmp(aux,"--...")==0)
					{
						texto[cont2]='7';
						texto[cont2+1]='\0';cont2++;
					}
					if(strcmp(aux,"---..")==0)
					{
						texto[cont2]='8';
						texto[cont2+1]='\0';cont2++;
					}
					if(strcmp(aux,"----.")==0)
					{
						texto[cont2]='9';
						texto[cont2+1]='\0';cont2++;
					}
					if(strcmp(aux,"-----")==0)
					{
						texto[cont2]='0';
						texto[cont2+1]='\0';cont2++;
					}

				if(morse[k+1]==' ')//si la sig letra es un espacio es porque hay dos seguidos
				{                 // y se supone que es el fin de la palabra actual
					texto[cont2]=' ';
					texto[cont2+1]='\0';
					cont2++;
					i=k+2;
					k=i;

				}
				else
				{

					i=k+1;
					k=i;
				}
///////////////////////
			}

		}

	}


return texto; //convertido a español 
}


void main()

{
int funcion;

	do{

funcion=menu();

if(funcion==1)
	cout<<"          "<<frasemorse()<<endl<<endl;
if(funcion==2)
	cout<<"          "<<morsefrase()<<endl<<endl;




	}while(funcion!=3);


}