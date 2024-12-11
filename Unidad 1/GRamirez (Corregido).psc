Proceso GRamirez
	//Geovanni Joel Ramirez Rivas 
	//24041219
	Definir totpart,totpuntobt,pctpuntobt,partiganados,partiperdidos,partiempatado,tempopartiganados,tempopartiperdidos,tempopartiempatado,puntdisp Como Entero;
	Definir Nombrefc Como Caracter;
	Escribir "Dime el nombre del equipo";
	Leer Nombrefc;
	Escribir "Dime cuantos partidos tienen ganados";
	Leer partiganados;
	Escribir "Dime cuantos partidos tienen perdidos";
	Leer partiperdidos;
	Escribir "Dime cuantos partidos empataron";
	Leer partiempatado;
	totpart<-partiempatado+partiganados+partiperdidos;
	Escribir "El total de partidos es ",totpart;
	tempopartiempatado<-partiempatado*1;
	tempopartiganados<-partiganados*3;
	tempopartiperdidos<-partiperdidos*0;
	totpuntobt<-tempopartiempatado+tempopartiganados+tempopartiperdidos;
	puntdisp<-totpart*3;
	Escribir "El total de puntos obtenidos del equipo ",Nombrefc, " es ",totpuntobt;
	Escribir "El total de puntos disputados es ",puntdisp;
	Escribir "El porcentaje de puntos obtenidos del equipo ",Nombrefc, " es ",redon(totpuntobt*100/puntdisp),"%, con respecto a los puntos a disponer";
	Escribir "partido ganados: ",partiganados;
	Escribir "partido ganados: ",partiperdidos;
	Escribir "partido ganados: ",partiempatado;
FinProceso