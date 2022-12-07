#include<iostream.h>
#include<windows.h>
struct reg
{
	int x;
	char candidato;
};
reg a[5];
reg b[5];
reg c[5];
reg d[5];
void votos(int a,int b,int c,int d);
void ganador();
void imprimir();
int acum_a=0,acum_b=0,acum_c=0,acum_d=0;
float sumador=0;
float pa,pb,pc,pd;

void llenar_tabla()
{  

	a[0].x=194;
	a[1].x=180;
	a[2].x=221;
	a[3].x=432;
	a[4].x=820;
	for(int k=0;k<5;k++)
	{
		acum_a=acum_a+a[k].x;
	}

	b[0].x=48;
	b[1].x=20;
	b[2].x=90;
	b[3].x=50;
	b[4].x=61;
	for(k=0;k<5;k++)
	{
		acum_b=acum_b+b[k].x;
	}



	c[0].x=20;
	c[1].x=320;
	c[2].x=140;
	c[3].x=821;
	c[4].x=946;
	for(k=0;k<5;k++)
	{
		acum_c=acum_c+c[k].x;
	}


	d[0].x=45;
	d[1].x=16;
	d[2].x=20;
	d[3].x=14;
	d[4].x=18;
	for(k=0;k<5;k++)
	{
		acum_d=acum_d+d[k].x;
	}
    imprimir();
	system("cls");
	votos(acum_a,acum_b,acum_c,acum_d);




}
void imprimir()
{   system("cls");
	cout<<endl<<"DISTRITO"<<" "<<"CANDIDATO"<<" "<<"CANDIDATO"<<" "<<"CANDIDATO"<<" "<<"CANDIDATO"<<endl;
    cout<<"             A"<<"         B"<<"         C"<<"         D"<<endl<<endl;
	for(int j=0;j<5;j++)
	{   
		cout<<"   "<<j+1<<"        "<<a[j].x<<"       "<<b[j].x<<"        "<<c[j].x<<"      "<<d[j].x<<endl;
	}
    system("pause");
}
void votos(int a,int b,int c,int d)
{	
	
	float mayor;

	sumador=(a+b+c+d);
	pa=(a*100)/sumador;
	pb=(b*100)/sumador;
	pc=(c*100)/sumador;
	pd=(d*100)/sumador;






	cout<<endl<<endl<<"                 ESCRUTINIO"<<endl<<endl;
	cout<<"    TOTAL VOTOS CANDIDATO A :"<<a<<"  "<<"% ="<<pa<<endl<<endl;
	cout<<"    TOTAL VOTOS CANDIDATO B :"<<b<<"  "<<"% ="<<pb<<endl<<endl;
	cout<<"    TOTAL VOTOS CANDIDATO C :"<<c<<"  "<<"% ="<<pc<<endl<<endl;
	cout<<"    TOTAL VOTOS CANDIDATO D :"<<d<<"  "<<"% ="<<pd<<endl<<endl<<endl;
	if((a>b)&&(a>c)&&(a>d))
	{   
		cout<<"EL CANDIDATO MAS VOTADO FUE - A - con "<<a<<" VOTOS"<<endl;


	}
	else
	{
		if((b>a)&&(b>c)&&(b>d))
		{	
			cout<<"EL CANDIDATO MAS VOTADO FUE - B - con "<<b<<" VOTOS"<<endl;
			
		}
		else
		{
			if((c>a)&&(c>b)&&(c>d))
			{
	          
				cout<<"      EL CANDIDATO MAS VOTADO FUE - C - con "<<c<<" VOTOS"<<endl;
			
			}
			else
			{
				if((d>a)&&(d>b)&&(d>c))
				{
						
					cout<<"EL CANDIDATO MAS VOTADO FUE - D - con "<<d<<" VOTOS"<<endl;
				}
			}
		}
	}
	ganador();
}
void ganador()
{
	float vector[5];
	char cad[5];
	int band=-1;
	bool x=true;
	int aux;
	char au;

	for(int i=0;i<5;i++)
	{
		vector[0]=pa;
		cad[0]='A';
		vector[1]=pb;
		cad[1]='B';
		vector[2]=pc;
		cad[2]='C';
		vector[3]=pd;
		cad[3]='D';
	}
	for(i=0;i<5;i++)
	{
		if(vector[i]>50.0)
		{
			band=i;
			
		}
	}
	if(band!=-1)
	{
		cout<<endl<<"OFICIALMENTE EL CANDIDATO "<<cad[band]<<" HA GANADO LAS ELECCIONES CON UN % DE "<<vector[band]<<endl<<endl;
		system("pause");
	}
	else
	{
		while(x==true)
		{
			x=false;

			for(int j=0;j<i-1;j++)
			{
				if(vector[j]<vector[j+1])
				{
					aux=vector[j];
					vector[j]=vector[j+1];
					vector[j+1]=aux;
					au=cad[j];
					cad[j]=cad[j+1];
					cad[j+1]=au;
					x=true;
				}
			}
		}
		cout<<"ACCEDEN A 2DA RONDA:"<<endl<<endl;
		cout<<"1->CANDIDATO "<<cad[0]<<endl;
		cout<<"2->CANDIDATO "<<cad[1];
	}


	
}

void main()
{  
	system("color 1f.");
	char opc;
	while((opc!='x')&&(opc!='X'))
	{   
		system("cls");
		cout<<endl<<"1 ->MOSTRAR TABLA y ESCRUTINIOS"<<endl<<endl;
		cout<<"x ->SALIR";
		cin>>opc;
		if(opc=='1')
		{ 
		 llenar_tabla();
		}

	}
}
   



	