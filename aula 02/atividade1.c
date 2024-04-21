/*
Autor: Felix
Data: 03/04/2024
Descrição: O programa recebe como entrada três notas e retorna a média aritmética entre os dois maiores valores;
Entrada: Três notas de avaliações;
Saída: A média aritmética entre os dois maiores valores com duas casas decimais arredondadas;
Defesa: O valor numérico das notas não podem ser menores do que 0 e maior do que 10.
*/

#include <stdio.h>

int main(){
	/*Dicionário de dados*/
	float nota_1, nota_2, nota_3;
	float maior_1, maior_2;
	float media;
//Para descobrir as duas maiores, basta calcular a menor nota. Nesse caso, é mais conveniente atribuir uma variável "menor"

	/*Corpo do programa*/
	printf("Digite a primeira nota: ");
	scanf("%f", &nota_1);

	printf("Digite a segunda nota: ");
	scanf("%f", &nota_2);

	printf("Digite a terceira nota: ");
	scanf("%f", &nota_3);

	//Defesa para as notas não serem menores que 0
	if (nota_1 < 0 || nota_2 < 0 || nota_3 < 0) {
		printf("A nota não pode ser menor do que 0!\n");
		
		return 1;
	}

	//Defesa para as notas não serem maiores do que 10
	if (nota_1 > 10 || nota_2 > 10 ||nota_3 > 10) {
		printf("A nota não pode ser maior do que 10!\n");
		
		return 1;
	}

	//Determinando as duas maiores notas
	if (nota_1 >= nota_2 && nota_1 >= nota_3) {
		maior_1 = nota_1;
		if (nota_2 >= nota_3) {
			maior_2 = nota_2;
		} else {
			maior_2 = nota_3;
		}
	}

	if (nota_2 >= nota_1 && nota_2 >= nota_3) {
		maior_1 = nota_2;
		if (nota_1 >= nota_3) {
			maior_2 = nota_1;
		} else {
			maior_2 = nota_3;
		}
	}

	if (nota_3 >= nota_1 && nota_3 >= nota_2) {
		maior_1 = nota_3;
		if (nota_1 >= nota_2) {
			maior_2 = nota_1;
		} else {
			maior_2 = nota_2;
		}
	}

	media =  (maior_1 + maior_2)/2;
	printf("As notas digitadas foram: %.2f, %.2f e %.2f\n", nota_1, nota_2, nota_3);
	printf("A média entre as duas maiores notas é: %.2f\n", media);

	return 0;
}
