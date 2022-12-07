/* BRICEÑO RIVERO LUIS ALEJANDRO
	C.I. 18.985.676*/
#include <iostream.h>
void main()
{
	int a[256], i, AUX, z, n;
	bool b;

	cout<<"Metodo de Insercion"<<endl;
	cout<<"Inserte el tama\244o del vector: ";
	cin>>n;
	cout<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"Introduzca el "<<i+1<<" numero: ";
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		AUX=a[i];
		z=i-1;
		b=false;
		while(b==false && z>=0)
		{
			if(AUX<a[z])
			{
				a[z+1]=a[z];
				z--;
			}
			else
			{
				b=true;
			}
			a[z+1]=AUX;
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