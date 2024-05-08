#include <stdio.h>

int main() {
	float a, b;
	char operador;
	printf("Digite uma operação aritmética entre dois números a e b, no formato \"a <operação> b\":\n");
	scanf("%f %c %f", &a, &operador, &b);
	
	switch (operador) {
		case ('+'):
		printf("%.2f\n", a + b);
		break;

		case ('-'):
		printf("%.2f\n", a - b);
		break;

		case ('/'):
		printf("%.2f\n", a / b);
		break;
	
		case ('*'):
		printf("%.2f\n", a * b);
		break;

		default:
		puts("Operador não definido.");
	}

	return 0;
}
