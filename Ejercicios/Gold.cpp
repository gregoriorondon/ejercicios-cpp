#include <iostream.h>
#include <conio.h>


struct Inventario
{

private:
	char descrip[20];
	double precioCosto;
	double precioVenta;
	int id, estado;
public:
	double cargar(int id)
	{
		this->id=id;
		cout << endl;
		cout << "Id.Producto: " << id << endl;
		cout << "Descripcion: "; cin >> descrip;
		cout << "Costo: $"; cin >> precioCosto;
		precioVenta=(precioCosto*0.2)+precioCosto;
		cout << "Precio Venta: $" << precioVenta << endl;
		estado= 0;	//sin vender
		return precioCosto;
	}

	void mostrar()
	{
		cout << endl;
		cout << "Producto " << id << endl;
		cout << "Descrip: " <<descrip << endl;
		cout << "Precio Costo: $" << precioCosto << endl;
		cout << "Precio Venta: $" << precioVenta << endl;
		if (estado==1) cout << "VENDIDO" << endl;
		if (estado==0) cout << "DISPONIBLE" << endl;
	}

	double verPrecio()
	{
		return precioVenta;
	}

	bool ver_estado()
	{
		if (estado==0)
		{
			estado=1;	//vendido
			return true;
		}

		else { return false; }
	}
};

class Ingresos
{
private:
	int idProv,cant;
	double precioTotal;
	int id,listaProd[5];
	int precio;
	char fecha[8];
public:
	Ingresos();
	int cargar(int idProv, int nroCompra)
	{
		this->id=nroCompra;
		this->idProv=idProv;
		cout << endl;
		cout << "Compra Nro. " << nroCompra << endl;
		cout << "Fecha: "; cin >> fecha;
		cout << "Cant.Productos: "; cin >> cant;
		return cant;
	}
	int mostrar()
	{
		cout << endl;
		cout << "Compra Nro." << id << endl;
		cout << "Fecha Compra: " << fecha << endl;
		cout << "Total $" << precioTotal << endl;
		cout << "Productos comprados.." << endl;
		getch();
		return cant;
	}
	
	void llenarProd(int idProd, int i, double precio)
	{
		this->precioTotal=precioTotal+precio;
		this->listaProd[i]=idProd;
	}

	int nroProd(int posic)
	{
		return listaProd[posic];
	}
};

Ingresos::Ingresos()
{
	precioTotal=0;
}

class Proveedor
{
private:
	int id;
	char razonSoc[20];
	char direc[20];
	long telef;
	char vendedor[10];
public:
	void cargar(int id)
	{
		this->id=id;
		cout << "Id.Proveedor: " << id << endl;
		cout << "Razon Social: "; cin >> razonSoc;
		cout << "Domicilio: "; cin >> direc;
		cout << "Telefono: "; cin >> telef;
		cout << "Vendedor: "; cin >> vendedor;
	}
	void mostrar()
	{
		cout << endl;
		cout << "Proveedor " << id << endl;
		cout << "Empresa: " << razonSoc << endl;
		cout << "Domicilio: " << direc <<endl;
		cout << "Telefono: " << telef << endl;
	}
};

class Egresos
{
private:
	int idClien,cant;
	double precioTotal;
	int id,listaProd[5];
	char fecha[8];
public:
	Egresos();
	int cargar(int idClien, int nroVenta)
	{
		this->id=nroVenta;
		this->idClien=idClien;
		cout << endl;
		cout << "Nro.Venta: " << nroVenta << endl;
		cout << "Fecha Venta: "; cin >> fecha;
		cout << "Cant.Productos: "; cin >> cant;
		return cant;
	}
	int mostrar()
	{
		cout << endl;
		cout << "Venta Nro. " << id << endl;
		cout << "Fecha: " << fecha << endl;
		cout << "Total: $" << precioTotal << endl;
		cout << "Productos vendidos.." << endl;
		getch();
		return cant;
	}
	void llenarProd(int idProd, int posic, double precio)
	{
		this->precioTotal=precioTotal+precio;
		this->listaProd[posic]=idProd;
	}
	int nroProd(int posic)
	{
		return listaProd[posic];
	}
};
Egresos::Egresos()
{
	precioTotal=0;
}

class Cliente
{
private:
	int id;
	char nombre[20];
	char direc[20];
	long telef;
public:
	void cargar(int id)
	{
		this->id=id;
		cout << "Id.Cliente: " << id << endl;
		cout << "Nombre: "; cin >> nombre;
		cout << "Telefono: "; cin >> telef;
		cout << "Domicilio: "; cin >> direc;
	}
	void mostrar()
	{
		cout << endl;
		cout << "Cliente: " << id << endl;
		cout << "Nombre: " << nombre << endl;
		cout << "Domicilio: " << direc << endl;
		cout << "Telefono: " << telef << endl;
	}
};

class Empresa
{
protected:
	int cantProd,cantClie,cantProv;
	Inventario producto[30];
	Proveedor proveedor[10];
	Cliente cliente[10];
public:
	Empresa();
	void agregar();
//	void mostrar();
};
Empresa::Empresa()
{
	cantProv=0;
	cantClie=0;	
}

void Empresa::agregar()
{
	int opcion=10;
	while (opcion>2)
	{
		cout << "1) Proveedor" << endl;
		cout << "2) Cliente" << endl;
		cout << "Opcion: "; cin >> opcion;
		cout << endl;
	}
	switch (opcion)
	{
	case 1:
		cantProv++;
		proveedor[cantProv].cargar(cantProv);
		break;
	case 2:
		cantClie++;
		cliente[cantClie].cargar(cantClie);
		break;
	}
}

class Transaccion:public Empresa
{
private:
	int cantCompras;
	int cantVentas;
	Ingresos compra[30];
	Egresos venta[30];
public:
	Transaccion();
	void mostrar();
	void vender();
	void comprar();
};
Transaccion::Transaccion()
{
	cantProd=0;
	cantCompras=0;
	cantVentas=0;
}

void Transaccion::mostrar()
{
	int opcion=9;
	int cant,id,m;

	while (opcion>5)
	{
		cout << "1) Producto" << endl;
		cout << "2) Proveedor" << endl;
		cout << "3) Cliente" << endl;
		cout << "4) Compra" << endl;
		cout << "5) Venta" << endl;
		cout << "Opcion: "; cin >> opcion;
		cout << endl;
	}
	cout << "Ingrese Id: "; cin >> id;
	switch(opcion)
	{
	case 1: 
		if (id<=cantProd) producto[id].mostrar();
		break;
	case 2: 
		if (id<=cantProv) proveedor[id].mostrar();
		break;
	case 3: 
		if (id<=cantClie) cliente[id].mostrar(); 
		break;
	case 4:
		if (id<=cantCompras)
		{
			cant= compra[id].mostrar();
			for (int i=0; i<cant; i++)
			{
				m= compra[id].nroProd(i);
				producto[m].mostrar();
			}
		}
		break;
	case 5:
		if (id<=cantVentas)
		{
			cant= venta[id].mostrar();
			for (int i=0; i<cant; i++)
			{
				m= venta[id].nroProd(i);
				producto[m].mostrar();
			}
		}
		break;
	}
}

void Transaccion::vender()
{
	int id,idProd,cant;
	double precio;

	cout << "Id.Cliente: ";
	cin >> id;
	if (id<=cantClie)
	{
		cliente[id].mostrar();
		cantVentas++;
		cant= venta[cantVentas].cargar(id,cantVentas);
		for (int i=0; i<cant; i++)
		{
			cout << "Id.Producto: "; cin >> idProd;
			bool est= producto[idProd].ver_estado();
			if (est==true)
			{ 
				precio= producto[idProd].verPrecio();
				venta[cantVentas].llenarProd(idProd,i,precio);
			}
			else { 
				cout << "NO!! Ya fue vendido anteriormente" << endl;
				cantVentas--;
				i= cant;
			}
		}
	}
	else { cout << "Cliente invalido." << endl; }
}

void Transaccion::comprar()
{
	int id, cant;
	double precio;

	cout << "Id.Proveed: "; cin >> id;
	if (id<=cantProv)
	{
		proveedor[id].mostrar();
		cantCompras++;
		cant=compra[cantCompras].cargar(id,cantCompras);
		for (int i=0; i<cant; i++)
		{
			cantProd++;
			precio= producto[cantProd].cargar(cantProd);
			compra[cantCompras].llenarProd(cantProd,i,precio);
		}
	}
}

void main()
{
	int opcion=9;
	Transaccion sistema;

	while (opcion>0)
	{
		while (opcion>4)
		{
			cout << endl;
			cout << "1) Agregar" << endl;
			cout << "2) Consultar" << endl;
			cout << "3) Comprar" << endl;
			cout << "4) Vender" << endl;
			cout << "0) Salir" << endl;
			cout << "Opcion: "; cin >> opcion;
			cout << endl;
		}
		switch (opcion)
		{
			case 1: sistema.agregar(); break;
			case 2: sistema.mostrar(); break;
			case 3: sistema.comprar(); break;
			case 4: sistema.vender();  break;
		}
		if (opcion>0) opcion=9;
	}
}