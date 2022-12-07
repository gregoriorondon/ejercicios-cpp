#include <iostream.h>

#define FIL 100
#define COL 100

void matriz(int, int, int[][COL],int [][COL]);
void calculo(int, int, int[][COL],int [][COL], int[][COL]);

void main (void)
{
        int a1[FIL][COL], a2[FIL][COL], a3[FIL][COL],f,c;
        cout<<"Ingrese el numero de filas:";
		cin>>f;
        cout<<"Ingrese el numero de columnas:";
		cin>>c;
        
		matriz(f,c,a1,a2);
        calculo(f,c,a1,a2,a3);
}

void matriz(int c, int f, int a1[FIL][COL], int a2[FIL][COL])
{
	int i,j;
	cout<<endl<<"Elementos de la Matriz A:"<<endl;
    for(i=0; i<f; i++)
	{
		for(j=0; j<c; j++)
		{
			cout<<"Leer Elemento ["<<i<<";"<<j<<"]:";cin>>a1[i][j];
		}
	}
	for (i=0 ; i<f; i++)
	{
		for(j=0; j<c; j++)
		cout<<a1[i][j]<<" ";
		cout<<endl;
	}
	
	cout<<endl<<"Elementos de la Matriz B:"<<endl;
    for(i=0; i<f; i++)
	{
		for(j=0; j<c; j++)
		{
			cout<<"Leer Elemento ["<<i<<","<<j<<"]:";cin>>a2[i][j];
		}
	}
	
	for(i=0; i<f; i++)
	{
		for(j=0; j<c; j++)
        cout<<a2[i][j]<<"  ";
        cout<<endl;
	}
}

void calculo(int f, int c, int a1[FIL][COL], int a2 [FIL][COL],int a3[FIL][COL])
{
        int i,j;
        cout<<endl<<"Elementos de la Matriz C:"<<endl;
                for(i=0; i<f; i++)
				{
					for(j=0; j<c; j++)
					{
						a3[i][j]=a1[i][j]+a2[i][j];
                        cout<<"El elemento ["<<i<<";"<<j<<"];";
                        cout<<a3[i][j]<<endl;
					}
				}

				cout<<endl<<"La Matriz Resultante es:"<<endl;

				for(i=0; i<f; i++)
				{
					for(j=0; j<c; j++)
					cout<<a3[i][j]<<"    ";
					cout<<endl;
				}

				cin.get();cin.get();
}