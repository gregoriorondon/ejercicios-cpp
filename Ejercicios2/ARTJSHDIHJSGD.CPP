#include<iostream.h>
#include<string.h>
#include<stdlib.h>
float calculos(float operando1,float operando2,int operador);

struct data
{
	char infija[10][10];
	char postfija[10][10];
	float resultados[10];
	int cima;
};

int num(char cad)
{
	char numeros[]={"0123456789"};
	int band=-1;
	for(int i=0;i<10;i++)
	{
		if(numeros[i]==cad)
		{
			band=i;
		}
	}
	return(band);
}
int signos(char cad)
{
	char sig[]={"+*/-"};
	int band=-1;
	for(int i=0;i<4;i++)
	{
		if(sig[i]==cad)
		{
			band=i+1;
		}
	}
	return(band);
}
int vacio(char cad)
{
	if(cad!=' ')
	{
		return(1);
	}
	else
	{
		return(0);
	}
}

int error_busqueda(char cad[10])
{
	int x;
	x=strlen(cad);
	if(x==5)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
void crear(data *R)
{
	R->cima=-1;
}
void modulo1(data *R,float x)
{
	R->resultados[R->cima]=x;
}
void mostrar_op(data *R)
{   cout<<endl<<endl;
	for(int j=R->cima;j>-1;j--)
	{
		cout<<"\t\t INFIJA-> "<<R->infija[j]<<" POSTFIJA-> "<<R->postfija[j]<<" RESULTADO: "<<R->resultados[j]<<endl;
	}
}
void insertar_cadena(data *R)
{   
	char aux[10];
	int c=0;int p;
	cin.ignore();
	cout<<endl<<endl<<"\t\t\t CADENA INFIJA:";
	cin.getline(aux,10);
	int x=error_busqueda(aux);
	if(x==1)
	{
		
		cin.get();
		p=num(aux[0]);
		if(p!=-1)
		{c++;}
		else
		{c--;}
		p=vacio(aux[1]);
		if(p==1)
		{c--;}
		else
		{c++;}
		p=signos(aux[2]);
		if(p!=-1)
		{
			c++;
		}
		else
		{c--;}
        p=vacio(aux[3]);
		if(p==1)
		{c--;}
		else
		{c++;}
     	p=num(aux[4]);
		if(p!=-1)
		{c++;}
		else
		{c--;}
		if(c==5)
		{
			cout<<"\t\t\t LA CADENA CUMPLE CON LOS CONDICIONES";
			cin.get();
			R->cima++;
			strcpy(R->infija[R->cima],aux);
			char postf[6];
			int k,j;
			float d;
			postf[0]=aux[0];
			postf[1]=aux[1];
			postf[2]=aux[4];
			postf[3]=aux[3];
			postf[4]=aux[2];
			postf[5]='\0';
			cout<<endl<<"\t\t\t CADENA POSTFIJA:"<<postf<<endl;
			strcpy(R->postfija[R->cima],postf);
		    p=num(postf[0]);
			//cout<<"EL VALOR ES:"<<p;
			k=num(postf[2]);
	        //cout<<"EL VALOR ES:"<<k;
			j=signos(postf[4]);
			//cout<<"valor"<<j;
			float a=p;
			float b=k;
			float c=j;
		
			d=calculos(a,b,c);
			cout<<endl<<endl<<"\a\t\t\t EL RESULTADO DE LA OPERACION ES:"<<d;
			modulo1(R,d);

		
	
		
		
			cin.get();
		
		


		}
		else
		{
			cout<<"ERROR EN LA CADENA";
			cin.get();
		}

	



	}
	else
	{
       cout<<"ERROR----";
	   cin.get();
	}
}
	



void main()
{
	data R;
	crear(&R);
	char op;
	do
	{
		cout<<endl<<"\t\t\t PRACTICA COMPILADORES "<<endl<<endl;
		cout<<"\t\t\t 1---- INSERTAR OPERANDOS"<<endl<<endl;
		cout<<"\t\t\t 2---- MOSTRAR PILA GENERAL"<<endl<<endl;
		cout<<"\t\t\t 3---- SALIR";
		cin>>op;
		if(op=='1')
		{insertar_cadena(&R);}
		if(op=='2')
		{mostrar_op(&R);}
	}while(op!='3');
}
float calculos(float operando1,float operando2,int operador)
{
	if(operador==1)
	{
		return(operando1+operando2);
	}
	if(operador==2)
	{
        return(operando1*operando2);
	}
    if(operador==3)
	{
        return(operando1/operando2);
	}
	if(operador==4)
	{
		return(operando1-operando2);
	}
}
	
	





