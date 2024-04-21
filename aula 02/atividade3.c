/*
Autor: Felix
Data: 03/04/2024 
Descrição: O programa lê  as coordenadas de um ponto (x, y) no plano cartesiano e determine em qual quadrante ele está;
Entrada: Um par ordenado na forma "x, y";
Saída: Informa o quadrante ou eixo que está localizado o ponto no plano cartesiano;
Defesa: Não há restrições de entrada.
*/

#include <stdio.h>

int main(){
	/*Dicionário de dados*/
	float x, y;
	int quadrante;
	
	/*Corpo do programa*/
	//Lê a entrada do par ordenado.
	printf("Insira o par ordenado com os números separados por um espaço: \n");
	scanf("%f %f", &x, &y);

	//Calcula se o ponto se encontra em um dos eixos.
	if (x == 0 && y == 0) {
		printf("O ponto se encontra na origem do plano cartesiano!\n");

		return 1;
	}

	if (x != 0 && y == 0) {
		printf("O ponto se encontra no eixo das abscissas!\n");

		return 2;
	}

	if (x == 0 && y != 0) {
		printf("O ponto se encontra no eixo das ordenadas!\n");

		return 3;
	}

	//Calcula o quadrante que se encontra o ponto.
	if (x > 0 && y > 0) {
		quadrante = 1;
	}

	if (x < 0 && y > 0) {
		quadrante = 2;
	}

	if (x < 0 && y < 0) {
		quadrante = 3;
	}

	if (x > 0 && y < 0) {
		quadrante = 4;	
	}
	
	//Imprime na tela a informação de qual quadrante o ponto se encontra.
	printf("O ponto se encontra no %do quadrante!\n", quadrante);

	return 0;
}
