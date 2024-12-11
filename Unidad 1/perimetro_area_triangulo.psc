//Geovanni Joel Ramirez Rivas
//24041219
Proceso perimetro_area_triangulo
	Definir area,perimetro,lad1,lad2,lad3,h,base Como Real;
	Escribir "Dame la longitud del lado 1";
	Leer lad1;
	Escribir "Dame la longitud del lado 2";
	Leer lad2;
	Escribir "Dame la longitud del lado 3";
	Leer lad3;
	Escribir "Dame la longitud de la base";
	Leer base;
	Escribir "Dame la longitud de la altura";
	Leer h;
	perimetro<-lad1+lad2+lad3;
	area<-base*h/2;
	Escribir "El perimetro es: ",perimetro," y el area es ",area;
FinProceso
