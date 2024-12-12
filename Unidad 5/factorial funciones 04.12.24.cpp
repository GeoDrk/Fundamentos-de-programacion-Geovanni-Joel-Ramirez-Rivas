//Geovanni Joel Ramirez Rivas 
//24041219
#include <iostream>
#include <windows.h>
#include <stdio.h>
using namespace std;
int FuncionFactorial(int n);
 main()
{
	int num;
	cout<<"Dime un numero para calcular su factorial: ";
	cin>>num;
	num=FuncionFactorial(num);
	cout<<" = "<<num;
	return 0;
}
int FuncionFactorial(int n)
{
	int x;
	cout<<n;
	for(x=n-1;x>=1;x--)
	{
		cout<<" x "<<x;
		n=n*x;
	}
	return n;
}