#include<iostream.h>
#include<windows.h>
struct datos
{
	float dato;
};
datos d[100][100];
int i=0;
void insertar()
{
	cout<<"int numero:";
	cin>>d[i][i].dato;
	i++;
}
void mostrar()
{
	for(int j=0;j<i;j++)
	{
		for(j=0;j<i;j++)
		{
			cout<<" "<<d[j][j].dato<<endl;
		}
	}
	system("pause");
}
void media()
{
	float acum=0,m;
    for(int j=0;j<i;j++)
	{
		for(j=0;j<i;j++)
		{
			acum=acum+d[j][j].dato;
		}
	}
	m=acum/i;
	cout<<endl<<"MEDIA:"<<m<<endl;
	system("pause");
}
void buscar()
{
	float mayor;
	float menor;
	int pos_me;
	int pos_ma;
	mayor=d[0][0].dato;
	menor=d[0][0].dato;
    for(int j=0;j<i;j++)
	{
		for(j=0;j<i;j++)
		{
			if(d[j][j].dato>mayor)
			{
				mayor=d[j][j].dato;
				pos_ma=j+1;
			

			}
			if(d[j][j].dato<menor)
			{
				menor=d[j][j].dato;
				pos_me=j+1;
			}
		}
	}
	cout<<"POSICION MAYOR:"<<pos_ma<<endl;
	cout<<"POSICION MENOR:"<<pos_me<<endl;
	cout<<"ELEMENTO MAYOR:"<<mayor<<endl;
	cout<<"ELEMENTO MENOR:"<<menor<<endl;
	system("pause");
}
	


void main()
{   
	system("color 1f");
	char opc;

	while(opc!='x')
	{
		cout<<"1_Insertar"<<endl;
		cout<<"2_Mostrar"<<endl;
		cout<<"3_Calcular Media"<<endl;
		cout<<"4_Buscar Mayor y Menor"<<endl;
		cout<<"x_Salir";
		cin>>opc;
		if(opc=='1')
		{insertar();}
		if(opc=='2')
		{ mostrar();}
		if(opc=='3')
		{media();}
		if(opc=='4')
		{ buscar();}

	}
}