//Geovanni Joel Ramirez Rivas
//24041219
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{

	//Carácteres especiales
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

    //Variables
	int rco,rinco,rblan,calfin;
    
	//Cálculo
	cout<<"Las respuestas correctas valen 5 puntos c/u\n";
    cout<<"Las respuestas incorrectas resta 1 punto c/u\n";
    cout<<"Las respuestas en blanco valen 0 puntos c/u\n";
    cout<<"Dame la cantidad de respuestas correctas: ";
    cin>>rco;
    cout<<"Dame la cantidad de respuestas incorrectas: ";
    cin>>rinco;
    cout<<"Dame la cantidad de respuestas en blanco: ";
    cin>>rblan;
    calfin=rco*5-rinco;
    cout<<"\nLa calificación final es "<<calfin;
    
    return 0;
}
