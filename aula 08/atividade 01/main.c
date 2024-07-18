#include <stdio.h>
#include "polinomio.h"

int main() {
	//Declarar polinômios:
	polinomio p1, p2, q;
	//Ler polinômios:
	printf("Insira os coeficientes do primeiro polinômio:\n");
	scanf("%f %f %f %f", &p1.c3, &p1.c2, &p1.c1, &p1.c0);
	printf("Insira os coeficientes do segundo polinômio:\n");
	scanf("%f %f %f %f", &p2.c3, &p2.c2, &p2.c1, &p2.c0);
	//Adicionar polinômios:
	printf("A adição dos coeficientes dos polinômios é:\n");
	q = somaPoli(p1, p2);
	printf("%f %f %f %f\n", q.c3, q.c2, q.c1, q.c0);
	//Derivar polinômios:
	printf("A derivada do primeiro polinômio é:\n");
	q = derivadaPoli(p1);
	printf("%f %f %f\n", q.c3, q.c2, q.c1);
	printf("A derivada do segundo polinômio é:\n");	
	q = derivadaPoli(p2);
	printf("%f %f %f\n", q.c3, q.c2, q.c1);
	//Extrair as raízes dos polinômios:
	solucao s;
	printf("As raízes do primeiro polinômio são: (somente para polinômios de grau <= 2)\n");
	s = raizesPoli(p1);
	printf("%f %f\n", s.x1, s.x2);
	s = raizesPoli(p2);
	printf("As raízes do segundo polinômio são\n");
	printf("%f %f\n", s.x1, s.x2);
}

