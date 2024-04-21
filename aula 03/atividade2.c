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

/*As partes do código fonte abaixo estão comentadas porque cada escopo deve retornar um valor para a função "main". Espera-se que no futuro seja corrigido dividindo em funções a serem solicitadas pela "main" quando estudarmos sobre funções e bibliotecas.*/

int main() {
	//(a)
	/*
	int x;
	scanf("%d", &x);
	return (x % 2 == 0) ? -1 : 1;
	*/

	//(b)
	/*
	float y;
	scanf("%f", &y);
	return (y > 0) ? 1 : 0;
	*/

	//(c)
	/*
	float x, y, z;
	scanf("%f %f %f", &x, &y, &z);
	return (x > y) && (x > z) ? x : (y > z) ? y : z;
	*/

	//(d)
	/*
	float x, y, z;
	float menor, media;

	scanf("%f %f %f", &x, &y, &z);
	menor = (x < y) && (x < z) ? x : (y < z) ? y : z;
	media = (x + y + z - menor) / 2;

	printf("%f\n", media);
	return 0;
	*/

	//(e)
	/*
	char x;
	int result;
	scanf("%c", &x);
	result = (96 < x && x < 123) ? 'm' : (64 < x && x < 91) ? 'M' : '?';
	printf("%c\n", result);
	return 0;
	*/
}

