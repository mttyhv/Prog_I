/*
Autor: Felix
Data: 27/03/2024
Descrição: Resolve a equação afim;
Entrada: Coeficientes reais "a" e "b" da equação "ax + b = 0";
Saída: Solução da equação, valor de "x";
Defesa: O coeficiente angular não deve ser nulo.
*/

#include <stdio.h>

int main(){
	/*Dicionário de dados*/
	float a, b;
	float x;

	/*Corpo do programa*/
	printf("Digite o coeficiente angular: ");
	scanf("%f", &a);

	printf("Digite o coeficiente linear: ");
	scanf("%f", &b);

	//Defesa para o valor de "a" não ser 0.
	if (a == 0) {
		printf("O coeficiente angular deve ser não nulo!\n");
		
		return 1;
	}

	//Calcula a raíz da equação.
	x = -b/a;
	
	//Exibe o valor numérico de "x".
	printf("A raíz dessa equação é: %.2f\n", x);

	return 0;
}
