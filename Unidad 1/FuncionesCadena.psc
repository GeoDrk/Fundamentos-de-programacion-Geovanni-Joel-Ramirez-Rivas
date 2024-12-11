//Geovanni Joel Ramirez Rivas
//24041219
Proceso FuncionesCadena
	Definir cad1,cad2 Como Caracter;
	Definir num Como Entero;
	cad1<-"Sistemas";
	Escribir "La Longitud de " ,cad1," es: ",Longitud(cad1);
	Escribir "La Longitud de otorrinolaringologo es ",Longitud("otorrinolaringologo");
	Escribir "La primera letra de ",cad1," es: ",Subcadena(cad1,0,0);
	Escribir "La ultima letra de ",cad1," es ",Subcadena(cad1,Longitud(cad1)-1,Longitud(cad1)-1);
	Escribir "La cad1 en mayusculas es ",Mayusculas(cad1);
	Escribir "La cad1 en mayusculas es ",Minusculas(cad1);
	cad2<-Concatenar(cad1," es muy interesante");
	Escribir cad2;
	num<-ConvertirANumero("24041234");
	Escribir num+1;
	Escribir concatenar("el numero es ",ConvertirATexto(num));
	
FinProceso