#include<iostream.h>
#include<math.h>
#include<string.h>
#include<windows.h>

void CS();
void CTE();
void CTR();
void Suma();
void Resta();
void Multi();
void Divi();
void Raiz();
void Exp2();
void Exp3();
void Expn();



void main()
{
	system("color 1f");
	int op;
	cout<<"            ************CALCULADORA*************\n";
	cout<<"            |      1.Calculadora sencilla      |\n";
	cout<<"            |   2.Converciones de tempratura   |\n";
	cout<<"            |   3.Calculdora Trigonometrico    |\n";
	cout<<"            |            4.Salir               |\n";
	cout<<"            |    Ingrese la opccion            |\n";
	cout<<"            ************************************\n";
	cout<<"                       Francisco   Perdomo         \n";     
	cin>>op;

	if(op==1)
	{
		CS();
	}
	if(op==2)
	{
		CTE();
	}
	if(op==3)
	{
		CTR();
	}
	if(op==4)
	{
	}

}

void CS()
{
	int op;

	cout<<"\nQue sesea realizar";
	cout<<"\n1.Sumar";
	cout<<"\n2.Resta";
	cout<<"\n3.Multiplicacion";
	cout<<"\n4.Division";
	cout<<"\n5.Raiz Cuadrada";
	cout<<"\n6.Exponencial al cuadrado";
	cout<<"\n7.Exponencial al Cubo";
	cout<<"\n8.Enponencial a la n";
	cout<<"\n9.Salir";
	cin>>op;

	if(op==1)
		Suma();
	if(op==2)
		Resta();
	if(op==3)
		Multi();
	if(op==4)
		Divi();
	if(op==5)
		Raiz();
	if(op==6)
		Exp2();
	if(op==7)
		Exp3();
	if(op==8)
		Expn();
	if(op==9)
	{
	}
}
void Suma()
{
	double x,y,s;
	cout<<"\nIngresar el 1er numero";
	cin>>x;
	cout<<"\nIngresar el 2do numero";
	cin>>y;
    
	s=x+y;
	cout<<"\nLA suma de los numeros es= "<<s;
	cin.get();
	cin.get();
}

void Resta()
{
	double x,y,r;
	cout<<"\nIngresar el 1er numero";
	cin>>x;
	cout<<"\nIngresar el 2do numero";
	cin>>y;
    
	r=x-y;
	cout<<"\nLA Resta de los numeros es= "<<r;
	cin.get();
	cin.get();
}

void Multi()
{
	float x,y,m;
	cout<<"\nIngresar el 1er numero";
	cin>>x;
	cout<<"\nIngresar el 2do numero";
	cin>>y;

    
	m=x*y;
	cout<<"\nLA multipliccion de los numeros es= "<<m;
	cin.get();
	cin.get();
}
void Divi()
{
	double x,y,d;
	cout<<"\nIngresar el 1er numero";
	cin>>x;
	cout<<"\nIngresar el 2do numero";
	cin>>y;
    
	d=x/y;
	cout<<"\nLA suma de los numeros es= "<<d;
	cin.get();
	cin.get();
}
void Raiz()
{
	int x;
	double r;
	cout<<"\nIngresar el 1er numero";
	cin>>x;

	r=sqrt(x);
	cout<<"\nLA raiz del numeros es= "<<r;
	cin.get();
	cin.get();
}

void Exp2()
{
	double x,r;
	cout<<"\nIngresar el 1er numero";
	cin>>x;
    
	r=pow(x,2);
	cout<<"\nEL exponecial a la 2 es= "<<r;
	cin.get();
	cin.get();
}
void Exp3()
{
	double x,r;
	cout<<"\nIngresar el 1er numero";
	cin>>x;
    
	r=pow(x,3);
	cout<<"\nEl exponecial a la 3 es= "<<r;
	cin.get();
	cin.get();
}
void Expn()
{
	double x,n,r;
	cout<<"\nIngresar el numero";
	cin>>x;
	cout<<"\nIngresar el numero al que desea elevar";
	cin>>n;
    
	r=pow(x,n);
	cout<<"\nEl exponecial a la n es= "<<r;
	cin.get();
	cin.get();
}


void CTE()
{
	
	int op;
	double  k,f,c;

	cout<<"Que desea combercion desea realizar";
	cout<<"\n1.Kelvin a Celcius";
	cout<<"\n2.Celcius a Kelvin";
	cout<<"\n3.Kelvin a Faranheit";
	cout<<"\n4.Faranheit a Kelvin";
	cout<<"\n5.Faranheit a Celsius";
	cout<<"\n6.Celsius a Faranheit";
	cout<<"\n7.Salir";
	cin>>op;

	if(op==1)
	{
		cout<<"introdusca el grado";
		cin>>k;
		c=k-273;
		cout<<"La coverciones es="<<c;
		cin.get();
		cin.get();
	}
	if(op==2)
	{ 	cout<<"introdusca el grado";
		cin>>c;
		k=c+273;
		cout<<"La coverciones es="<<k;
		cin.get();
		cin.get();
	}
	if(op==3)
	{
		cout<<"introdusca el grado";
		cin>>k;
		f=((k * 9)/5)-459.67; 
		cout<<"La coverciones es="<<f;
		cin.get();
		cin.get();
	}
	if(op==4)
	{
		cout<<"introdusca el grado";
		cin>>f;
		k=((f+459.67)*5)/9;
		cout<<"La coverciones es="<<k;
		cin.get();
		cin.get();
	}

	if(op==5)
	{
		cout<<"introdusca el grado";
		cin>>f;
		c=((f-32)*5)/9; 
		cout<<"La coverciones es="<<c;
		cin.get();
		cin.get();
	}
	if(op==6)
	{
		cout<<"introdusca el grado";
		cin>>c;
		f=((c*9)/5)+32;
		cout<<"La coverciones es="<<f;
		cin.get();
		cin.get();
	}


}

void CTR()
{
	int op;
	double r,x;
	cout<<"\nQue proceso desa realizar";
	cout<<"\n1.Hallar el seno";
	cout<<"\n2.Hallar el coseno";
	cout<<"\n3.Hallar el Tangente";
	cout<<"\n4.Hallar el Arcoseno";
	cout<<"\n5.Hallar el Arco coseno";
	cout<<"\n6.Hallar el Arco tangente";
	cout<<"\n7.Volumen del Cubo";
	cout<<"\n8.salir";
	cin>>op;

	if(op==1)
	{
		cout<<"\nIngrese el numero: ";
		cin>>x;

		r=sin(x);

		cout<<"\nEl seno del numero es= "<<r;
		cin.get();
		cin.get();
	}
	if(op==2)
	{
		cout<<"\nIngrese el numero: ";
		cin>>x;

		r=cos(x);

		cout<<"\nEl coseno del numero es= "<<r;
		cin.get();
		cin.get();
	}
	if(op==3)
	{
		cout<<"\nIngrese el numero: ";
		cin>>x;

		r=tan(x);

		cout<<"\nla tangente del numero es= "<<r;
		cin.get();
		cin.get();
	}
	if(op==4)
	{
		cout<<"\nIngrese el numero: ";
		cin>>x;

		r=asin(x);

		cout<<"El arcoseno del numero es= "<<r;
		cin.get();
		cin.get();
	}
	if(op==5)
	{
		cout<<"\nIngrese el numero: ";
		cin>>x;

		r=asin(x);

		cout<<"El arcoseno del numero es= "<<r;
		cin.get();
		cin.get();
	}
	if(op==6)
	{
		cout<<"\nIngrese el numero: ";
		cin>>x;

		r=atan(x);

		cout<<"El Arcotangente del numero es= "<<r;
		cin.get();
		cin.get();
	}
	if(op==7)
	{
		cout<<"\nIngrese el numero: ";
		cin>>x;

		r=x*3;

		cout<<"El area del cubo es= "<<r;
		cin.get();
		cin.get();
	}

	cin.get();
	cin.get();




}