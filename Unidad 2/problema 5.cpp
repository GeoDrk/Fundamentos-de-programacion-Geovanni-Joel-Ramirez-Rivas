//Geovani Joel Ramirez Rivas
//24041219
#include<iostream>
#include<windows.h>
#include<math.h>
using namespace std;
int main()
{
	//Carácteres especiales
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
    
	//Definición de variables
	float minutos,horas,residuo,min2;
    
	//Cálculo
	cout<<"Dame la cantidad de minutos a convertir: ";
    cin>>minutos;
    horas=trunc(minutos/60);
    residuo=(minutos/60)-trunc(minutos/60);
    min2=residuo*60;
    cout<<minutos<<" minutos equivalentes a "<<horas<<":"<<min2<<"\n";


return 0;	
}