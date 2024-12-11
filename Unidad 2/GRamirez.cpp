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
	
	//variables
	float cal1,cal2,cal3,caltot,pctcal1,pctcal2,pctcal3;
	
	//Captura de datos
	cout<<"El rango válido de calificaciones es de 0 a 100\n";
	cout<<"La primera evaluación tiene un valor de 10% de la calificación total\n";
	cout<<"La segunda evaluación tiene un valor de 10% de la calificación total\n";
	cout<<"La tercera evaluación tiene un valor de 80% de la calificación total\n";
	
	cout<<"\nProporcioname la primera calificación: ";
	cin>>cal1;
	cout<<"Proporcioname la segunda calificación: ";
	cin>>cal2;
	cout<<"Proporcioname la tercera calificación: ";
	cin>>cal3;
	
	//Operaciones
	cout<<fixed;
	cout.precision(0);
	pctcal1=(cal1*10)/100;
	pctcal2=(cal2*10)/100;
	pctcal3=(cal3*80)/100;
	caltot=pctcal1+pctcal2+pctcal3;

    //Imprimir datos
	cout<<"El porcentaje de la primera calificación es: "<<pctcal1<<"\n";
	cout<<"El porcentaje de la segunda calificación es: "<<pctcal2<<"\n";
	cout<<"El porcentaje de la tercera calificación es: "<<pctcal3<<"\n";
	cout<<"El porcentaje de la calificación total es: "<<caltot<<"\n";
	
	return 0;
	}