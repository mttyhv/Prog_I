/*
Autor: Felix
Data: 03/04/2024
Descrição: O programa recebe como entrada um número de três algarismos
e informa se a soma do cubo dos seus algarismos é igual a ele próprio;
Entrada: Um inteiro de três algarismos;
Saída: Informa se o número satisfaz a relação;
Defesa: O número deve ser um inteiro positivo de três algarismos.
*/

#include <stdio.h>

int main(){
	/*Dicionário de dados*/
	int n, c, d, u;

	/*Corpo do programa*/
	//Recebe a entrada do número.
	printf("Insira um número inteiro positivo de três algarismos: \n");
	scanf("%d", &n);

	//Confere se o número é um inteiro positivo de três dígitos.
	if (n > 999 || n < 100) {
		printf("O número deve ser um inteiro positivo com três dígitos!\n");
	
		return 1;
	}

	//Separa entre centenas, dezenas e unidades.
	c = n/100;
	d = (n % 100)/10;
	u = n % 10;

	//Imprime os três algarismos na tela.
	printf("%d, %d, %d\n", c, d, u);

	//Confere a soma dos cubos.
	if (c*c*c + d*d*d + u*u*u == n) {
		printf("A soma  do cubo dos algarismos é igual ao próprio número!\n");
	} else {
		printf("O número é válido mas não atende a condição da propriedade!\n");
	}

	return 0;
}
