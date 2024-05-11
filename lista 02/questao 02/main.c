/*
Autor: Felix
Data: 11/05/2024
Descrição: O programa imprime uma figura triangular com o número de linhas informado pelo usuário.
Entrada: O número de linhas.
Saída: A figura com o número de linhas desejado.
Defesa: O número de linhas deve ser um inteiro no intervalo [1, 10].
*/

#include <stdio.h>

int main() {
	int numLinhas;

	// Solicitar o número de linhas ao usuário
	printf("Digite o número de linhas (máximo 10): ");
	scanf("%d", &numLinhas);

	// Verificar se o número de linhas é válido
	if (numLinhas < 1 || numLinhas > 10) {
		printf("Número de linhas inválido. O máximo é 10.\n");
		return 1;
	}

	// Imprimir a figura
	for (int i = 1; i <= numLinhas; i++) {
		// Imprimir os espaços em branco antes dos asteriscos
		for (int j = 1; j <= numLinhas - i; j++) {
			printf(" ");
		}

		// Imprimir os asteriscos
		for (int j = 1; j <= 2 * i - 1; j++) {
			printf("*");
		}

		printf("\n");
	}

	return 0;
}
