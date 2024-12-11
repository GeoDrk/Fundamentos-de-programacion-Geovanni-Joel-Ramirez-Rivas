//Geovani Joel Ramirez Rivas
//24041219
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int x,y=1;
	cout<<"Lectura de 5 números usando do while\n";
	do
	{
		cout<<"Dame un número que no sea 0 (intento #"<<x<<")\n";
		cin>>x;
		if(x==0)
			continue;
		y++;
	}
	while(y<6);
	system("pause");
	system("cls");
	cout<<"Lectura de 5 números emteros usando un for estándar";
		for(y=1;y=6;y++)
		{		
			cout<<"Dame un número que no sea 0 (intento #"<<y<<")\n";
			cin>>x;
		if(x==0)
			continue;
			cout<<"Por aqui solo pasa cuando el número es diferente a 0\n";
		y++;
		}
return 0;
}