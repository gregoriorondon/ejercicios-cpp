/*dioscar briceño
c.i. 19.271.879*/
#include"iostream.h"
#include"process.h"
void main()
{
	system("color 0a");
	char resp;
	int a[256], i, AUX, z, n;
	bool b;
	cout<<"\t\t\t..:::Metodo de Insercion:::.. "<<endl;
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
		cout<<"("<<a[i]<<") ";
	}
	cout<<endl;
	cout<<"__________________________________"<<endl;
	cout<<"Desea hacerlo de nuevo s/n "<<endl;
	cin>>resp;
	if(resp=='s' || resp=='S')
	{
		goto a;
	}
	cin.get();
}