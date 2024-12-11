//Geovanni Joel Ramirez Rivas
//24041219
Proceso IntercambioValor
	Definir A,B,tempo Como Entero;
	Escribir "Dame el valor de A";
	Leer A;
	Escribir "Dame el valor de B";
	Leer B;
	tempo<-B;
	B<-A;
	A<-tempo;
	Escribir "El valor de A es ",A;
	Escribir "el valor de B es ",B;
FinProceso
