/*
Autor: Felix
Data: 27/03/2024
Descrição: Dados três números inteiros, retorna o maior;
Entrada: Os três números inteiros;
Saída: O maior número encontrado;
Defesa: Não se aplica pois não há restrições de entrada.
*/

#include <stdio.h>

int main(){
	/*Dicionário de dados*/
	int a, b, c;
	int maior;

	/*Corpo do programa*/
	//Obtém os três números
	printf("Digite os três números separados por espaço: \n");
	scanf("%d %d %d", &a, &b, &c);

	//Encontra o maior número
	if ((a > b) && (a > c)) {
		maior = a;
	}
	else if (b > c) {
		maior = b;
	} else {
		maior = c;
	}

	//Exibe o resultado
	printf("O maior número é: %d \n", maior);

	return 0;
}
