#include<iostream.h>
struct pila
{
	int datos[5];
	int tope;
};
void crear_pila(pila *p)
{
	p->tope=-1;
}
int pila_vacia(pila *p)
{
	if(p->tope==-1)
	{
		return(1);
	
	}
	else
	{
		return(0);
	}
}
int pila_llena(pila *p)
{
	if(p->tope==4)
	{
		return(1);
		cout<<"PILA LLENA";
		cin.get();
	}
	else
	{
		return(0);
	}
}
void insertar_pila(pila *p,int dato)
{	
	p->tope++;
	p->datos[p->tope]=dato;

}
void mostrar_pila(pila *p)
{   
	cout<<endl<<endl;
	for(int j=p->tope;j>-1;j--)
	{
		cout<<j+1<<"->"<<p->datos[j]<<endl;
	}
}
int posicion(pila *p,int x)
{   
	int band=-1;

	for(int j=0;j<p->tope+1;j++)
	{
		if(p->datos[j]==x)
		{
			band=j;
		}
	}
	return(band);
}
void eliminar(pila *p)
{
	int n,aux;
	cout<<"INGRESE DATO:";
	cin>>n;
	
	aux=posicion(p,n);cout<<aux<<aux;
	if(aux==-1)
	{
		cout<<"EL DATO NO ESTA EN LA PILA";
		cin.get();
	}
	else
	{
		for(int j=aux;j<p->tope;j++)
		{
			p->datos[j]=p->datos[j+1];
		}
		p->tope--;
	}
	
}


void main()
{   
	pila p;
	crear_pila(&p);
	int x;
	char op;
	do
	{
		cout<<endl<<"1-> INSERTAR"<<endl;
		cout<<"2-> MOSTRAR"<<endl;
		cout<<"3-> ELIMINAR"<<endl;
		cout<<"X-> SALIR";
		cin>>op;
		if(op=='1')
		{
			int j=pila_llena(&p);
			if(j==1)
			{
	            cout<<"PILA LLENA";
 		        cin.get();
			}
			else
			{

				cout<<"INGRESE DATO:";
    		    cin>>x;
				int k=posicion(&p,x);
				if(k!=-1)
				{
					cout<<"NO SE ACEPTAN VALORES REPETIDOS \a";
					cin.get();
				}
				else
				{
			     insertar_pila(&p,x);
				}
			}
		}
		if(op=='2')
		{
			int j=pila_vacia(&p);
			if(j==1)
			{
				cout<<"PILA VACIA";
				cin.get();
			}
			else
			{
				mostrar_pila(&p);
			}
		}
		if(op=='3')
		{
			int j=pila_vacia(&p);
			if(j==1)
			{
			    cout<<"PILA VACIA";
				cin.get();
			}
			else
			{
				eliminar(&p);
			}
		}
			
	}while(op!='x');
}



