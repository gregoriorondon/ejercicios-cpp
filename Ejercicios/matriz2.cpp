#include<iostream.h>
#include<stdlib.h>
int matriz[3][3];
int i,j,c=0;
int acum=0;
float m;
void llenar()
{   cout<<"*INGRESE LOS DATOS ENTEROS PARA LLENAR LA MATRIZ*"<<endl<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{   c++;
			cout<<"POS["<<i+1<<"]["<<j+1<<"]:";
			cin>>matriz[i][j];
			
		}
	}
}
void media()
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			acum=acum+matriz[i][j];
		}
	}
    m=acum/c;

}
void imprimir()
{   cout<<"  *MATRIZ*"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<" "<<"["<<matriz[i][j]<<"]";
		}
		
		cout<<endl;
	}
}

void buscar()
{
	int mayor;
	int menor;
	int x=0,a=0;
	int y=0,b=0;
	mayor=matriz[0][0];
	menor=matriz[0][0];
    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(matriz[i][j]>mayor)
			{
				mayor=matriz[i][j];
				x=i+1;
				y=j+1;

			
				
			}
			if(matriz[i][j]<menor)
			{
				menor=matriz[i][j];
				a=i+1;
				b=j+1;
			
			}
		}
	}
	cout<<endl<<"EL TOTAL ACUMULADO EN LA MATRIZ ES:"<<acum<<endl<<endl;
	cout<<"EL ELEMENTO MAYOR ES:"<<mayor<<" Y ESTA EN LA POSICION:["<<x<<"]["<<y<<"]"<<endl<<endl;
    cout<<"EL ELEMENTO MENOR ES:"<<menor<<" Y ESTA EN LA POSICION:["<<a<<"]["<<b<<"]"<<endl<<endl;
	cout<<"LA MEDIA DE LA MATRIZ ES:"<<m;
}





void main()
{
	system("color 1f");
	llenar();
	system("cls");
	media();
	cout<<endl<<endl;
	imprimir();
	buscar();
	cin.get();
	cin.get();
}