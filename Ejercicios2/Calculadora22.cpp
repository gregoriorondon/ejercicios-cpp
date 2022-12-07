#include<math.h>
#include<iostream.h>
#include<windows.h>

struct calculadora
{
	double dato;
};
calculadora c[100];

float suma(float a,float b);
float resta(float a,float b);
float multiplicacion(float a,float b);
float division(float a,float b);
int factorial(int x);
float celsius(float x);

float suma(float a,float b)
{
	float x;
	x=a+b;
	return(x);
}
float resta(float a,float b)
{
	float x;
	x=a-b;
	return(x);
}
float multiplicacion(float a,float b)
{
	float x;
	x=a*b;
	return(x);
}
float division(float a,float b)
{
	float x;
	if(a==0)
	{
		cout<<"ERROR MATEMATICO"<<endl;
		system("pause");
	}
	else
	{
	  
		x=a/b;
		return(x);
	}
}

int factorial(int x)
{
	int f=1;
	for(int i=1;i<=x;i++)
	{
		f=f*i;
	}
	return(f);
}

void main()
{  
	system("color 0a");
	int i=0;
    char opc;
	float x,y,C;

	do
	{   system("cls");
		cout<<endl<<"\t\t\t 1) Suma";
		cout<<endl<<"\t\t\t 2) Resta";
		cout<<endl<<"\t\t\t 3) Multiplicacion";
		cout<<endl<<"\t\t\t 4) Division";
		cout<<endl<<"\t\t\t 5) Valor Absoluto";
		cout<<endl<<"\t\t\t 6) Arco Coseno";
		cout<<endl<<"\t\t\t 7) Arco Seno";
		cout<<endl<<"\t\t\t 8) Tangente";
		cout<<endl<<"\t\t\t 9) Raiz Cuadrada";
		cout<<endl<<"\t\t\t A) Elevado al Cuadrado";
		cout<<endl<<"\t\t\t B) Factorial !";
		cout<<endl<<"\t\t\t C) Conversion de Farenheit a Celsius";
		cout<<endl<<"\t\t\t D) Logaritmo Natural";
		cout<<endl<<"\t\t\t E) Logaritmo Base 10";
		cout<<endl<<"\t\t\t F) Arco Tangente";
		cout<<endl<<"\t\t\t G) Coseno";
		cout<<endl<<"\t\t\t H) Seno";
		cout<<endl<<"\t\t\t I) MOSTRAR ELEMENTOS ALMACENADOS";
		cout<<endl<<"\t\t\t X) SALIR"<<endl;
		cout<<endl<<"\t\t Ingrese Opcion: ";
		cin>>opc;
		if(opc=='1')
		{   system("cls");
		    
			cout<<" Primer Numero: ";
			cin>>x;
			cout<<" Segundo Numero: ";
			cin>>y;
			float p=suma(x,y);
		
			c[i++].dato=p;
			cout<<"SUMA = "<<p<<endl;
			system("pause");
			
		}
        if(opc=='2')
		{   
			system("cls");
		
			cout<<" Primer Numero: ";
			cin>>x;
			cout<<" Segundo Numero: ";
			cin>>y;
			float p=resta(x,y);
			cout<<"RESTA = "<<p<<endl;
			c[i++].dato=p;
			system("pause");
			
		}
        if(opc=='3')
		{   system("cls");
		    
			cout<<" Primer Numero: ";
			cin>>x;
			cout<<" Segundo Numero: ";
			cin>>y;
			float p=multiplicacion(x,y);
			cout<<"MULTIPLICACION = "<<p<<endl;
			c[i++].dato=p;
			system("pause");
			
		}
        if(opc=='4')
		{  
			system("cls");
			cout<<" Primer Numero: ";
			cin>>x;
			cout<<" Segundo Numero: ";
			cin>>y;
			float p=division(x,y);
			cout<<"Div = "<<p<<endl;
            c[i++].dato=p;
			system("pause");
			
		}
		if(opc=='5')
		{   system("cls");
			cout<<" Ingrese Numero: ";
			cin>>x;
			double m=fabs(x);
			cout<<"El VALOR ABSOLUTO DE "<<x<<" ES "<<m<<endl;
            c[i++].dato=m;
		
			system("pause");
		}
		if(opc=='6')
		{   
			system("cls");
			
			cout<<" Ingrese Numero: ";
			cin>>x;
			if((x>-1)&&(x<1))
			{
			 double a=acos(x);
             cout<<"El VALOR ARCO COSENO DE  "<<x<<" ES "<<a<<endl;
             c[i++].dato=a;
		
			 system("pause");
			}
			else
			{
				cout<<"ERROR MATEMATICO"<<endl;
				system("pause");
			}
		
		}
		if(opc=='7')
		{   
			system("cls");
			cout<<" Ingrese Numero: ";
			cin>>x;
			if((x>-1)&&(x<1))
			{
			 double a=asin(x);
             cout<<"El VALOR ARCO SENO DE  "<<x<<" ES "<<a<<endl;
             c[i++].dato=a;
			 system("pause");
			}
			else
			{
				cout<<"ERROR MATEMATICO"<<endl;
				system("pause");
			}
		
		}
		if(opc=='8')
		{
			double a;
            system("cls");
			cout<<" Ingrese Numero: ";
			cin>>x;
			a=tan(x);
			cout<<"LA TANGENTE DE  "<<x<<" ES "<<a<<endl;
            c[i++].dato=a;
		    system("pause");
		}
		if(opc=='9')
		{   
			double a;
            system("cls");
			cout<<" Ingrese Numero: ";
			cin>>x;
			a=sqrt(x);
			cout<<"LA RAIZ CUADRADA DE  "<<x<<" ES "<<a<<endl;
            c[i++].dato=a;
		    system("pause");
		}
		if(opc=='A'||opc=='a')
		{
			double a;
            system("cls");
			cout<<" Ingrese Numero: ";
			cin>>x;
			a=pow(x,2);
			cout<<"EL CUADRADO DE  "<<x<<" ES "<<a<<endl;
            c[i++].dato=a;
		    system("pause");
		}
		if(opc=='B'||opc=='b')
		{
			int x;
			system("cls");
			cout<<" Ingrese Numero: ";
			cin>>x;
			int f=factorial(x);
			cout<<"EL FACTORIAL DE  "<<x<<" ES "<<f<<endl;
		    c[i++].dato=f;
			system("pause");
		}
		if(opc=='C'||opc=='c')
		{
			double F;
			system("cls");
			cout<<"INGRESE UN NUMERO EN GRADOS FAHRENHEIT: ";
			cin>>C;
			F=(C-32)*5/9;
			cout<<"LA CONVERSION DE  "<<C<<"F ES "<<F<<" GRADOS CELSIUS "<<endl;
			system("pause");
		}
        if(opc=='D'||opc=='d')
		{	
			double a;
            system("cls");
			cout<<" Ingrese Numero: ";
			cin>>x;
			a=log(x);
			cout<<"EL LOGARITMO DE NATURAL DE "<<x<<" ES "<<a<<endl;
            c[i++].dato=a;
		    system("pause");
		
		}
        if(opc=='E'||opc=='e')
		{	
			double a;
            system("cls");
			cout<<" Ingrese Numero: ";
			cin>>x;
			a=log10(x);
			cout<<"EL LOGARITMO BASE 10 DE "<<x<<" ES "<<a<<endl;
            c[i++].dato=a;
		    system("pause");
		
		}
		if(opc=='F'||opc=='f')
		{
			double a;
            system("cls");
			cout<<" Ingrese Numero: ";
			cin>>x;
			a=atan(x);
			cout<<"EL VALOR ARCOTANGENTE DE "<<x<<" ES "<<a<<endl;
            c[i++].dato=a;
		    system("pause");
		}
		if(opc=='G'||opc=='g')
		{   
			double a;
            system("cls");
	        cout<<" Ingrese Numero: ";
			cin>>x;
			a=cos(x);
			cout<<"EL COSENO DE "<<x<<" ES "<<a<<endl;
            c[i++].dato=a;
		    system("pause");
		}
		if(opc=='H'||opc=='h')
		{   
			double a;
            system("cls");
			cout<<" Ingrese Numero: ";
			cin>>x;
			a=sin(x);
			cout<<"EL SENO DE "<<x<<" ES "<<a<<endl;
            c[i++].dato=a;
		    system("pause");
		}
		if(opc=='I'||opc=='i')
		{   system("cls");
			if(i==0)
			{
				cout<<"NO HAY ELEMENTOS ALMACENADOS"<<endl;
			
			}
			else
			{
				if(i>0)
				{   cout<<endl<<endl;
					for(int j=0;j<i;j++)
					{
						cout<<"| "<<c[j].dato;
					}
				}
			}
			cout<<endl<<endl;
			system("pause");
		}
		}while((opc!='x')&&(opc!='X'));
		
}
	


