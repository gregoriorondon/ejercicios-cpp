#include<iostream.h>

#define nfilas 4
#define ncolumnas 4

void main()
{

int matriz[nfilas][ncolumnas];
int i=0,j=0,k=0;


for(i=0;i<nfilas;i++) //Ingresar Datos a la matriz por desde 0 hasta ncolumnas-1 
{ 
cout<<" Ingrese las filas "<<endl; 
for(j=0;j<ncolumnas;j++)
{
cin>>matriz[i][j];
}
}


cout<<"La Espiral en la matriz es: "<<endl;

i=0;
k=0; //Variable Auxiliar k que controla el ciclo


do
{
//primer Recorrido de izquierda a derecha

for(j=k; j<ncolumnas-k-1; j++) 
{
cout<<matriz[i][j]<<endl;
}

//Segundo Recorrido de arriba hacia abajo

for(i=k; i<nfilas-k-1; i++) 
{
cout<<matriz[i][j]<<endl;
}
//Tercer Recorrido de derecha a izquierda

for(j=ncolumnas-k-1; j>=k+1; j--)
{
cout<<matriz[i][j]<<endl;
}

//Cuarto recorrido de abajo hacia 

for(i=nfilas-k-1; i>=k+1; i--) 
{
cout<<matriz[i][j]<<endl;
}
k++;


}
while(k!=0); //Mientras k!=0 repita los 4 recorridos hasta recorrer toda la matriz

}