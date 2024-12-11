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
    float prn,des,presdes,presfin;
    
    cout<<"Dame el precio del articulo: ";
    cin>>prn;
    cout<<"Dame el descuento del articulo: ";
    cin>>des;
    presdes=(prn/100)*des;
    presfin=prn-presdes;
    cout<<"El precio rebajado es: "<<presfin;
    
    return 0;
}
