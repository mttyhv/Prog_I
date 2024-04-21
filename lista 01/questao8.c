/*
Autor: Felix
Data: 21/04/2024
Descrição: O programa calcula a quantidade de bolos que serão possíveis de serem feitos a partir da quantidade de ingredientes disponíveis para a receita.
Entrada: Números naturais associados a quantidade dos ingredientes.
Saída: A quantidade máxima de bolos que será possível fazer com os ingredientes.
Defesa: A entrada do usuário deverá ser composta de números naturais.
*/

#include <stdio.h>

int main() {
	/*Dicionário de dados*/
	int xicaras, ovos, colheres;

	//A função retorna o menor dos três inteiros definidos
	int menor_de_tres(int a, int b, int c) {
		int menor = a;
		if (b < menor) {
        		menor = b;
		}
		if (c < menor) {
			menor = c;
		}
		return menor;
	}
	
	/*Corpo do programa*/
	printf("Insira a quantidade de xícaras de farinha de trigo, ovos e colheres de sopa de leite disponíveis separadas por um espaço: ");
	scanf("%d %d %d", &xicaras, &ovos, &colheres);

	if ((xicaras >= 0) && (ovos >= 0) && (colheres >= 0)) {
		xicaras = xicaras / 2;
		ovos = ovos / 3;
		colheres = colheres / 5;
	
		int bolos = menor_de_tres(xicaras, ovos, colheres);
		printf("A quantidade máxima de bolos é: %d.\n", bolos);

	} else
		printf("Os ingredientes devem ser representados por números naturais!\n");

	return 0;
}
