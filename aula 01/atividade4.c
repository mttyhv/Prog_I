/*
Autor: Felix
Data: 27/03/2024 
Descrição: Calcula a área da coroa circular formada por dois círculos;
Entrada: Raio dos dois círculos;
Saída: Área da coroa circular;
Defesa: O raio tem que ser um número racional maior do que zero.
*/

#include <stdio.h>
//É possível definir o valor de pi nesse espaço, atribuindo #define pi 3.14
//Nesse caso, será colocado um binário no código e será poupado acesso a memória principal ao reduzir uma variável.

int main(){
	/*Dicionário de dados*/
	float pi = 3.14;
	float r1, r2;
	float area;

	/*Corpo do programa*/

	//Recebe os valores de entrada associados ao raio de cada círculo.
	printf("Insira os raios dos dois círculos separado por um espaço: \n");
	scanf("%f %f", &r1, &r2);

	//Defesa para os raios serem maiores do que 0.
	if (r1 <= 0 || r2 <= 0) {
		printf("Os raios devem ser maiores do que zero!\n");

		return 1;
	}

	//Compara o raio dos círculos.
	if (r1 > r2) {
		area = pi * (r1*r1 - r2*r2);
	} else {
		area = pi * (r2*r2 - r1*r1);
	}

	//Imprime o resultado na tela.
	printf("A área da coroa circular é: %.2f\n", area);

	return 0;
}	
