//Geovani Joel Ramirez Rivas
//24041219
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	//Calcular área y circunferencia
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	float radio,area=0.0,circunferencia=0.0;
	const float PI=3.1416;
	cout<<"PI="<<PI<<"\n";
	
	cout<<fixed;
	cout.precision(4);
	cout<<"Dame el radio de un circulo: ";
	cin>>radio;
	area=PI*radio*radio;
	circunferencia=PI*radio*2;
	cout<<"Usando precision a cuatro decimales con fixed\n";
	cout<<"Para un círculo de radio: "<<radio<<"\n";
	cout<<"La circunferencia es: "<<circunferencia<<"\n";
    cout<<"Usando precision a dos decimales con printf\n";
	printf("Para un círculo de radio: %5.2f \n",radio);
	printf("el area es: %5.2f\n",area);
	printf("La circunferencia es: %5.2f",circunferencia);
	return 0;
	
}