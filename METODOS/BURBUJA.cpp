/* BRICEÑO RIVERO LUIS ALEJANDRO
	C.I. 18.985.676*/
#include <iostream.h>
void main()
{
	int a[256], n, i, j, AUXi;
	cout<<"Metodo de la Burbuja"<<endl;
	cout<<"Inserte el tama\244o del vector: ";
	cin>>n;
	cout<<endl;			
	for(i=0;i<n;i++)
	{
		cout<<"Introduzca el "<<i+1<<" numero: ";
		cin>>a[i];
	}
	AUXi=0;
	for (i=0;i<n-1;i++)
	{
		for (j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				AUXi=a[j];
				a[j]=a[j+1];
				a[j+1]=AUXi;
			}
		}
	}
	cout<<endl<<"El vector ordenado es: ";
	for(i=0;i<n;i++)
	{
		cout<<" "<<a[i];
	}
cin.get();
cin.get();
}