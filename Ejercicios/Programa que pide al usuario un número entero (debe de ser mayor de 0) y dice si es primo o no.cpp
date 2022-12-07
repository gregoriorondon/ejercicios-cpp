
/*Programa que pide al usuario un número entero (debe de ser mayor de 0) y dice si es primo o no.

Un número primo es divisible únicamente por el mismo y por la unidad. Son: 2,3,5,7...*/


//--------------------------------------------------------------
//DESCRIPCIÓN: incluiremos las bibliotecas que necesitemos.
//--------------------------------------------------------------
#include <iostream> //para cin y cout(Ver apéndice D del curso.)
#include <cstdio>   //para system("pause") (Apéndice C).
using namespace std; 

//--------------------------------------------------------------
//NOMBRE FUNCIÓN: main()
//DESCRIPCIÓN: Al ejecutar el programa tomara el control.
//--------------------------------------------------------------
int main()
{
    int i,num,numDivisores=0;
    cout<<"Dame un numero: ";
    cin>>num;
    for(i=1;i<=num;i++) 
    {
        if(num%i==0)   //el operador % nos da el resto de la división.
        {              //veamos cuantos divisores tiene nuestro número.
            numDivisores=numDivisores+1;
        }
    }
    if(numDivisores==2) //si tiene 2 divisores(el mismo y la unidad).
    {
         cout<<num<<" es un numero primo."<<endl;
    }
    else   //si tiene mas divisores.
    {
         cout<<num<<" no es un numero primo."<<endl;
    }
    system("pause"); //pausa hasta que se pulse una tecla.
    return 0;
}