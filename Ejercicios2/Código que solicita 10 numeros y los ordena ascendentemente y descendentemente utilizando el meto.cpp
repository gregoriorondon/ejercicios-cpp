#include <iostream.h>

void mostrar_datos(int valores[]);

int main()
{
	int valores[10];
	int valor_temporal;
	int i, ii;
	int valor_suma=0;
	int valor_mayor=0;
	int valor_menor=9999999;
	for(i=0;i<10;i++)
	{
		cout << "Introduce el valor " << i << " : " ;
		cin >> valores[i];
		valor_suma+=valores[i];
		if(valor_mayor<valores[i])
		valor_mayor=valores[i];
		if(valor_menor>valores[i])
		valor_menor=valores[i];
	}
	
	cout << "\nLos valores introducidos son:\n ";
	mostrar_datos(valores); cout << endl;
	
	//ordenamos los valores ascendente
	for(i=0;i<10;i++)
	{
		for(ii=i+1;ii<10;ii++)
		{
			if(valores[i]>valores[ii])
			{
				valor_temporal=valores[ii];
				valores[ii]=valores[i];
				valores[i]=valor_temporal;
			}
		}
	}
	
	//mostramos los valores ordenador ascendentes
	cout << "\nLos valores ordenados ascendentemente son:\n ";

	mostrar_datos(valores);
	
	//ordenamos los valores descendente
	for(i=0;i<10;i++)
	{
		for(ii=i+1;ii<10;ii++)
		{
			if(valores[i]<valores[ii])
			{
				valor_temporal=valores[ii];
				valores[ii]=valores[i];
				valores[i]=valor_temporal;
			}
		}
	}
	
	//mostramos los valores ordenador descendente
	cout << "\nLos valores ordenados descendente son:\n ";

	mostrar_datos(valores);
 
	cout << "\n";
	cout << "\nLa suma total es : " << valor_suma;
	cout << "\nEl valor maximos es : " << valor_mayor;
	cout << "\nEl valor minimo es : " << valor_menor;
	cout << "\n\n";
	cin.get();cin.get();
}

void mostrar_datos(int valores[])
{
	int i;
	for(i=0;i<10;i++)
	{
		cout << valores[i];
		if(i!=11) cout << " - ";
	}
}
