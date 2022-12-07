#include<iostream.h>
#include<process.h>
void main()
{
	
	char opc, cand;
	int numcanda=0, numcandb=0, numvn=0;
	
while (opc!=3)
{
b:
system("cls");
	cout<<"1.- Desea votar?"<<endl;
	cout<<"2.- Desea imprimir los votos?"<<endl;
	cout<<"3.- Desea salir?"<<endl;
	cout<<"Introduzca su opcion"<<endl;
	cin>>opc;

	switch (opc)
	{
	case '1':
		system("cls");
		cout<<"Por quien desea votar?"<<endl;
		cout<<"\t****A****"<<endl;
		cout<<"\t****B****"<<endl;
		cin>>cand;
		
		if ((cand=='a')||(cand=='A'))
		{
			numcanda=numcanda+1;
		}
		if ((cand=='b')||(cand=='B'))
		{
			numcandb=numcandb+1;
		}
		if (((cand!='a')&&(cand!='A'))&&((cand!='b')&&(cand!='B')))
		{
			cout<<"***VOTO NULO***"<<endl;
			numvn=numvn+1;
		}
		goto b;
	
	case '2':
		system("cls");
		
		cout<<"El candidato A obtuvo "<<numcanda<<endl;
		cout<<"El candidato B obtuvo "<<numcandb<<endl;
		cout<<"El numero de votos nulos es de "<<numvn<<endl;
		if (numcanda>numcandb)
		{
			cout<<"el ganador es el candidato:...... A con "<<numcanda<<" votos"<<endl;
		}
		if (numcanda<numcandb)
		{
			cout<<"el ganador es el candidato:...... B con "<<numcandb<<" votos"<<endl;
		}
		if (numcanda==numcandb)
		{
			cout<<"Hay un empate"<<endl;
		}
		system("pause");
		
	break;
	
	case '3':
		cout<<"****ADIOS****"<<endl;
		goto a;
	break;
	}
}
a:;
cin.get();
}


