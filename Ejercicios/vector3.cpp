#include <iostream.h>
void main()
{float con, cont, ma, mb;
 int n, i, vectora[100], vectorb[100], emga,  emgb; 
 
	cout<<"Introducir el tama\244o del vector A y el B: ";
	cin>>n;
	
	
	//vector A
	cont=0;
	emga=0;               
	for (i=1;i<=n;i++)
	{
		cout<<"Introducir el "<<i<<" numero del vector A: ";
		cin>>vectora[i];
		cont=cont+vectora[i];
		if (vectora[i]>emga)
		{
			emga=vectora[i];
		}
	}
	ma=cont/n;
	cout<<"***********************"<<endl;
	
	
	//vector B
	con=0;
	emgb=0;
	for (i=1;i<=n;i++)
	{
		cout<<"Introducir el "<<i<<" numero del vector B: ";
		cin>>vectorb[i];
		con=con+vectorb[i];
		if (vectorb[i]>emgb)
		{
			emgb=vectorb[i];
		}
	}
	mb=con/n;
		cout<<"************************"<<endl;
	
		
		//impresion
	for (i=1;i<=n;i++)
	{
		cout<<endl<<vectora[i]<<" + "<<vectorb[i]<<" = "<<vectora[i]+vectorb[i]<<endl;
	}
	cout<<endl<<"El elemento mayor del vector A es: "<<emga<<endl;
	cout<<"El elemento mayor del vector B es: "<<emgb<<endl;
	cout<<endl<<"La media del vector A es: "<<ma<<endl;
	cout<<"La media del vector B es: "<<mb<<endl;
	cout<<endl<<"La suma de todos los elementos del vector A es: "<<cont<<endl;
	cout<<"La suma de todos los elementos del vector B es: "<<con<<endl;
	
cin.get();
cin.get();
}