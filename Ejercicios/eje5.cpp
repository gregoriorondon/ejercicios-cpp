#include <iostream.h>
#include <string.h>

struct pila{
	char c;//signo
	int n;//numero
	int tipo;//1: signo 2:numero
};
void crear(int *cima)
{
	(*cima)=0;
}
void Insertar(int *cima,pila c,pila *P)
{
	P[(*cima)]=c;
	(*cima)++;
}
int Numero(char N)
{
	if(N=='1') return(1);
	if(N=='2') return(2);
	if(N=='3') return(3);
	if(N=='4') return(4);
	if(N=='5') return(5);
	if(N=='6') return(6);
	if(N=='7') return(7);
	if(N=='8') return(8);
	if(N=='9') return(9);
	if(N=='0') return(0);
}

int Tranforma(pila *A,int *a,char exp[])
{
	int i,k=0,j,num,unidad,vez=0;
	char aux[255];
	pila nuevo;

	for(i=0;i<strlen(exp);i++)
	{
		k=0;
		while((exp[i]!=' ')&&(i<(strlen(exp)))&&(exp[i]!='+')&&(exp[i]!='-')&&(exp[i]!='*')&&(exp[i]!='/'))
		{
			if((exp[i]=='1')||(exp[i]=='2')||(exp[i]=='3')||(exp[i]=='4')||(exp[i]=='5')||(exp[i]=='6')||(exp[i]=='7')||(exp[i]=='8')||(exp[i]=='9')||(exp[i]=='0'))
			{
				aux[k]=exp[i];
				k++;
			}
			else
			{
				cout<<endl<<"La expresión "<<exp[i]<<" no es valida se cancela la operacion...";
				cin.get();
				return(-1);
			}
			i++;
		}
		if(vez<3)
		{
			if(k>0)
			{
            if((vez==0)||(vez==1))
				{
					unidad=1;
					num=0;
					aux[k]='\0';//truncar la cadena para que no embasure
					for(j=strlen(aux)-1;j>=0;j--)
					{
						num+=Numero(aux[j])*unidad;
						unidad*=10;
					}
					nuevo.n=num;
					//nuevo.c='';
					nuevo.tipo=1;
					Insertar(&(*a),nuevo,&(*A));
					vez++;
				}
				else
				{
					cout<<endl<<"Los valores estan mal ubicados, intente con otra expresion (valor1 signo valor2)...";
					cin.get();
					return(-1);
				}
			}
			if((exp[i]=='+')||(exp[i]=='-')||(exp[i]=='*')||(exp[i]=='/'))
			{
				if(vez==1)
				{
					nuevo.n=0;
					nuevo.c=exp[i];
					nuevo.tipo=2;
					Insertar(&(*a),nuevo,&(*A));
				}
				else
				{
					cout<<endl<<"El signo esta mal ubicado, intente con otra expresion (valor1 signo valor2)...";
					cin.get();
					return(-1);
				}
			}
		}
		else
		{
			cout<<endl<<"Solo se evaluara una expresion con dos valores y un operando...";
			cin.get();
			return(0);
		}
	}
	return(0);
}

int main()
{
	char exp[255],signo;
	pila A1[100];
	int a1,ban,i,n1,n2,T=0;

	crear(&a1);
	cout<<"Introduzca la expresion infija: ";
	cin.getline(exp,255);
	ban=Tranforma(A1,&a1,exp);
	if(ban==0)
	{
		for(i=0;i<a1;i++)
		{
			n1=A1[0].n;
			n2=A1[2].n;
			if(A1[1].c=='+')T=n1+n2;
			if(A1[1].c=='-')T=n1-n2;
			if(A1[1].c=='*')T=n1*n2;
			if(A1[1].c=='/')T=n1/n2;
		}

		cout<<endl<<endl<<"La expresion fija=> "<<exp;
		cout<<endl<<endl<<"La expresion postfija=> "<<n1<<" "<<n2<<" "<<A1[1].c;
		cout<<endl<<endl<<"RESULTADO DE LA OPERACION=> "<<T;
	}
	cin.get();cin.get();
	return(0);
}
