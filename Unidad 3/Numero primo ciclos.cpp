//Geovani Joel Ramirez Rivas
//24041219
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int x,div,n;
	float resid;
	do
	{
	cout<<"Dame un número que sea primo: ";
	cin>>x;
	n=x;
	div=n/x;
	resid=n%x;
			if(x==n)
			{
	cout<<"El número "<<x<<" Es primo y su residuo es "<<resid<<"\n";
			}
		else
		{
		cout<<"El número no es primo\n";
		}
	}
	while(0==resid);
return 0;	
}