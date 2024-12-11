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
    int A,B,C;
    
    //Cálculo
    cout<<"Dame el valor de A: ";
    cin>>A;
    cout<<"Dame el valor de B: ";
    cin>>B;
    
    C=A;
    A=B;
    cout<<"El valor de A es: "<<A<<'\n';
    cout<<"El valor de B es: "<<C<<'\n';
    return 0;
}
