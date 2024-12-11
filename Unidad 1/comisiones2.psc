//Geovanni Joel Ramirez Rivas
//24041219
Proceso comisiones2
	Definir sueldo,venta,tc,total Como Real;
	tc<-0;
	Escribir "Damee el sueldo:";
	Leer sueldo;
	Escribir "Dame la venta 1:";
	Leer venta;
	tc<-tc+venta*.1;
	Escribir "Dame la venta 3:";
	Leer venta;
	tc<-tc+venta*.1;
	Escribir "Dame la venta 3:";
	Leer venta;
	tc<-tc+venta*.1;
	total<-sueldo+tc;
	Escribir "El total de comisiones es ",tc;
	Escribir "El sueldo total es ",total;
FinProceso
