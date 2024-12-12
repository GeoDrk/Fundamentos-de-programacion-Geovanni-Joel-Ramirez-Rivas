//Geovanni Joel Ramirez Rivas 
//24041219
#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
	struct Persona
	{
	string nombre;
	int edad;
	float altura;
	};	
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	Persona persona1;
	
	//entrada de datos
	cout<<"Escribe el nombre: ";
	getline(cin, persona1.nombre);
	cout<<"Escribe la edad ";
	cin>>persona1.edad;
	cout<<"Escribe la altura ";
	cin>>persona1.altura;
	
	cout<<endl;
	
	cout<<"Datos de la persona";
	cout<<"Nombre: "<<persona1.nombre<<endl;
	cout<<"Edad: "<<persona1.edad<<endl;
	cout<<"Altura: "<<persona1.altura<<endl;
	
	return 0;
}
