/*
Autor: Felix
Data: 17/04/2024
Descrição: O programa imprime uma figura triangular, cujo número de linhas deve ser informado pelo usuário;
Entrada: Um número inteiro;
Saída: Uma figura geométrica triangular;
Defesa: A figura não pode ultrapassar 33 linhas.
*/

#include <stdio.h>

int main(){
	/*Dicionário de dados*/
	int n, k;
	/*Corpo do programa*/
	scanf("%i", &n);

	if ((n <= 33) && (n > 0)) {
		do {
			k = n;
			do {
				printf("*");
				k = k-1;
			} while (k > 0);

			printf("\n");
			n = n-1;
		} while (n > 0);
	}
	//Transformar no oposto e ao invés de decrementar, incrementar.
	else if ((n >= -33) && (n < 0)) {
		int j = -n;
		n = 1;
		do {
			k = 0;
			do {
				printf("*");
				k = k+1;
			} while (k < n);

			printf("\n");
			n = n+1;

		} while (n <= j);

	} else 
		printf("Erro!\n");

	return 0;
}
