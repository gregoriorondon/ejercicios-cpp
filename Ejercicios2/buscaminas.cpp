#include<iostream.h>
#include<windows.h>
#include<process.h>

/*  0=NO HAY MINA Y EL USUARIO NO LA HA SELECCIONADO
	1=HAY MINA Y EL USUARIO NO LA HA SELECCIONADO
	2=NO HAY MINA Y EL USUARIO LA HA SELECCIONADO
	3=HAY MINA Y EL USUARIO LA HA SELECCIONADO
*/

int M[5][5]={0,0};
int error=0,acierto=0;


void Iniciar()
{
	int X,cont=0;

	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			X=rand()%2;
			if(X==1)
				cont++;
			if((X>1)||(cont>10)) 
				//X=0;
			M[i][j]=X;
		}
	}
}

void Mostrar()
{
	system("cls");
	cout<<"\n\t\t\t\t******************";
	cout<<"\n\t\t\t\t*** BUSCAMINAS ***";
	cout<<"\n\t\t\t\t******************";
	cout<<"\n\n\t\t\tERRORES="<<error<<"\t\tACIERTOS="<<acierto<<"\n";
	for(int i=0;i<5;i++)
	{
		cout<<"\n\n";
		for(int j=0;j<5;j++)
		{
			if((M[i][j]==0)||(M[i][j]==1))
				cout<<"  #";
			if(M[i][j]==2)
				cout<<"  -";
			if(M[i][j]==3)
				cout<<"  X";

		}
	}
}
void Pedir()
{
	int f,c,ban=0;
	
	do{
	Iniciar();
		if(ban==1)
		{
			Mostrar();
			cout<<"\n\nPosision Invalidad.... Intentelo de nuevo";
		}

		cout<<"\n\n\t\tQue Posicion de la casilla de la Fila (0-4)?: ";
		cin>>f;
		cout<<"\n\n\t\tQue Posicion de la casilla de la Columna (0-4)?: ";
		cin>>c;
		ban=1;

		if((M[f][c]==2)||(M[f][c]==3))

			cout<<"\n\nNo hay cambios!!... Esta casilla ya fue Introducida";
			cin.get();

	}while((f<0)||(f>4)||(c<0)||(c>4));

	if(M[f][c]==1)
	{
		error++;
		M[f][c]=3;
	}
	if(M[f][c]==0)
	{
		acierto++;
		M[f][c]=2;
	}
}
void main(void)

{
	
	system("color f1");
	char res='s';
	do
	{
	
		do
		{	Iniciar();
			Mostrar();
			Pedir();

		}while((error<1)&&(acierto<15));

		if(acierto>15)
		
			cout<<"\n\n\t\t\tGanastes!!!!....";

		
		else
		{
			cout<<"\n\n\t\t\tPerdistes!!!!....";
			Iniciar();
		}
			cout<<endl<<"Desea jugar de nuevo:";
			cin>>res;
	}while(res=='s');

	cin.get();
	cin.get();
}