//Geovani Joel Ramirez Rivas
//24041219
#include<iostream>
#include<windows.h>
#include<time.h>
using namespace std;
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	int precio,x;
	srand(time(0));
	precio=rand()%101;
	do
	{
	cout<<"Dame el precio (entre 0 y 100): ";
	cin>>x;
		if(x>precio)
			cout<<"Muy alto\n";
		else
			if(x<precio)
			   cout<<"Muy abajo\n";
			else
			cout<<"Acertaste, el precio es "<<precio;
	}
	while(x!=precio);
return 0;
}