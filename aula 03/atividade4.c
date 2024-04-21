/*
Autor: Felix
Data: 10/04/2024
Descrição: O programa que recebe duas notas e compara a média aritmética destas com um valor constante igual a 5, que representa o limiar de aprovação. Caso a média seja maior ou igual ao limiar, informa “Aprovado”, e “Reprovado” caso contrário. Para a declaração da constante, utilize o modificador const em uma variável.
Entrada: Duas notas;
Saída: Resultado: aprovação ou reprovação;
Defesa: As notas devem estar no intervalo [0, 10].
*/

#include <stdio.h>

int main() {
	/*Dicionário de dados*/
	const int limiar = 5;
	float n1, n2;
	char *resultado;
	
	/*Corpo do programa*/
	scanf("%f %f", &n1, &n2);
	if ((n1 <= 10 && n2 <= 10) && (n1 >= 0 && n2 >= 0)) {
		resultado = (n1 + n2)/2 >= limiar ? "Aprovado" : "Reprovado";	
		printf("%s!\n", resultado);
	} else 
		printf("Valor de nota inválido!\n");

	return 0;
}
