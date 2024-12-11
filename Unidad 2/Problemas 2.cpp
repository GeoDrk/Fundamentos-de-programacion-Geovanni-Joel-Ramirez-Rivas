//Geovanni Joel Ramirez Rivas
//24041219
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	//Calcular promedio de calificaciones
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	float c1=0.0;
	float c2=0.0;
	float c3=0.0;
	float promedio=0.0;
    cout<<"Dime la primera calificación: ";
	cin>>c1;
	cout<<"Dame la segunda calificación: ";
	cin>>c2;
	cout<<"Dame la tercera calificación: ";
	cin>>c3;
	promedio=(c1+c2+c3)/3;
    cout<<"El promedio de calificaciones es: "<<promedio;


	return 0;
}


	