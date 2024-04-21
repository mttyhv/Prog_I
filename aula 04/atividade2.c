/*
Autor: Felix
Data: 17/04/2024
Descrição: O programa imprime uma figura triangular, cujo número de linhas deve ser informado pelo usuário;
Entrada: Um número inteiro positivo;
Saída: Uma figura geométrica triangular;
Defesa: A figura não pode ultrapassar 10 linhas.
*/

#include <stdio.h>

int main(){
	/*Dicionário de dados*/
	int n, k;
	/*Corpo do programa*/
	scanf("%i", &n);

	if ((n <= 10) && (n > 0)) {
		do {
			k = n;
			do {
				printf("*");
				k = k-1;
			} while (k > 0);

			printf("\n");
			n = n-1;
		} while (n > 0);

	} else 
		printf("Erro!\n");

	return 0;
}
