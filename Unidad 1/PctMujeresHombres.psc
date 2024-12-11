//Geovanni Joel Ramirez Rivas
//24041219
Proceso PctMujeresHombres
	Definir num_hombres, num_mujeres, num_personas Como Entero;
	Definir pct_hombre, pct_mujeres Como Real;
	Escribir 'Dame la cantidad de alumnos';
	Leer num_hombres;
	Escribir 'Dame la cantidad de alumnas';
	Leer num_mujeres;
	num_personas <- num_hombres+num_mujeres;
	pct_hombre <- num_hombres*100/num_personas;
	pct_mujeres <- num_mujeres*100/num_personas;
	Escribir 'De un total de ', num_personas, ' estudiantes ';
	Escribir num_mujeres, ' Alumnas corresponden al ', pct_mujeres, '%';
	Escribir num_hombres, ' Alumnos corresponden al ', pct_hombre, '%';
FinProceso
