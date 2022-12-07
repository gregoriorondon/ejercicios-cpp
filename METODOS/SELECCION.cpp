/* BRICEÑO RIVERO LUIS ALEJANDRO
	C.I. 18.985.676*/
#include <iostream.h>
void main()
{
	int a[256], n, AUX, i, x, z, min;

	cout<<"Metodo de Seleccion"<<endl;
	cout<<"Inserte el tama\244o del vector: ";
	cin>>n;
	cout<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"Introduzca el "<<i+1<<" numero: ";
		cin>>a[i];
	}
	x=0;
	while(x<n)
	{
		min=x;
		z=x+1;
		while(z<n)
		{
			if(a[z]<a[x])
			{
				min=z;
				AUX=a[x];
				a[x]=a[min];
				a[min]=AUX;
			}
			z=z+1;
		}
		x=x+1;
	}
	cout<<endl<<"El vector ordenado es: ";
	for(i=0;i<n;i++)
	{
		cout<<" "<<a[i];
	}
cin.get();
cin.get();
}