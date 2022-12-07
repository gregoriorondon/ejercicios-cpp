#include <iostream.h>
#include <math.h.h>

void main()
{int matrizI[100][100], j, i, con, tc, tf, matrizII[100][100];
	
	do
	{
	cout<<"Introduzca el tama\244o de las filas: ";
	cin>>tf;
	cout<<endl<<"Introduzca el tama\244o de las columnas: ";
	cin>>tc;
	if (tf==tc)
	{
	con=0;
	cout<<"----------------------------------------------------------------"<<endl;
	for(i=1;i<=tf;i++)
	{
		for(j=1;j<=tc;j++)
		{
		cout<<endl<<"Introduzca un numero: ";
		cin>>matrizI[i][j];
			if (j==i)
			{
				con=con+matrizI[i][j];
				matrizII[i][j]=matrizI[i][j]*1;
			}
			else
			{
				matrizII[i][j]=matrizI[i][j]*0;
			}
		}
	}
	cout<<"*****************"<<endl;
	cout<<endl<<"La matriz es: "<<endl;
	for(i=1;i<=tf;i++)
	{
		for(j=1;j<=tf;j++)
			{
			cout<<matrizI[i][j]<<"\t";
			}
		cout<<endl;
	}
	cout<<"********************"<<endl;
	cout<<endl<<"La matriz multipilicada por la matriz identidad es: "<<endl<<endl;
	for(i=1;i<=tf;i++)
	{
		for(j=1;j<=tf;j++)
			{
			cout<<matrizII[i][j]<<"\t";
			}
		cout<<endl;
	}
	cout<<"**********************"<<endl;
	cout<<endl<<"La suma de su diagonal principal es: "<<con<<endl;
	cout<<endl<<"Fin"<<endl;
	}
	else
	{
		cout<<endl<<"ERROR"<<endl;
		cout<<endl<<"La matriz debe ser cuadrada"<<endl<<endl;
	}
	}
	while (tf!=tc);


cin.get();
cin.get();
}