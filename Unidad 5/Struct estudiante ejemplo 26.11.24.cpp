//Geovanni Joel Ramirez Rivas 
//24041219
#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	struct Estudiante
	{
		string nombre;
		int edad;
		int calificaciones[5];
		int promedio;
	};
	Estudiante estudiante1;
	int suma=0;
	//impresión de datos
	cout<<"Dame el nombre del estudiante: ";
	getline(cin, estudiante1.nombre);
	cout<<"Cuál es su edad? ";
	cin>>estudiante1.edad;
	cout<<"Dame sus calficaciones (5 materias)\n";
	
	for(int i=0; i<5; i++)
	{
		cout<<"Calificación "<<i+1<<": ";
		cin>>estudiante1.calificaciones[i];
		suma=suma+estudiante1.calificaciones[i];
	}
	estudiante1.promedio=suma/5;
	//Mostramos la información ingresada
	cout<<"\nInformación del estudiante:\n";
	cout<<"Nombre: "<<estudiante1.nombre<<endl;
	cout<<"Edad: "<<estudiante1.edad<<endl;
	cout<<"Calificaciones\n";
	for(int i=0; i<5; i++)
	{
		cout<<"Calificación "<<i+1<<": ";
		cout<<estudiante1.calificaciones[i]<<"\n";
	}
	cout<<"Promedio: "<<estudiante1.promedio<<endl;
	cout<<"\nFin del registro\n";
	return 0;
}