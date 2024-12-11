//Geovani Joel Ramirez Rivas
//24041219
#include <iostream>
#include <windows.h>
#include <stdio.h> //system
using namespace std;
int main(){

SetConsoleOutputCP(CP_UTF8);  //controlar salida
SetConsoleCP(CP_UTF8); //CONTROLAR ENTRADA


//Definición de variables
char c;
char letras[20]="Hexadecimal";
int i;
float f;

i=0;
f=123.45;
c='x';


//Impresión de datos
printf("Impresión simple\n");
	printf("La variable char tiene un valor de %c\n varint=%d\n varfloat=%f\n cadena=%s",c,i,f,letras);
system("pause");
printf("Impresión:sin espacios");
printf("%d%f%c%s\n",i,f,c,letras);
printf("Impresión con etiquetas\n");
printf("Entero: %d Flotante: %f Carácter: %c Cadena: %s\n");
system("pause");

//Datos
puts("Dame un entero");
fflush(stdin);
scanf("%d",&i);

puts("Dame un flotante");
fflush(stdin);
scanf("%f",&f);

puts("Dame un carácter");
fflush(stdin);
scanf("%c",&c);

//getch(c);
puts("Dame una cadena");
fflush(stdin);
scanf("%s",&letras);

printf("Entero: %d Flotante: %f Carácter: %c Cadena: %s\n");

i=123456;
f=345.678;
puts("Probando anchos en exp: 3, 5, 8");
printf("%3d %5d %8d\n",i,i,i);
printf("%3d %5d %8d\n",1,10,20);
printf("%3d %5d %8d\n",i,i,i);
printf("%d %d %d\n",1,10,20);
system("pause");

puts("Probando anchos en exp: 3, 10, 13");
printf("%3d %5d %8d\n",i,i,i);
printf("%3d %5d %8d\n",i,i,i);
printf("%3d %5d %8d\n",i,i,i);
system("pause");

return 0;
}
