#include <stdio.h>
#include "dot_product.h"

int main() {
	double v[10];
	double w[10];
	int n;

	printf("Insira a dimensão do vetor:\n");
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		printf("Insira a %dª posição do primeiro vetor:\n", i+1);
		scanf("%lf", &v[i]);
		printf("Insira a %dª posição do segundo vetor:\n", i+1);
		scanf("%lf", &w[i]);
	}

	printf("O produto escalar entre os vetores é: %lf\n", dot_product(v, w, n));

	return 0;

}


