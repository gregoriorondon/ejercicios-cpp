#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <iomanip.h>
#include <fstream.h>

// Nombre del archivo físico
const char princ[] = "C2000";

const int ap = 21; // Longitud máxima del apellido
const int nom = 16; // Longitd máxima del nombre

//Prototipos
void ingresar();
void retocar(char);
void imprimir();
void eliminar();
int existe(char[],char[], int &, long &);

/* ================= main() ==================*/
void main()
{

char opcion;

cout << "\n     SISTEMA DE NOTAS\n";
cout << "\n Operaciones Disponibles:\n";
do {
  cout <<endl <<endl;
  cout << " 1. Ingresar y Colocar Calificacion a un Nuevo Alumno\n";
  cout << " 2. Borrar un Alumno\n";
  cout << " 3. Cambiar Calificacion\n";
  cout << " 4. Mostrar Archivo de Notas\n";
  cout << " 5. Eliminar Archivo de Notas\n";
  cout << " 6. Salir del Sistema\n";
  cout << "\n Escriba su opcion: ";

    if (!cin.get(opcion)) break; // Para atrapar EOF
    cin.ignore(80, '\n'); // Ingnorar el resto del renglón
    opcion = toupper(opcion); // Unificar todo a mayúsculas
    switch (opcion)
	{
		case '1': ingresar(); break;
		case '2': retocar('b'); break;
		case '3': retocar('c'); break;
		case '4': imprimir(); break;
		case '5': eliminar(); break;
		case '6': break;
		default: cout << "\n Opcíon Desconocida\n";
	}
}

while (opcion != 'F');
cout << "\n Adios.";
} // main

/* ================= eliminar() ==================*/
void eliminar()
{
	char c;

	ifstream prueba;
	prueba.open(princ, ios::nocreate);
	prueba.close();
	if (prueba)
	{
		cout << "\n    Esta Seguro que desea eliminar el Archivo (S/N): ";
		cin.get(c);
		cin.ignore(80, '\n');
		c = toupper(c);
		
		if (c == 'S')
		{
			if (remove(princ)) // La función devuelve 0 si lo hizo
				cout << "\n    No se pudo eliminar el archivo";
			
			else cout << "    Archivo eliminado\n";
		}
		
		else ; // Enunciado nulo, imprescindible en este caso.
	}

	else cout << "\n    El archivo no existe\n";
}// eliminar

// Estructura global de un registro de datos
struct registro
{
	char apellido[ap];
	char nombre[nom];
	int calif;
};

char marca = '\177'; // Carácter especial de "borrado"

/* ================= altas() ==================*/
void ingresar()
{
	int i = 1;
	int x; // Parámetro auxiliar; aquí sólo ocupa un espacio
	long y; // Parámetro auxiliar; aquí sólo ocupa un espacio

// Definición de una variable tipo "registro"
	registro alumno = {0};

	ifstream prueba;
	ofstream disco;

//Abrir el archivo de datos, o crearlo si no existía
	prueba. open(princ, ios::nocreate);
	prueba.close();
	
	if (!prueba)
	{
		cout << "\n\n    El archivo no existia, se crea ahora\n";
		disco.open(princ);
		disco.close();
	}
	
// Lectura inicial
	cout << endl;
	cout.width(3); // Alinear a la derecha el contador
	cout << i <<")" << " Ingrese Apellido, o un 0 para terminar: ";
	if (!cin.getline(alumno.apellido,ap)) return; // Cuidar EOF
// Continuar si no fue el último
	while (alumno.apellido[0] != '0')
	{
		cout << "     Ingrese Nombre: ";
		if (!cin.getline(alumno.nombre,nom)) return; //Cuidar EOF
	// Cuidado con datos duplicados
		if (!existe(alumno.apellido, alumno.nombre, x, y))
		{
			do
			{
				cout << " Calificacion (0-20): ";
				cin >> alumno.calif;
				cin.ignore(80, '\n'); //Ignorar el resto del renglón
			}
			
			while (alumno.calif < 0 || alumno.calif > 20);
			disco.open(princ, ios::app);
			disco.write((char *)&alumno, sizeof(registro));
			disco.close();
			i++;
		}
		
		else cout << "\n    ERROR: Ese Alumno Ya Esta En Lista\n";
		cout << endl;
		cout.width(3);
		cout << i <<")" << " Apellido, o un 0 para terminar: ";
		cin.getline(alumno.apellido,ap);
	}
	
	cout << "\n Total de alumnos dados de alta: " << i-1 << endl;
	disco.close();
}// altas

/* ================= retocar (modo) ==================*/
//Borrar (modo='b') o cambiar (modo='c') datos del archivo
void retocar(char modo)
{
	int i = 1;
	int calif; // Variable temporal
	long reg; // Contador de registros
	registro alumno = {0};

//Verificar si existe el archivo
	ifstream prueba;
	ofstream disco;
	prueba.open (princ, ios::nocreate);
	prueba.close();
	if (prueba)
	{
		// Lectura inicial
		cout << endl;
		cout.width(3);
		cout << i << " Apellido del Alumno ";
		if (modo =='b') cout << "a borrar,\n";
		else cout << "A Quien\n   Se Desea Cambiar La Calificacion,\n";
		cout << "    o un 0 para terminar: ";
		if (!cin.getline(alumno.apellido,ap)) return; // Cuidar EOF
  // Continuar si no fue el último
		while (alumno.apellido[0] != '0')
		{
			cout << "    Nombre: ";
			if (!cin.getline(alumno.nombre,nom)) return; // ¿EOF?
			if (existe(alumno.apellido, alumno.nombre, calif, reg))
			{
				if (modo == 'b')
        // Marcarlo como borrado e inutilizarlo
				alumno.apellido[0] = marca;
				else
				{
					cout << "\n    Su Calificacion Anterior Es: " << calif << endl;
					do
					{
						cout << "    Nueva Calificacion (0-20): ";
						cin >> alumno.calif;
						cin.ignore(80, '\n'); // Ignorar el resto del renglón
						if (calif == alumno.calif)
						{
							cout << "    Es La Misma...\n";
							i--;
						}
					}
					
					while (alumno.calif < 0 || alumno.calif > 100);
				}
				
				disco.open(princ, ios::ate);
				// Va directo a ese registro
				disco.seekp(reg*sizeof(registro), ios::beg);
				disco.write((char *)&alumno, sizeof(registro));
				disco.close();
				i++;
				if (modo == 'b') cout << "\n    Borrado.\n";
				else if (calif != alumno.calif) cout << "\n Cambiada.\n";
			}
			
			else cout << "\n    ERROR: Ese Alumno No Esta Registrado.\n";
			cout << endl;
			cout.width(3);
			cout << i << " Apellido Del Alumno ";
			if (modo == 'b') cout << "a borrar,\n";
			else cout << "A Quien\n    Se Desea Cambiar La Calificacion,\n";
			cout << "    O Un 0 Para Terminar: ";
			if (!cin.getline(alumno.apellido,ap)) return; // ¿EOF?
		}
		
		if (modo == 'b') cout << "\n Total De Alumnos Borrados: " << i-1 << endl;
		else cout << "\n Total De Calificaciones Cambiadas: " << i-1 << endl;
	}
	
	else cout << "\n    El Archivo No Existe:\n"
    << "    aún no se han dado de alta alumnos.\n";
} // retocar

/* ================= imprimir() ==================*/
// Muestra los contenidos del archivo en disco
void imprimir()
{
	int i = 0;
	float suma = 0.0;
	registro alumno = {0};

	ifstream prueba;
	ifstream disco;

// Verificar si existe el archivo
	prueba.open(princ, ios::nocreate);
	prueba.close();
	if (prueba)
	{
		// Leer los datos del disco
		disco.open(princ, ios::beg);
		cout << "\n    REPORTE DE CALIFICACIONES\n";
		disco.read((char *)&alumno, sizeof(registro)); // Lectura inicial
		while(!disco.eof())
		{
			if (alumno.apellido[0] != marca)
			{
				i++;
				cout << endl;
				cout.width(3);
				cout << i << " ";
				cout << alumno.apellido << " ";
				cout << alumno.nombre;
				cout.width(ap+nom-strlen(alumno.apellido)-
					strlen(alumno.nombre));
				cout << alumno.calif;
				suma += alumno.calif;
			}
			
			disco.read((char *)&alumno, sizeof(registro));
		}
		
		if (i > 0)
		{
			cout << endl << endl;
			cout.width(ap+nom+3);
			cout << "Promedio: ";
			cout.precision(2);
			cout.setf(ios::fixed);
			cout.width(6);
			cout << suma/i << endl;
		}
		
		else cout << "\n    El archivo está vacío\n";
	}
	
	else cout << "\n    El archivo no existe, no hay alumnos en lista\n";
}// imprimir

/* ================= existe() ==================*/
// Localizar un registro en el archivo
int existe(char cad1[], char cad2[], int &calif, long &reg)
{
	int ya = 0;
	registro temp ={0};

	ifstream disco;

	disco.open(princ);
	reg = 0L;
	disco.seekg(reg, ios::beg); // Colocarse al inicio del archivo
	disco.read((char *)&temp, sizeof(registro)); // Lectura inicial
	calif = temp.calif; // La usará el módulo retocar ('c')
	while ((!disco.eof()) && !ya)
	// strcmp devuelve 0 si las cadenas son iguales
	if (strcmp(temp.apellido, cad1) || strcmp(temp.nombre, cad2))
	{
		disco.read((char *)&temp, sizeof(registro)); // Siguiente
		calif = temp.calif;
		reg++; // Lleva cuenta del número de registros leídos
	}
	
	else ya = 1; 
	return ya;
	disco.close();
}