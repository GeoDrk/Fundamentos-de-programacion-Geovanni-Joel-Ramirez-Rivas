//Geovanni Joel Ramirez Rivas
//24041219
Proceso CalifFinal
	Definir prom,final Como Real;
	Definir calif1,calif2,calif3,examfin,trabfin Como Entero;
	Escribir "Dame la calificacion 1";
	Leer calif1;
	Escribir "Dame la calificacion 2";
	Leer calif2;
	Escribir "Dame la calificacion 3";
	Leer calif3;
	Escribir "Dame la calificacion del examen final";
	Leer examfin;
	Escribir "Dame la calificacion del trabajo final";
	Leer trabfin;
	prom<-(calif1+calif2+calif3)/3;
	Escribir "El promedio del alumno es ",prom;
	final<-(prom*.55)+(examfin*.3)+(trabfin*.15);
	Escribir "La calificacion final del alumno es ",redon(final);
FinProceso
