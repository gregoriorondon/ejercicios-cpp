#include<conio.h>
#include<iostream.h>
#include<stdio.h>

struct cta_bancaria
{
  char nombre[20];
  char apellido[20];
  long cedula;
  long n_cta;
  long dep;
  int saldo;
  public:
  cta_bancaria(){saldo=0;}
  ~cta_bancaria();
  int deposito();
  void almacenar();
  void consulta();
  int comprobar();
  void mostrar();
};

cta_bancaria::~cta_bancaria()
{
  cout<<"fuera de alcanse";
}

int cta_bancaria::deposito()
{
  int monto=0;
  do
  {
    cout<<"ingrese el monto a depositar por favor:";
    cin>>monto;
  }

  while(monto<=0);
  saldo=saldo+monto;
  return 0;
}

void cta_bancaria::almacenar()
{
	cout<<"nombre y apellido del cliente:";
	gets(nombre);
	cout<<"apellido:";
	gets(apellido);
	cout<<"cedula:";
	cin>>cedula;
	cout<<"numero de cuenta:";
	cin>>n_cta;
	cout<<"saldo:";
	cin>>saldo;
}

void cta_bancaria::consulta()
{
	cout<<"nombre y apellido:"<<nombre<<endl;
	//cout<<"apellido:"<<apellido<<endl;
	cout<<"cedula:"<<cedula<<endl;
	cout<<"numero de cuenta:"<<n_cta<<endl;
	cout<<"saldo actual:"<<saldo<<endl;
}

int cta_bancaria::comprobar()
{
  long nro_cta;
  cout<<"introduzca el numero de cuenta:";
  cin>>nro_cta;

  if(n_cta==nro_cta)
    return 1;

  else
    return 0;
}
void cta_bancaria::mostrar()
{
  cout<<"su saldo es:"<<saldo;
}
class cta_corriente:public cta_bancaria
{
  long ret;
  public:
  cta_corriente(){ret=0;}
  ~cta_corriente();
  int retiro();

};
cta_corriente::~cta_corriente()
{
  cout<<"fuera de alcance";
}
int cta_corriente::retiro()
{
  int monto=0;
  cout<<"introduzca el monto a retirar:";
  cin>>monto;
  if(monto>ret)
    cout<<"Usted a sobregirado su cuenta:"<<endl;
      if(ret>=500000)
        cout<<"No puede hacer retiro,ha sobrepasado el limite del sobregiro:";
  ret-=monto;
  return 0;
}
class cta_ahorro:public cta_bancaria
{
  long ret ;
  public:
  cta_ahorro(){ret=0;}
  ~cta_ahorro();
  int retiro();
};
cta_ahorro::~cta_ahorro()
{
  cout<<"fuera de alcance";
}
int cta_ahorro::retiro()
{
  int monto=0;
  do
  {
    cout<<"introduzca el monto a retirar:";
    cin>>monto;
    if(monto>ret)
      cout<<"No tiene suficiente saldo:"<<endl;
  }while(monto<ret);
  ret=ret-monto;
  return 0;
}

main()
{
	char r;
	int op,opc;
	cta_corriente cc;
	cta_ahorro ca;
  
	do
	{
		do
		{
			cout<<"*****************************"<<endl;
			cout<<"*¿Cual es su tipo de cuenta?*"<<endl;
			cout<<"*1.cta_corriente            *"<<endl;
			cout<<"*2.cta_ahorro               *"<<endl;
			cout<<"*seleccione una opcion      *"<<endl;
			cout<<"*****************************"<<endl;
			cout<<endl;
			cin>>op;
		}
		
		while((op<1)||(op>2));
		if(op==1)
		{
			do
			{
				cout<<"***************************"<<endl;
				cout<<"*¿Que desea hacer?        *"<<endl;
				cout<<"*1.deposito               *"<<endl;
				cout<<"*2.retiro                 *"<<endl;
				cout<<"*3.almacenar              *"<<endl;
				cout<<"*4.consulta               *"<<endl;
				cout<<"*5.comprobar              *"<<endl;
				cout<<"*6.mostrar                *"<<endl;
				cout<<"*seleccione una opcion    *"<<endl;
				cout<<"***************************"<<endl;
				cout<<endl;
				cin>>opc;
			}
			while((opc<1)||(opc>6));
			switch(opc)
			{
				case 1:
					{
						cc.deposito();
						break;
					}

					case 2:
						{
							cc.retiro();
							break;
						}
						
					case 3:
						{
							cc.almacenar();
							break;
						}
						
					case 4:
						{
							cc.consulta();
							break;
						}
						
					case 5:
						{
							cc.comprobar();
							break;
						}
						
					case 6:
						{
							cc.mostrar();
							break;
						}
			}
		}
		
		cout<<endl;
		if(op==2)
		{
			do
			{
				cout<<"***************************"<<endl;
				cout<<"*¿Que desea hacer?        *"<<endl;
				cout<<"*1.deposito               *"<<endl;
				cout<<"*2.retiro                 *"<<endl;
				cout<<"*3.almacenar              *"<<endl;
				cout<<"*4.consulta               *"<<endl;
				cout<<"*5.comprobar              *"<<endl;
				cout<<"*6.mostrar                *"<<endl;
				cout<<"*seleccione una opcion    *"<<endl;
				cout<<"***************************"<<endl;
				cout<<endl;
			}
			
			while((opc<1)||(opc>6));
    switch(opc)
    {
      case 1:
      {
        ca.deposito();
        break;
      }
      case 2:
      {
        ca.retiro();
        break;
      }
      case 3:
      {
        ca.almacenar();
        break;
      }
      case 4:
      {
        ca.consulta();
        break;
      }
      case 5:
      {
        ca.comprobar();
        break;
      }
      case 6:
      {
        ca.mostrar();
        break;
      }
    }
  }
  cout<<endl;
  cout<<"¿Desea hacer otra operacion?";
  cin>>r;
  }while((r=='S')||(r=='s'));
  cout<<endl;

  cout<<"fin de la operacion";
  getch();
  return 0;
}












