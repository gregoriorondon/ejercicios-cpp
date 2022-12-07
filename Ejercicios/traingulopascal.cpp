//utilizabndo combinaciones osea : m!/(m-n)!*n!
//disegned by cyberbyte mactsoft and damco groups corporations
//este program tiene un error no cumple para el grado=13
//toy trabajando en eso pero yaqueda como ejercico para uds jeje.
#include<iostream>
using namespace std;

int fac(int n);//calcula  el factorial
int com(int m,int n);//calcula la combinacion
void space(int s);//separa los numeros

int main()
{
    int g,s=30;//g=grado,s=total de espacios
    cout<<"Ingrese grado : ";
	cin>>g;
    for(int i=0;i<=g;i++)
	{//desde se comienza con las combinaciones este es el m
        space(s);//da los espacios requeridos
        for(int k=0;k<=i;k++)
		{//otra variable este es el n
                cout<<com(i,k)<<"  ";//cacula
        }
                cout<<endl;//salto de linea
                s--;//se reduce en uno los espacios
     }
    system("pause");
    return 0;
}
//factorial estienden esto no es necesario explicar
int fac(int n)
{
    int f=1;
    for(int i=1 ; i<=n; i++)
	{
            f=f*i;
	}
    return f;
}

//combinacion aqui es donde entra los for del main
//osea m!/(m-n)!*n!
int com(int m,int n)
{
    int com;
    com=fac(m)/(fac(m-n)*fac(n));
    return com;//retorna el valor de la combinacion
}

//espacios que se dan +0-
//para que aparesca centrado
//ya lo modifican para los valores de dos cifras
//para que paresca un triangulo jeje
void space(int s)
{
     for(int i=1;i<=s;i++)
	 {
             cout<<" ";
     }
     
}
