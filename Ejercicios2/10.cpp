/*Hacer un algoritmo que llene una triz 20*20. Sumar las columnas e 
imprimir que columna tuvo la maxima suma y la suma de esa columna.*/
#include <iostream.h>

#define n 20

void suma();

float mat[n][n];

void main()
{
	
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"Introducir un numero: ";
			cin>>mat[i][j];
		}
	}
	suma();

cin.get();
cin.get();
}

void suma()
{
	int i,j,pc;
	float sum,may=0;
	cout<<"Matriz Insertada:"<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=0;j<n;j++)
		{
			sum+=mat[j][i];
		}
		if(sum>may)
		{
			may=sum;
			pc=i;
		}
	}
	cout<<"La mayor suma: "<<may<<endl;
	cout<<"La columna: "<<pc<<endl;

}
