/*dioscar briceño
c.i. 19.271.879*/
#include"iostream.h"
#include"process.h"
void main()
{
	system("color 0a");
	char resp;
	int a[256], n, AUX, i, x, z, min;
	cout<<"\t\t\t..:::Metodo de Seleccion:::.."<<endl;
a:
	cout<<endl;
	cout<<"Ingrese la dimension del vector ";
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
		cout<<"("<<a[i]<<") ";
	}
	cout<<endl;
	cout<<"_________________________________"<<endl;
	cout<<"Desea inciar de nuevo s/n "<<endl;
	cin>>resp;
	if(resp=='s' || resp=='S')
	{
		goto a;
	}
cin.get();
}