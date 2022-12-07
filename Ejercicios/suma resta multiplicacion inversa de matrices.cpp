/*programa que permite realizar operaciones de matrices
como suma resta multiplicacion e inversa
de encvontra errores en este programa 
porfavor mandar sugerencias al autor
si sedecea una explicacion comunicar al autor
correo alfamadro49jojo@yahoo.es
	   alfamadro49jojo@hotmail.com
	   */



#include"iostream.h"



////////////////////////
///////jojo////////////

struct matriz{

private:
	double pivote;
    int i,j,n,k,l;

	int f,c,q;

public:/* a primera matriz 
	      b segunda matriz
	      r respuesta de operacion
		*/


     double a[100][100],b[100][100],r[100][100];

	 int af,ac,bf,bc,rf,rc;
	 ////*******************************//

    void llenar_dimenciones(int h,int k,int primera_segunda)
	{
		
			cout<<"\n llenando \n";
		if(primera_segunda<=1)
		{
			for(f=1;f<=h;f++)
			{
				for(c=1;c<=k;c++)
				{
					cout<<"matriz A "<<"fila:"<<f<<" columna:"<<c<<endl;
				    
					cin>>a[f][c];
				}
			}

		}
		else
		{

			for(f=1;f<=h;f++)
			{
				for(c=1;c<=k;c++)
				{
					cout<<"matriz B "<<"fila:"<<f<<" columna:"<<c<<endl;
					cin>>b[f][c];
				}
			}
		}
	}
		//////jojo///////
	void suma(int ff,int cc)
	{
		cout<<"sumando"<<endl;
		
		for(f=1;f<=ff;f++)
		{
			for(c=1;c<=cc;c++)
				r[f][c]=a[f][c]+b[f][c];
		}
		mostrar(ff,cc);
	}
	//////jojo////////
	void resta(int hh,int kk)
	{
			cout<<"Restando"<<endl;
		
		for(f=1;f<=hh;f++)
		{
			for(c=1;c<=kk;c++)
				r[f][c]=a[f][c]-b[f][c];
		}
		mostrar(hh,kk);  
	}
	//////jojo//////	
	void multiplicar(int acc_bff,int aff,int bcc )
	{
		for(f=1;f<=aff;f++)
		{
			for(c=1;c<=bcc;c++)
			{
			r[f][c]=0;

				for(q=1;q<=acc_bff;q++)
				{
					r[f][c]+=(a[f][q]*b[q][c]);

				}


			}

		}
		mostrar(aff,bcc );

	}

void accion()
{

		lee_matriz();
		for(i=0;i<n;i++)
		{
			j=i;
			pivote=a[i][j];
			b[i][j]=1/pivote;
			fila_pivote();
			col_pivote();
			otros();
			for(k=0;k<n;k++)
			{
				for(l=0;l<n;l++)
				{
					a[k][l]=b[k][l];
				}
			}
		}
		imprime();
		
}
void imprime()
{
	double r,jjw=0,kkw=0;int cancela=0,jojow=0;
	r=jjw/kkw;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if (a[i][j]=r)
			cancela=1;
		}
		
		
	}
	if (cancela=0)
	{
	
		cout<<"Lamatriz invresa es \n";
		for(i=0;i<n;i++)
		{
			cout<<"\n  º ";

			for(j=0;j<n;j++)
			{
				cout<<a[i][j]<<" ";
			}
		
		
		}
	}
	else
		cout<<"ºº  Mensaje de Error ºº\n  ______________________"<<endl;
		
cout<<"Los valores Ingresados Para \nOptener la Inversa"
	<<" no son Validos  ";

}

void lee_matriz()
{
	
	cout<<"ººIngrese las dimenciones dela matriz nxnºº\n  ______________________________________________\n Ingreso n: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		    cout<<"fila:"<<i<<" columna:"<<j<<endl;
				    
			cin>>a[i][j];
			
		}
	}

	
	
}
void fila_pivote()
{
	int m;
		for(m=0;m<n;m++)
		{
			if(m!=i)
			{
				b[i][m]=a[i][m]/pivote;
			}
		}
}

void col_pivote()
{
	int m;
		for(m=0;m<n;m++)
		{
			if(m!=j)
			{
				b[m][j]=-a[m][j]/pivote;
			}
		}
}

void otros()
{
	int x,y;
		for(x=0;x<n;x++)
		{
			for(y=0;y<n;y++)
			{
				if(x!=i&&y!=j)
				{
					b[x][y]=a[x][y]-(a[i][y]*a[x][j])/pivote;
				}
			}
		}
}


	void mostrar(int fg,int cg)
	{
		for(f=1;f<=fg;f++)
		{
			
			cout<<"\n  º ";

			for(c=1;c<=cg;c++)
			{
				cout<<r[f][c]<<"\t ";
			}
		}
	}
	
};



/////////////************jojo***************//////////////
int menu1()
{
	int respuesta1;
	cout<<"\n\n\n\n  PROGRAMA DE MATRICES\n  ________________________ \n\n"
		<<"Operaciones a realizar \n"
		<<" 1.-Suma \n"
		<<" 2.-Resta \n"
		<<" 3.-Multiplica \n"
		<<" 4.-Inverza \n"
		<<" 5.-Salir \n"
		<<"Escojo la Opcion:";cin>>respuesta1;
	cout<<endl;
	return(respuesta1);

}
int menu2(char error[15])
{
	int respuesta2;
cout<<"\nººMensaje de Errorºº\n"
	<<"\nNo se Puede Realizar Esta Operacion\n"
	<<"1.-"<<error<<endl
	<<"2.-Regresar al Menu \n"
	<<"Escojo la Opcion:";cin>>respuesta2;
   return(respuesta2);

}


///////////////////////////////////////
//////////////jojo madro///////////////


void main()
{
	matriz matriz_a,matriz_b;
	matriz dato;

	int res,res2,fin;
	do
	{
		res=menu1();
		switch(res)
		{
		case 1://///suma
			cout<<"ººOperacion de Sumaºº \n  _________________________\n"
				<<"Ingrese dimenciones \n"
				<<"Columnas:";cin>>matriz_a.ac;
			cout<<"filas:";cin>>matriz_a.af;				//jojo  para una sauma de matrisez las dimenciones 
				dato.llenar_dimenciones(matriz_a.af,matriz_a.ac,1); //   de la matriz A como B deben ser Iguales
			cout<<"\n Ingreser la segunda Matriz\n";
			dato.llenar_dimenciones(matriz_a.af,matriz_a.ac,2); //jojo   de la matriz A como B deben ser Iguales
			
			dato.suma(matriz_a.af,matriz_a.ac);
			break;

		case 2:///resta
			cout<<"ººOperacion de Restaºº \n  __________________________\n"
				<<"Ingrese dimenciones  \n"
				<<"Columnas:";cin>>matriz_a.ac;
			cout<<"filas:";cin>>matriz_a.af;
											// jojo para una resta de matrisez las dimenciones 
				dato.llenar_dimenciones(matriz_a.af,matriz_a.ac,1); //jojo   de la matriz A como B deben ser Iguales
			cout<<"\n Ingreser la segunda Matriz\n";
			dato.llenar_dimenciones(matriz_a.af,matriz_a.ac,2); //jojo   de la matriz A como B deben ser Iguales
			dato.resta(matriz_a.af,matriz_a.ac);
			break;
		case 3:///multiplicacion
				fin=0;
				cout<<"ººOperacion de Multiplicacionºº \n  __________________________\n\n "
					<<"Ingrese dimenciones de la Matriz A  \n"
					<<"Columnas:";cin>>matriz_a.ac;
				cout<<"Filas:";cin>>matriz_a.af;
			do
			{
																	//jojo  para una multiplicacion de matrisez la  (fila de A=columna de B)
																	 //jojo   de la matriz A como B deben ser Iguales
				 cout<<"Ingrese las Dimenciones de la Matriz B \n"
					<<"Columnas:";cin>>matriz_b.bc;
				cout<<"Filas:";cin>>matriz_b.bf;
					if(matriz_a.ac==matriz_b.bf)
					{
						cout<<"\nºº LLenar A ºº\n";
						dato.llenar_dimenciones(matriz_a.af,matriz_a.ac,1);
						cout<<"\nºº LLenar B ºº\n";

						dato.llenar_dimenciones(matriz_b.bf,matriz_b.bc,2);

						dato.multiplicar(matriz_a.ac,matriz_a.af,matriz_b.bc);


					}
					else
					{
						res2=menu2("Igrezar Nuevamente la Matriz B");
							if(res2==1)
								fin=1;
							else
								fin=0;
					}
					
			}while(fin==1);
			
			break;
		case 4:///inverza
			dato.accion();
			break;
		
		default:
			break;
			

		}

	}while(res<5);



}
