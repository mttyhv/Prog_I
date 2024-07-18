#include <stdio.h>

double* merge_vectors(double v[], int n, double w[], int m) {
	double* u = v;
	for(int i = 0; i < m; i++)
		u[n+i] = w[i];
	for (int i = 0; i < n+m; i++)
		printf("%lf ", u[i]);
	return u;
}

double* sort_vector(double u[], int o) {
	for (int k = 0; k < o; k++) {
		for (int i = 0; i < o-k-1; i++) {
			int temp; //Variável temporária para armazenar o valor anterior de u[1+1].
			if (u[i] > u[i+1]) { //Se o número no índice "i" for maior que o número no índice "i+1", comuta seu valor com ele.
				temp = u[i+1];
				u[i+1] = u[i];
				u[i] = temp;
			}
		}
	}
	return u;
}
