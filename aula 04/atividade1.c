/*
Autor: Felix
Data: 17/04/2024
Descrição: O programa recebe como entrada dois números e retorna "x" elevado a "y";
Entrada: Dois números inteiros, onde "x" é diferente de "zero" e "y" é positivo;
Saída: "x" elevado a "y"-ésima potência;
Defesa: x e y devem ser inteiros que satisfaçam as condições de entrada.
*/

#include <stdio.h>

int main(){
	/*Dicionário de dados*/
	int x, y, z = 1;

	/*Corpo do programa*/
	printf("Digite dois inteiros separados por espaço: \n");
	scanf("%i %i", &x, &y);

	if ((x != 0) && (y > 0)){
		do {
			z = z*x;
			y = y-1;
		} while (y != 0);
    
		printf("O resultado é %i.\n", z);

	} else {

		printf("Erro: %i deve ser um inteiro diferente de 0, e %i deve ser um inteiro positivo.\n", x, y);

		return 1;
	}

	return 0;
}
