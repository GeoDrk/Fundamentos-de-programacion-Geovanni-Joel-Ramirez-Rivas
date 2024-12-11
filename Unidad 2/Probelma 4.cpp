//Geovani Joel Ramirez Rivas
//24041219
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	//Carácteres especiales
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

    //Definición de variables
	float L1,L2,area,perimetro;
    cout<<"Dame el valor de lado 1: ";
    cin>>L1;
    
	//Cálculo del área y perímetro del triángulo
	cout<<"Dame el valor de lado 2: ";
    cin>>L2;
    area=(L1*L2)/2;
    perimetro=L1+L2;
    cout<<"El área mide: "<<area<<"\n";
	cout<<"El perímetro mide: "<<perimetro<<"\n";
	
    
return 0;
}