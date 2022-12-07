/*Un cine los coontrato para registrar todas las peliculas y documentales que presenta una
pelicula cuenta con titulo, director fecha de lanzamiento y directores principales un
documental cuenta casi con las mismas caracteristicas eceptuando los directores pero en
audicion tiene resumen y genero.
  El cine tambien presenta propagandas que tiene tema duracion publico al q esta di-
rigido y un costo de 5mil por minuto si es una propaganda comercial. si no es gratui-
ta*/

#include<iostream.h>
#include<string.h>
class clase1
{
	struct peli
	{
		char titulo[20];
		char director[20];
		char fecha[10];
		char actores[30];
		char genero[10];
		char resumen[50];
	};
	struct docu
	{
		char titulo[20];
		char fecha[10];
		char actores[30];
		char genero[10];
		char resumen[50];
	};

	public:
		peli c[100];
		docu y[100];
		int i, l;
		void iniciar()
		{
			i=0;
			l=0;
		}
		void llenar()
		{
			char t='s';
			int opc;
				cout<<endl<<"1-.pelicula";
				cout<<endl<<"2-.documental";
				cin>>opc;
				if(opc==1)
				{
					while(t=='s')
					{
						cout<<"int nombre de la pelicula:";
						cin.ignore();
						cin.getline(c[i].titulo,20);
						cout<<"int el nombre del director:";
						cin.getline(c[i].director,20);
						cout<<"int fecha delanzamiento:";
						cin.getline(c[i].fecha,10);
						cout<<"int los autores:";
						cin.getline(c[i].actores,20);
						cout<<"int genero:";
						cin.getline(c[i].genero,20);
						i++;
						cout<<"desea continiar s/n:";
						cin>>t;
					}
				}
				else
				{
					if(opc==2)
					{
						while(t=='s')
						{
							cout<<"int nombre de la pelicula:";
							cin.ignore();
							cin.getline(y[l].titulo,20);
							cout<<"int fecha delanzamiento:";
							cin.getline(y[l].fecha,10);
							cout<<"int los autores:";
							cin.getline(y[l].actores,20);
							cout<<"int genero:";
							cin.getline(y[l].genero,10);
							cin.getline(y[l].genero,10);
							cout<<"int resumen:";
							cin.getline(y[l].resumen,50);
							l++;
							cout<<"desea continiar s/n:";
							cin>>t;
						}
					}
				}
		};
};
class clase2: public clase1
{
public:
	int op;
	int band;
	void mostrar()
	 {
		cout<<endl<<"1-.pelicula";
		cout<<endl<<"2-.documental";
		cin>>op;
		if(op==1)
		{
			if(i==0)
			{
				cout<<endl<<"**	NO HAY DATOS**";
				cin.get();
			}
		   	for(int j=0; j<i; j++)
			{
				if(i>0)
				{
					cout<<endl<<"****************************";
					cout<<endl<<"** DATOS  DE LA PELICULA  **";
					cout<<endl<<"****************************";
					cout<<endl;
					cout<<endl<<"-----------------------------";
					cout<<endl<<"||nombre;"<<c[j].titulo;
					cout<<endl<<"||director;"<<c[j].director;
					cout<<endl<<"||fecha;"<<c[j].fecha;
					cout<<endl<<"||actores;"<<c[j].actores;
					cout<<endl<<"||genero;"<<c[j].genero;
					cout<<endl<<"-----------------------------";
					cin.get();
				}
			}
					
		}
		else
		{
			if(op==2)
			{
				if(l==0)
				{
					cout<<endl<<"**NO HAY DATOS**";
					cin.get();
				}
				for(int p=0; p<l; p++)
				{
					if(l>0)
					{
						cout<<endl<<"****************************";
						cout<<endl<<"** DATOS  DEL DOCUMENTAL  **";
						cout<<endl<<"****************************";
						cout<<endl;
						cout<<endl<<"-----------------------------";
						cout<<endl<<"||nombre;"<<y[p].titulo;
						cout<<endl<<"||fecha;"<<y[p].fecha;
						cout<<endl<<"||actores;"<<y[p].actores;
						cout<<endl<<"||genero;"<<y[p].genero;
						cout<<endl<<"||resumen;"<<y[p].resumen;
						cout<<endl<<"-----------------------------";
						cin.get();
					}
					
				}
			}
		}
	}
};
void main()
{
	clase2 o1;
	o1.iniciar();
	char res='s';
	int o;
	int t=0;
	//char propaganda[20];
		char tema[10];
		int duracion;
		char public_diri[10];
	int p;
	while(res=='s')
	{
		cout<<endl<<"**************************";
		cout<<endl<<"****Cinex Multiplex*******";
		cout<<endl<<"**************************";
		cout<<endl<<"     1-.llenar:  ";
		cout<<endl<<"     2-.mostar:  ";
		cout<<endl<<"     3-.salir :  ";
		cin>>o;
		if(o==1)
		{	
			o1.llenar();
			cout<<endl<<"****************************";
			cout<<endl<<"**   Tipó de propaganda   **";
			cout<<endl<<"****************************";
			cout<<endl;
			cout<<endl<<"1-. COMERCIAL:";
			cout<<endl<<"2-.NO COMERCIAL:";
			cin>>p;
			if(p==1)
			{
				
				cout<<endl<<"tema dela propaganda: ";
				cin.ignore();
				cin.getline(tema,10);
				cout<<endl<<"Duracion dela propaganda: ";
				cin>>duracion;
				t=duracion*5000;
				cout<<"su costo es:"<<t<<"Bs";
				cout<<endl<<"Publico el cual esta dirigida la propaganda: ";
				cin.getline(public_diri,10);
				cin.getline(public_diri,10);
				cin.get();
			}
			else
			{
				if(p==2)
				{
					cout<<"es propaganda es gratuita:";
					cout<<endl<<"int el tema dela propaganda";
					cin.ignore();
					cin.getline(tema,10);
					cout<<endl<<"int la duracion dela propaganda";
					cin>>duracion;
					cout<<endl<<"int el publico el cual esta dirigida la propaganda";
					cin.getline(public_diri,10);
					cin.getline(public_diri,10);
					cin.get();
				}
			}
		}
		if(o==2)
		{
			o1.mostrar();
			cin.get();
		}
		if(o==3)
		{
			res='n';
			cin.get();
		}
	}
	cin.get();
}






