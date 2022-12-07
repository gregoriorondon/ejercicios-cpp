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




void main()
{  
	system("color 1f");
	int i=0;
	double vector[100];
    char opc;
	float x,y,C,F;
    int a;

	do
	{   system("cls");
		cout<<endl<<"1_Suma";
		cout<<endl<<"2_Resta";
		cout<<endl<<"3_Multiplicacion";
		cout<<endl<<"4_Division";
		cout<<endl<<"5_Valor Absoluto";
		cout<<endl<<"6_Arco Coseno";
		cout<<endl<<"7_Arco Seno";
		cout<<endl<<"8_Tangente";
		cout<<endl<<"9_Raiz Cuadrada";
		cout<<endl<<"A_Elevado al Cuadrado";
		cout<<endl<<"B_Factorial !";
		cout<<endl<<"C_Conversion de Farenheit a Celsius";
		cout<<endl<<"D_Logaritmo Natural";
		cout<<endl<<"E_Logaritmo Base 10";
		cout<<endl<<"F_Arco Tangente";
		cout<<endl<<"G_Coseno";
		cout<<endl<<"H_Seno";
		cout<<endl<<"I_MOSTRAR ELEMENTOS ALMACENADOS";
		cout<<endl<<"X_SALIR";
		cin>>opc;
		if(opc=='1')
		{   system("cls");
		    
			cout<<"int x:";
			cin>>x;
			cout<<"int y:";
			cin>>y;
			float p=suma(x,y);
		
			c[i++].dato=p;
			cout<<"SUMA = "<<p<<endl;
			system("pause");
			
		}
        if(opc=='2')
		{   
			system("cls");
		
			cout<<"int x:";
			cin>>x;
			cout<<"int y:";
			cin>>y;
			float p=resta(x,y);
			cout<<"RESTA = "<<p<<endl;
			c[i++].dato=p;
			system("pause");
			
		}
        if(opc=='3')
		{   system("cls");
		    
			cout<<"int x:";
			cin>>x;
			cout<<"int y:";
			cin>>y;
			float p=multiplicacion(x,y);
			cout<<"MULTIPLICACION = "<<p<<endl;
			c[i++].dato=p;
			system("pause");
			
		}
        if(opc=='4')
		{  
			system("cls");
			cout<<"int x:";
			cin>>x;
			cout<<"int y:";
			cin>>y;
			float p=division(x,y);
			cout<<"Div = "<<p<<endl;
            c[i++].dato=p;
			system("pause");
			
		}
		if(opc=='5')
		{   system("cls");
			cout<<"int n:";
			cin>>x;
			float m=fabs(x);
			cout<<"El VALOR ABSOLUTO DE "<<x<<" ES "<<m<<endl;
            c[i++].dato=m;
		
			system("pause");
		}
		if(opc=='6')
		{   
			system("cls");
			
			cout<<"int n:";
			cin>>x;
			if((x>-1)&&(x<1))
			{
			 float a=acos(x);
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
			cout<<"int n:";
			cin>>x;
			if((x>-1)&&(x<1))
			{
			 float a=asin(x);
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
			float a;
            system("cls");
			cout<<"INT X:";
			cin>>x;
			a=tan(x);
			cout<<"LA TANGENTE DE  "<<x<<" ES "<<a<<endl;
            c[i++].dato=a;
		    system("pause");
		}
		if(opc=='9')
		{   
			float a;
            system("cls");
			cout<<"INT X:";
			cin>>x;
			a=sqrt(x);
			cout<<"LA RAIZ CUADRADA DE  "<<x<<" ES "<<a<<endl;
            c[i++].dato=a;
		    system("pause");
		}
		if(opc=='A'||opc=='a')
		{
			float a;
            system("cls");
			cout<<"INT X:";
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
			cout<<"INT X:";
			cin>>x;
			int f=factorial(x);
			cout<<"EL FACTORIAL DE  "<<x<<" ES "<<f<<endl;
		    c[i++].dato=f;
			system("pause");
		}
		if(opc=='C'||opc=='c')
		{
			double a;
			system("cls");
			cout<<"INT UN NUMERO EN GRADOS FAHRENHEIT: ";
			cin>>C;
			C=(F-32)*5/9;
			cout<<"LA CONVERSION DE  "<<C<<" ES "<<a<<" GRADOS CELSIUS "<<endl;
			system("pause");
		}
        if(opc=='D'||opc=='d')
		{	
			float a;
            system("cls");
			cout<<"INT X:";
			cin>>x;
			a=log(x);
			cout<<"EL LOGARITMO DE NATURAL DE "<<x<<" ES "<<a<<endl;
            c[i++].dato=a;
		    system("pause");
		
		}
        if(opc=='E'||opc=='e')
		{	
			float a;
            system("cls");
			cout<<"INT X:";
			cin>>x;
			a=log10(x);
			cout<<"EL LOGARITMO BASE 10 DE "<<x<<" ES "<<a<<endl;
            c[i++].dato=a;
		    system("pause");
		
		}
		if(opc=='F'||opc=='f')
		{
			float a;
            system("cls");
			cout<<"INT X:";
			cin>>x;
			a=atan(x);
			cout<<"EL VALOR ARCOTANGENTE DE "<<x<<" ES "<<a<<endl;
            c[i++].dato=a;
		    system("pause");
		}
		if(opc=='G'||opc=='g')
		{   
			float a;
            system("cls");
	        cout<<"INT X:";
			cin>>x;
			a=cos(x);
			cout<<"EL COSENO DE "<<x<<" ES "<<a<<endl;
            c[i++].dato=a;
		    system("pause");
		}
		if(opc=='H'||opc=='h')
		{   
			float a;
            system("cls");
			cout<<"INT X:";
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
	


