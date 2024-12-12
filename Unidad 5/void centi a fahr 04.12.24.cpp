//Geovanni Joel Ramirez Rivas 
//24041219
#include <iostream>
#include <windows.h>
using namespace std;
double ctof(double centi);
double ftoc(double fahr);
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	double temperatura;
	int opcion;
	cout<<"Ingresa una temperatura ";
	cin>>temperatura;
	cout<<"Seleccione la opción deseada";
	cout<<"\n1. Cntgrados a Farhenheit\n";
	cout<<"\n2. Farhenheit a centigrados\n";
	cin>>opcion;
	switch(opcion)
	{
		case 1:
			cout<<temperatura<<" grados centigrados son "<<ctof(temperatura)<<" grados farhenheit\n";
			break;
		case 2:
			cout<<temperatura<<" grados farhenheit son "<<ftoc(temperatura)<<" grados centigrados\n";
			break;
		default:
			cout<<"Opcón inválida\n";
			
	}
		return 0;
}
double ctof(double centi)
{
	return(centi*9/5)+32;
}
double ftoc(double fahr)
{
	return (fahr-32)*5/9;
}