//Geovanni Joel Ramirez Rivas 
//24041219
#include <iostream>
#include <windows.h>
#include <stdio.h>
using namespace std;
int factorial(int n);
int main()
{
	int num;
	cout<<"Dime el numero para calcular el factorial ";
	cin>>num;
	cout<<"El factorial de: "<<num<<" es\n ";
	num=factorial(num);
	cout<<num;
}
int factorial(int n)
{
	if(n==0)
		return 1;
	else
		return n*factorial(n-1);
}