#include <iostream.h>
void main()
{int matrizI[100][100], matriz[100][100], j, i, con, tc, tf, matrizII[100][100];
	
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
		{if (j==i)
			{
				matrizI[i][j]=1;
			}
			else
			{
				matrizI[i][j]=0;
			}
		}
	}

	for(i=1;i<=tf;i++)
	{
		for(j=1;j<=tc;j++)
		{
		cout<<endl<<"Introduzca un numero: ";
		cin>>matriz[i][j];
		}
	}
	for(int x=1;x<=tf;x++)
	{
		for(int y=1;y<=tc;y++)
		{
			for(int z=1;z<=tc;z++)
			{
				matrizII[x][y]=matriz[x][z]*matrizI[z][y];
			}
		}
	}

	cout<<"*****************"<<endl;
	cout<<endl<<"La matriz es: "<<endl;
	for(i=1;i<=tf;i++)
	{
		for(j=1;j<=tf;j++)
			{
			cout<<matriz[i][j]<<"\t";
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