//Geovani Joel Ramirez Rivas
//24041219
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int numh, numm, total;
	float pcth, pctm;
	//calcular asistencias y porcentajes
	cout<<"Dime la cantidad de nombres asistentes: ";
	cin>>numh;
	cout<<"Dime la cantidad de mujeres asistentes: ";
	cin>>numm;
	total=numm+numh;
    cout<<"El total de asistenctes es: "<<total<<"\n";
    pcth=numh*100/total;
    pctm=numm*100/total;
    cout<<"Hombres: "<<pcth<<"%"<<"\nMujeres: "<<pctm<<"%";
    
    return 0;
}