#include<iostream.h>
#include<string.h>
#include<windows.h>

void comparar(char cad[100],char cadx[100])
{
	
	if(strcmp(cad,cadx)==0)
	{
		cout<<"CADENAS IGUALES;";
		cin.get();
	}
	else
	{
		cout<<"LAS CADENAS NO SON IGUALES";
		cin.get();
	}
}
int longitud(char cad[100])
{
	int x;
	x=strlen(cad);
	return(x);
}
void copiar(char cad[100])
{
	char aux[100];

	strcpy(aux,cad);

	cout<<"LA CADENA "<<aux<<"SE HA COPIADO EXITOSAMENTE:";
	cin.get();
}
void concatenar(char aux[100],char cad[100])
{
	strcat(aux,cad);

	cout<<"LA NUEVA CADENA ES:"<<aux;
	cin.get();
}
void main()
{
	system("color 1f");
	char opc;

	char cad[100];
	char aux[100];

	while(opc!='x')
	{
		cout<<"1_Comparar Cadenas"<<endl;
		cout<<"2_Longitud de Cadena"<<endl;
		cout<<"3_Copiar Cadena"<<endl;
		cout<<"4_Concatenar Cadena"<<endl;
		cout<<"x_Salir";
		cin>>opc;
		if(opc=='1')
		{
			cin.ignore();
			cout<<"CADENA 1:";
			cin.getline(cad,100);
			cout<<"CADENA 2:";
			cin.getline(aux,100);
			comparar(cad,aux);
			cin.get();
		}
		if(opc=='2')
		{
			int p;
            cin.ignore();
			cout<<"CADENA :";
			cin.getline(cad,100);
			p=longitud(cad);
			cout<<p;
			cin.get();
		}
		if(opc=='3')
		{
	      
			cout<<"CADENA :";
			cin.getline(cad,100);
			copiar(cad);
			cin.get();
		}
		if(opc=='4')
		{
            cin.ignore();
			cout<<"CADENA 1:";
			cin.getline(cad,100);
			cout<<"CADENA 2:";
			cin.getline(aux,100);
			concatenar(cad,aux);
			cin.get();
		}
	}
}





