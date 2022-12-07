/*Se tiene una almacén donde se encuentran las neveras fabricadas por una planta, las primeras 
neveras que fueron fabricadas están de últimas, dentro del almacén y las últimas neveras fabricadas,
aparecen de primeras dentro del almacén. Los datos de cada nevera son código y descripción. El 
almacén dispone de una sola puerta, por donde entran las neveras a ser almacenadas y salen las 
neveras que se van a distribuir a las tiendas. Adicionalmente, se tiene una cola de solicitudes 
de neveras realizadas por las tiendas, donde aparece el nombre de la tienda y la cantidad solicitada
de neveras, elabore un método que permita asignar a cada tienda las neveras, generando una nueva
estructura que contenga la tienda y el código de las neveras asignadas.*/
#include <iostream.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define n 3

struct Neve
{
	char cod[20],des[100];
};
struct pila
{
	int T;
	Neve Listan[n];
};
struct Empre
{
	char nom[30];
	int num;
};
struct cola
{
	int I;
	int F;
	Empre Listae[n];
};

int ini(pila *p,cola *c)
{
	p->T=-1;
	c->F=-1;
	c->I=0;
	return 0;
}

void insertarN(pila *p)
{
	system("color 0a");
	if(p->T==n-1)
		{
			cout<<endl<<"\n\t\tD E P O S I T O   L L E N O\n"<<endl;
			cin.get();
			cin.get();
			goto b;
		}else{
			p->T++;
			cout<<endl<<"Introduzca el Codigo de la Nevera: ";
			cin.ignore();
			cin.getline(p->Listan[p->T].cod,20);
			cout<<endl<<"Introduzca la Descripcion de la Nevera: ";
			cin.getline(p->Listan[p->T].des,100);
			cout<<endl<<"\n\t\tNevera: "<<p->T+1<<endl;
			cout<<endl<<"\t\tCodigo: "<<p->Listan[p->T].cod<<endl;
			cout<<endl<<"\t\tDescripcion: "<<p->Listan[p->T].des<<endl;
			cout<<"\n\t\tNevera Insertada en Deposito...."<<endl;
		}
b:
cin.get();
cin.get();
}

void mostrarN(pila *p)
{
	system("color 0b");
	if(p->T==-1)
		{
			cout<<endl<<"\n\t\tD E P O S I T O   V A C I O \n"<<endl;
			cin.get();
			cin.get();
			goto b;
		}else{
			for(int i=0;i<=p->T;i++){
				cout<<endl<<"\n\t\tNevera: "<<i+1<<endl;
				cout<<endl<<"\t\tCodigo: "<<p->Listan[i].cod<<endl;
				cout<<endl<<"\t\tDescripcion: "<<p->Listan[i].des<<endl<<endl;
			}
		}
b:
cin.get();
cin.get();
}

void insertarE(cola *c)
{
	system("color 0c");
	if((c->F==n-1))
		{
			cout<<endl<<"\n\t\tD E P O S I T O   L L E N O\n"<<endl;
			cin.get();
			cin.get();
			goto b;
		}else{
			c->F++;
			cout<<endl<<"Introduzca el Nombre de la Empresa: ";
			cin.ignore();
			cin.getline(c->Listae[c->F].nom,30);
			cout<<endl<<"Introduzca el Numero de Neveras a Comprar: ";
			cin>>c->Listae[c->F].num;
			cout<<endl<<"\n\t\tEmpresa: "<<c->Listae[c->F].nom<<endl;
			cout<<endl<<"\t\tNumero de Neveras: "<<c->Listae[c->F].num<<endl;
			cout<<"\n\t\tEmpresa en Cola...."<<endl;
		}
b:
cin.get();
cin.get();
}

void mostrarE(cola *c)
{
	system("color 0d");
	if((c->F==-1) || (c->F<c->I))
		{
			cout<<endl<<"\n\t\tC O L A   V A C I A\n"<<endl;
			cin.get();
			cin.get();
			goto b;
		}else{
			for(int i=c->I;i<=c->F;i++){
				cout<<endl<<"Nombre de la Empresa: "<<c->Listae[i].nom<<endl;
				cout<<endl<<"Numero de Neveras a Comprar: "<<c->Listae[i].num<<endl;
			}
		}
b:
cin.get();
cin.get();
}

void vend(pila *p, cola *c)
{
	system("color 0e");
	if(p->T==-1)
	{
		cout<<endl<<"\n\t\tD E P O S I T O   V A C I O \n"<<endl;
		cout<<endl<<"\n\t\t \n"<<endl;
		cin.get();
	}else{	
		if((c->F==-1) || (c->F<c->I))
		{
			cout<<endl<<"\n\t\tC O L A   V A C I A\n"<<endl;
			cin.get();
			goto b;
		}else{
			cout<<endl<<"Nombre de la Empresa: "<<c->Listae[c->I].nom<<endl;
			cout<<endl<<"Numero de Neveras a Vender: "<<c->Listae[c->I].num<<endl;
			cout<<endl<<"Codigo de las Nevera: "<<endl;
			for(int i=0;i<c->Listae[c->I].num;i++)
				if (p->T!=-1){
					cout<<p->Listan[i].cod<<endl;
				}else{
					cout<<endl<<"\n\t\tNo hay Neveras\n"<<endl;
					cin.get();
					goto b;
				}
			for(i=0;i<c->Listae[c->I].num;i++){
				if (p->T!=-1){
					strcpy(p->Listan[i].cod,p->Listan[i+1].cod);
					strcpy(p->Listan[i].des,p->Listan[i+1].des);
					p->T--;
					cout<<endl<<"V E N D I D A . . . ."<<endl;
				}else{
					cout<<endl<<"\n\t\tNo hay Neveras\n"<<endl;
					cin.get();
					goto b;
				}
			}
			strcpy(c->Listae[c->I].nom,c->Listae[c->I+1].nom);
			c->Listae[c->I].num=c->Listae[c->I].num;
			c->I++;
		}
	}
b:		
cin.get();
cin.get();
}

void main()
{
	pila P;
	cola C;
	ini(&P,&C);
	char opc;
	do{
		system("cls");
		system("color 0f");
		for(int i=0;i<80;i++)
			cout<<"Í";
		cout<<endl<<"\n\t\t_ _ - - î î M E N U   P R I N C I P A L î î - - _ _\n"<<endl;
		for(i=0;i<80;i++)
			cout<<"Í";
		cout<<endl<<"\n\t\t\t1. Insertar Nevera.\n";
		cout<<"\t\t\t2. Ver Deposito.\n";
		cout<<"\t\t\t3. Insertar Datos de la Empresa.\n";
		cout<<"\t\t\t4. Ver Lista de Empresas.\n";
		cout<<"\t\t\t5. Vender Neveras.\n";
		cout<<"\t\t\t0. Salir.\n"<<endl;
		cout<<"\n\t\t\t    Opcion: ";
		cin>>opc;
		switch (opc){
		case '1':
			system("cls");
			insertarN(&P);
			break;
		case '2':
			system("cls");
			mostrarN(&P);
			break;
		case '3':
			system("cls");
			insertarE(&C);
			break;
		case '4':
			system("cls");
			mostrarE(&C);
			break;
		case '5':
			system("cls");
			vend(&P,&C);
			break;
		case '0':
			goto a;
			break;
		default:
			cout<<endl<<"\t\t\t\tERROR"<<endl;
			cin.get();
			cin.get();
		}
	}
	while(opc!='0');
a:
cout<<endl<<"\n\n\t\t\t\tFinalizado!....\n"<<endl;
cout<<endl<<"\t\t\tPrecione enter para salir...."<<endl;
cin.get();
cin.get();
}