/*
Autor: Felix
Data: 10/04/2024
Descrição: 
	(a) receber um inteiro e retornar -1 se ele for par e 1 se ele for ímpar;
	(b) receber um racional e retornar 1 se ele for positivo e 0 caso contrário;
	(c) receber três racionais e retornar o maior deles;
	(d) receber três racionais e retornar a média aritmética dos dois maiores;
	(e) receber um caractere e retornar:
		'm’ se ele for uma letra minúscula do alfabeto;
		‘M’ se ele for uma letra maiúscula do alfabeto;
		‘?’ se for um outro caractere qualquer.
*/

#include <stdio.h>

int main() {
	int option;
	scanf("%d", &option);
	switch (option) {
		case 1:
			int x;
			printf("Insira um inteiro.\n");
			scanf("%d", &x);
			return (x % 2 == 0) ? -1 : 1;
		case 2:
			float y;
			printf("Insira um racional.\n");
			scanf("%f", &y);
			return (y > 0) ? 1 : 0;
		case 3:
			float n1, n2, n3;
			printf("Insira três racionais.\n");
			scanf("%f %f %f", &n1, &n2, &n3);
			return (n1 > n2) && (n1 > n3) ? n1 : (n2 > n3) ? n2 : n3;
		case 4:
			float menor, media;
			printf("Insira três racionais.\n");
			scanf("%f %f %f", &n1, &n2, &n3);
			menor = (n1 < n2) && (n1 < n3) ? n1 : (n2 < n3) ? n2 : n3;
			media = (n1 + n2 + n3 - menor) / 2;
			printf("%f\n", media);
			return media;
		case 5:
			char k;
			int result;
			scanf("%c", &k);
			result = (96 < k && k < 123) ? 'm' : (64 < k && k < 91) ? 'M' : '?';
			printf("%c\n", result);
			return 0;
		default:
			printf("Opção inválida!\n");
	}
}
