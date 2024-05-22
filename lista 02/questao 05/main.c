/*
Autor: Felix
Data: 11/05/2024
Descrição: O programa que lẽ um número natural "n" e dois números naturais "a" e "b" diferentes de 0 e apresenta na tela em ordem crescente os "n" primeiros naturais que são múltiplos de "a" ou de "b".
Entrada: Três inteiros "n", "a" e "b".
Defesa: "n", "a," e "b" devem ser números naturais.
*/

#include <stdio.h>

//Dicionário de dados:
int ehMultiplo(int, int);
void multiplos(int, int, int);
int n, a, b;

//Corpo do programa:
int main() {
	do {
		scanf("%d %d %d", &n, &a, &b);
	} while ((n < 1) && (a < 1) && (b < 1));
//Repete o input até "n", "a" e "b" serem números naturais.

	multiplos(n, a, b); 
	printf("\n");

	return 0;
}

void multiplos(int q, int x, int y) {
	for (int i = 0, j = 0; j < q; i++) {
		if (ehMultiplo(i, x) == 1) {
			printf("%d ", i);
			j++;
		} else if (ehMultiplo(i, y) == 1) {
			printf("%d ", i);
			j++;
		}
	}
}

int ehMultiplo(int r, int s) {
	if (r % s == 0)
		return 1;
	else 
		return 0;
}
