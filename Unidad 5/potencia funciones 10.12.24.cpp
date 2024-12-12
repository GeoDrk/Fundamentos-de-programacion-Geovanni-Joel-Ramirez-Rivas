//Geovanni Joel Ramirez Rivas 
//24041219
#include <iostream>
#include <windows.h>
#include <stdio.h>
using namespace std;
int potencia(int n,int e);
int main()
{
	int num,exponente;
	cout<<"Dame el numero a elevar:\n";
	cin>>num;
	cout<<"Dame la potencia:\n";
	cin>>exponente;
	cout<<num<<" elevado a: "<<exponente<<" = "<<potencia(num,exponente);
	return 0;
}
int potencia(int n, int e)
{
	int i=1;
	int resultado=n;
	for(i=1;i<e;i++)
		resultado=resultado*n;
	return resultado;
}