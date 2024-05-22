/*
Autor: Felix
Data: 11/05/2024
Descrição: O programa imprime uma figura triangular com o número de linhas informado pelo usuário, além do seu sentido.
Entrada: O número de linhas e o sentido do triângulo.
Saída: A figura com o número de linhas e sentido desejado.
Defesa: O número de linhas deve ser um inteiro no intervalo [1, 10].
*/

#include <stdio.h>

//Dicionário de dados:
void arvore(int, int);
int linhas = 0;
int invertida = 0;

//Corpo do Programa:
int main() {
	// Solicitar o número de linhas ao usuário:
	printf("Digite o número de linhas (máximo 10): ");
	scanf("%d", &linhas);
	// Perguntar se é invertida:
	printf("Invertida? ");
	scanf("%d", &invertida);
	
	// Verificar se o número de linhas é válido
	if (linhas < 1 || linhas > 10) {
		printf("Número de linhas inválido. O máximo é 10.\n");
		return 1;
	}

	arvore(linhas, invertida);
	return 0;
}
	
void arvore(int linhas, int invertida) {
	if (invertida == 0) {
	// Imprimir a figura
		for (int i = 1; i <= linhas; i++) {
			// Imprimir os espaços em branco antes dos asteriscos
			for (int j = 1; j <= linhas - i; j++) {
				printf(" ");
			}

			// Imprimir os asteriscos
			for (int j = 1; j <= 2 * i - 1; j++) {
				printf("*");
			}

			printf("\n");
		}

	} else {
		// Imprimir a figura invertida
		for (int i = linhas; i >= 1; i--) {
			// Imprimir os espaços em branco antes dos asteriscos
			for (int j = 1; j <= linhas - i; j++) {
				printf(" ");
			}

			// Imprimir os asteriscos
			for (int j = 1; j <= 2 * i - 1; j++) {
				printf("*");
			}

			printf("\n");
		}
	}

	return;
}
