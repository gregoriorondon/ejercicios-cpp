# include <iostream.h>
# include <math.h>

	void suma ();
	void resta ();
	void multiplicacion ();
	void division ();
	void raiz ();
	void cuadrado ();

void main ()

{
int opc;
cout<<"Menu Principal"<<endl;
cout<<"1.suma"<<endl;
cout<<"2.resta"<<endl;
cout<<"3.multiplicacion"<<endl;
cout<<"4.division"<<endl;
cout<<"5.raiz"<<endl;
cout<<"6.cuadrado"<<endl;
cout<<"introduzca su opcion"<<endl;
cin>> opc;

if (opc == 1)
	
	suma();
if (opc == 2)

	resta ();

if (opc == 3)

	multiplicacion ();

if (opc == 4)
	
	division ();

if (opc == 5)

	raiz ();

if (opc == 6)

	cuadrado ();
}

void suma ()
{
	int x,y,resp; 

cout<< " introduzca valor 1";
cin>> x;
cout<<"introduzaca el valor 2";
cin>> y;
resp= x + y;
cout<<" el resultado es:"<<resp;
cin.get ();
cin.get ();
}

void raiz ()

{ 
	int x;
	float resp;

cout<<"introduzca el valor";
cin>> x; 
resp = sqrt (x);
cout<<" la respuesta es:"<<resp;
cin.get ();
cin.get ();
}
 
								
void cuadrado ()

{ 
	int x;
	int resp;

cout<<"introduzca el valor";
cin>> x; 
resp= pow (x,2);
cout<<"la respuesta es:"<<resp;
cin.get ();
cin.get ();
}

void multiplicacion ()

									
{
	int x,y,resp; 

cout<< " introduzca valor 1";
cin>> x;
cout<<"introduzaca el valor 2";
cin>> y;
resp= x * y;
cout<<" el resultado es:"<<resp;
cin.get ();
cin.get ();
}

void division ()

									
{
	int x,y,resp; 

cout<< " introduzca valor 1";
cin>> x;
cout<<"introduzaca el valor 2";
cin>> y;
resp= x / y;
cout<<" el resultado es:"<<resp;
cin.get ();
cin.get ();
}

void resta ()
{
	int x,y,resp; 

cout<< " introduzca valor 1";
cin>> x;
cout<<"introduzaca el valor 2";
cin>> y;
resp= x - y;
cout<<" el resultado es:"<<resp;
cin.get ();
cin.get ();
}
