/*
Autor: Felix
Data: 11/05/2024
Descrição: O programa utiliza um método para a partir de um valor inicial, chegar-se iterativamente ao valor da raiz de um número desejado.
Entrada e saída: A entrada é um número racional. A saída são 2 números: (i) o número lido, (ii) a raiz quadrada calculada com a função sqrt() da biblioteca matemática <math.h> e (iii) a raiz quadrada calculada com o método.
Defesa: N/A
*/

#include <stdio.h>
#include <math.h>

//Dicionário de dados:
double r; //Racional cuja raiz quadrada deseja ser calculada;
double x0; //Chute inicial para a raiz quadrada de "r"; e 
double Metodo(double, double); //Executa o algoritmo de Newton para calcular a raíz;

//Corpo do programa:
int main() {
	printf("Insira um número racional cuja raiz quadrada deseja ser calculada: ");
	scanf("%lf", &r);
	printf("Insira um palpite inicial para a raiz quadrada do número: ");
	scanf("%lf", &x0);
	printf("Por Metodo() é aproximadamante: %lf\n", Metodo(r, x0));
	printf("Por sqrt() é aproximadamente: %lf\n", sqrt(r));

	return 0;
}

double Metodo(double r, double x0) {
	double x = x0;
	do {
		x = x0 - (pow(x,2) - r) / (2*x0);
	} while (fabs(x-x0) < pow(10, -6));

	return x;
}
