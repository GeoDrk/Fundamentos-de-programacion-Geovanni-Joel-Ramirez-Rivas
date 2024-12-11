//Geovanni Joel Ramirez Rivas
//24041219
Proceso SueldoEmpleado
	Definir sueldo,totalcs,total,venta1,c1,venta2,c2,venta3,c3 Como Real;
	Escribir "Dame el sueldo";
	Leer sueldo;
	Escribir "Dame el importe de la venta 1";
	Leer venta1;
	Escribir "Dame el importe de la venta 2";
	Leer venta2;
	Escribir "Dame el importe de la venta 3";
	Leer venta3;
	c1<-venta1*.1;
	c2<-venta2*.1;
	c3<-venta3*.1;
	totalcs<-c1+c2+c3;
	total<-sueldo+totalcs;
	Escribir "El total por comisiones es :",totalcs;
	Escribir "El sueldo total es ",total;
FinProceso
