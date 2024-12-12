//Geovanni Joel Ramirez Rivas 
//24041219
#include <iostream> 
#include <windows.h>
using namespace std;
void captura(void);
int maximo(int i,int j);
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int mayor=0;
	captura();
	mayor=maximo(1, -1);
	cout<<"El mayor es "<<mayor;
	return 0;
}
void captura(void)
{
int x,y;
	cout<<"Dame un número entero";
	cin>>x;
	cout<<"Dame otro número entero";
	cin>>y;
	cout<<"El mayor es: "<<maximo(x,y)<<"\n";
}
maximo(int i, int j)
{
	if(i>j)
		return i;
	else
		return j;
return 0;
}
