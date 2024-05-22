/*
Autor: Felix
Data: 21/04/2024
Descrição: O programa lê um valor inteiro correspondente à idade de uma pessoa (em dias) e imprime em anos, meses e dias.
Entrada: Um número natural associado aos dias.
Saída: A equivalência em anos, meses e dias.
Defesa: A entrada deve ser um número natural.
*/

#include <stdio.h>

int main() {

	/*Dicionário de dados*/	
	int n; //Quantidade totais de dias
	int anos, meses, dias;

	/*Corpo do programa*/
	printf("Insira a quantidade de dias: ");
	scanf("%d", &n);

	if (n >= 0) {
		//Operações para se obter anos, meses e dias.
		anos = n / 365;
		meses = (n % 365) / 30;
		dias = (n % 365) % 30;

		printf("A equivalência é de:\n");
		printf("%d ano(s), %d mese(es) e %d dia(s).\n", anos, meses, dias);
	} else
		printf("Erro!\n");
	
	return 0;
}
