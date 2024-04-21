/*
Autor: Felix
Data: 21/04/2024
Descrição: O programa efetua operações e imprime os valores atribuídos as variáveis de acordo com seu tipo.
Entrada: N/A
Saída: O resultado das operações internas.
Defesa: N/A
*/

#include <stdio.h>

int main() {
	float p, q, r;
	int x, y;

	r = 15 / 2; //r = 7.000000
	printf("%f\n", r);

	r = r + 1.3; //r = 8.300000
	printf("%f\n", r);

	x = 2099 / 100.0; //x = 20
	printf("%d\n", x);

	y = x - 0.1; //y = 19
	printf("%d\n", y);

	p = y % 10; //p = 9.000000
	printf("%f\n", p);

	q = p + 1; //q = 10.000000
	printf("%f\n", q);

	x = q - 1.1; //x = 8
	printf("%d\n", x);

	y = x - 5; //y = 3
	printf("%d\n", y);

	y = y+y * y; //y = 12
	printf("%d\n", y);

	return 0;
}
