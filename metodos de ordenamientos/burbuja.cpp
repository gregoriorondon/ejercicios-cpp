/*dioscar briceño
c.i. 19.271.879*/
#include"iostream.h"
#include"process.h"
void main()
{
	system("color 0a");
	char resp;
	int x[256], n, i, j,y;
	cout<<"\t\t\t..:::Metodo de la Burbuja:::.. "<<endl;
a:
	cout<<endl;
	cout<<"Ingrese la dimension del vector ";
	cin>>n;
	cout<<endl;			
	for(i=0;i<n;i++)
	{
		cout<<"Introduzca el "<<i+1<<" numero: ";
		cin>>x[i];
	}
	y=0;
	for (i=0;i<n;i++)
	{
		for (j=0;j<n-1;j++)
		{
			if(x[j]>x[j+1])
			{
				y=x[j];
				x[j]=x[j+1];
				x[j+1]=y;
			}
		}
	}
	cout<<endl<<"Vector ordenado ";
	for(i=0;i<n;i++)
	{
		cout<<"("<<""<<x[i]<<") ";
	}
	cout<<endl;
	cout<<"____________________________________________"<<endl;
	cout<<"Desea ingresar los numeros de nuevo s/n "<<endl;
	cin>>resp;
	if(resp=='s' || resp=='S')
	{
		goto a;
	}
cin.get();
}