/*programa que lea una frase escrita en español y cifre dicha frase en codigo Morse y la convierte en el equivalente en español.
Utilice un espacio en blanco entre cada letra codificada Morse y * entre cada palabra codificada en Morse*/
#include <iostream.h>
#include <process.h>
#include <string.h>
struct codigo
{
	char letra;
	char equivalente[10];
};
codigo morse[40];
void inicio()
{
	int i=0;
	for(char a='a';a<='z';a++)
	{
		morse[i].letra=a;
		i++;
	}
	for(a='0';a<='9';a++)
	{
		morse[i].letra=a;
		i++;
	}
	strcpy(morse[0].equivalente,".-");
	strcpy(morse[1].equivalente,"-...");
	strcpy(morse[2].equivalente,"-.-.");
	strcpy(morse[3].equivalente,"-..");
	strcpy(morse[4].equivalente,".");
	strcpy(morse[5].equivalente,"..-.");
	strcpy(morse[6].equivalente,"--.");
	strcpy(morse[7].equivalente,"...");
	strcpy(morse[8].equivalente,"..");
	strcpy(morse[9].equivalente,".---");
	strcpy(morse[10].equivalente,"-.-");
	strcpy(morse[11].equivalente,".-..");
	strcpy(morse[12].equivalente,"--");
	strcpy(morse[13].equivalente,"-.");
	strcpy(morse[14].equivalente,"---");
	strcpy(morse[15].equivalente,".--.");
	strcpy(morse[16].equivalente,"--.-");
	strcpy(morse[17].equivalente,".-.");
	strcpy(morse[18].equivalente,"...");
	strcpy(morse[19].equivalente,"-");
	strcpy(morse[20].equivalente,"..-");
	strcpy(morse[21].equivalente,"...-");
	strcpy(morse[22].equivalente,".--");
	strcpy(morse[23].equivalente,"-..-");
	strcpy(morse[24].equivalente,"-.--");
	strcpy(morse[25].equivalente,"--..");
	strcpy(morse[26].equivalente,".----");
	strcpy(morse[27].equivalente,"..---");
	strcpy(morse[28].equivalente,"...--");
	strcpy(morse[29].equivalente,"....-");
	strcpy(morse[30].equivalente,".....");
	strcpy(morse[31].equivalente,"-....");
	strcpy(morse[32].equivalente,"--...");
	strcpy(morse[33].equivalente,"---..");
	strcpy(morse[34].equivalente,"----.");

}
void codificar(char* a)
{
	int i, j, k;
	char b[300];;
	strcpy(b,"");
	k=strlen(a);
	cout<<endl<<"valor de k: "<<k;
	for(i=0;i<k+1; i++)
	{
		for(j=0;j<34;j++)
		{
			if(morse[j].letra==a[i])
			{
				strcat(b,morse[j].equivalente);
				strcat(b," ");
			}
			if(a[i]==' ')
			{
				strcat(b,"  ");
			}
		}
	}
	cout<<endl<<" Palabra codificada: "<<b; 
	
}
void decodificar( char* a)
{
	int i, j=0, k;
	char b[300];
	char matriz[100][100];
	k=strlen(a);
	int m, n=0;
	for(m=0;m<k; m++)
	{
		if(a[m]==' ')
		{
			matriz[n][j]='\0';
			n++;
			j=0;
		}else{
			if(a[m]=='*')
			{
			matriz[n][j]='*';
			matriz[n][j+1]='\0';
			n++;
			j=0;
			}else{
			matriz[n][j]=a[m];
			j++;
			}
		}
	
	}
	for(i=0;i<n; i++)
	{
		cout<<endl<<matriz[i];
	}

	strcpy(b,"");
	n=0;	
	cout<<endl<<"valor de k: "<<k;
	for(i=0;i<k; i++)
	{
		for(j=0;j<34;j++)
		{
			if(strcmp(morse[j].equivalente,matriz[n])==0)
			{
				b[n]=morse[j].letra;
				n++; 		
				
			}
			if(strcmp(matriz[n]," ")==0)
			{
				b[n]=' ';
				n++;
			}
			
		}
	}
	b[n]='\0';
	cout<<endl<<" Palabra codificada: "<<b; 
}

void menu()
{
	system("cls");
	char op;
	char cad[100];
	int i;
		;
	while(op!='0')
	{
		cout<<endl<<"                   ******************************************";
		cout<<endl<<"                   ** 1_ Codificar de espa\xa4ol a Morse      **";
		cout<<endl<<"                   ** 2_ Decodificar de Morse a espa\xa4ol    **";
		cout<<endl<<"                   ** 0_ Salir                             **";
		cout<<endl<<"                   ******************************************";
		cout<<endl<<endl<<endl;
		cin>>op;
		switch (op)
		{
		case '1':
			cout<<endl<<" Introduzca frase: ";
			cin.getline(cad, 100);
			cin.getline(cad, 100);
			codificar(cad);			
			break;
		case '2':
			cout<<endl<<" Introduzca palabra: ";
			cin.getline(cad,100);
			cin.getline(cad,100);
			decodificar(cad);
			break;
		}
	}
}
void main()
{
	inicio();
	menu();
}

