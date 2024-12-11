//Geovani Joel Ramirez Rivas
//24041219
#include <stdio.h>
//Geovani Joel Ramirez Rivas
//24041219
#include <iostream>
#include <windows.h>
using namespace std;
int main(){

SetConsoleOutputCP(CP_UTF8);
SetConsoleCP(CP_UTF8);

char cad[80];
int i,j,k;

puts("Usando scanf con juegos de insección");

puts("Dame una cadena con espacios");

gets(cad);

cout<<cad<<"\n";

fflush(stdin);

puts("Dame una cadena de mayúsculas y espacios");

scanf("%[ ABCDEFGHIJKLMNOPQRSTUVWXYZ ]",cad);

puts(cad);

puts("Dame una cadena de minúsculas");

scanf("%[ a-zA-ZñÑ]");

fflush(stdin);

puts("Dame cualquier caracter y termina con enter");

scanf("%[^\n]");

fflush(stdin);

puts("Dame 3 números enteros de máximo 3 cífras");

fflush(stdin);

scanf("%3d %3d %3d",&i,&j,&k);

printf("%d %d %d",i,j,k);

return 0;
}
