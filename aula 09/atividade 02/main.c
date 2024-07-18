#include <stdio.h>
#include "vectors.h"

int main() {
	int n, m;
	double v[333], w[333];
	double* result;
	printf("Digite as dimensões dos dois vetores:\n");
	scanf("%d %d", &n, &m);
	int greater_dimension = n>m ? n : m;
	for (int i = 0; i < greater_dimension /*i < (n>m?n:m)*/; i++) {
		if (i < n) {
			printf("Insira a %dª posição do primeiro vetor:\n", i+1);
			scanf("%lf", &v[i]);
		}
		if (i < m) {
			printf("Insira a %dª posição do segundo vetor:\n", i+1);
			scanf("%lf", &w[i]);
		}
	}
	result = sort_vector(merge_vectors(v, n, w, m), n+m);
	for (int i = 0; i < n+m; i++) printf("%lf ", result[i]);
	printf("\n");

	return 0;
}
