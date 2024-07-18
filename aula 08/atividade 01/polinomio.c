#include "polinomio.h"
#include <math.h>

polinomio somaPoli(polinomio p1, polinomio p2) {
/*	polinomio p3;
	p3.c0 = p1.c0 + p2.c0;
	p3.c1 = p1.c1 + p2.c1;
	p3.c2 = p1.c2 + p2.c2;
	p3.c3 = p1.c3 + p2.c3;
	return p3;
*/	return (polinomio) {(p1.c3 + p2.c3) , (p1.c2 + p2.c2) , (p1.c1 + p2.c1) , (p1.c0) + (p2.c0)};
}

polinomio derivadaPoli(polinomio p) {
/*	polinomio derivada;
	derivada.c3 = 3*p.c3;
	derivada.c2 = 2*p.c2;
	derivada.c1 = p.c1;
	derivada.c0 = 0;
	return p;
*/	return (polinomio) {3*p.c3 , 2*p.c2 , p.c1 , 0};
}

solucao raizesPoli(polinomio p) {
	if ((p.c3 == 0) && (p.c2 == 0) && (p.c1 == 0))
		return (solucao) {p.c0};
	if ((p.c3 == 0) && (p.c2 == 0))
		return (solucao) {-p.c0/p.c1};
	if (p.c3 == 0)
		return (solucao) {((-p.c1 - sqrt(p.c1*p.c1 - 4*p.c2*p.c0))/2*p.c2) , ((-p.c1 + sqrt(p.c1*p.c1 - 4*p.c2*p.c0))/2*p.c2)};
	return (solucao) {0};
}
