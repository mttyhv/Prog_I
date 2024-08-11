#include <stdio.h>

#define GRAU 2

typedef struct {
    int coeficientes[GRAU + 1];
} Polinomio;

Polinomio lerPolinomio() {
    Polinomio p;
    printf("Digite os coeficientes (quadrático, linear, independente): ");
    scanf("%d %d %d", &p.coeficientes[0], &p.coeficientes[1], &p.coeficientes[2]);
    return p;
}

int verificarMultiplo(Polinomio p1, Polinomio p2) {
    int N;

    // Verificar se p1 = N * p2
    if (p2.coeficientes[0] != 0) {
        N = p1.coeficientes[0] / p2.coeficientes[0];
        if (N >= 2 &&
            p1.coeficientes[1] == N * p2.coeficientes[1] &&
            p1.coeficientes[2] == N * p2.coeficientes[2]) {
            return 1;
        }
    }

    // Verificar se p2 = N * p1
    if (p1.coeficientes[0] != 0) {
        N = p2.coeficientes[0] / p1.coeficientes[0];
        if (N >= 2 &&
            p2.coeficientes[1] == N * p1.coeficientes[1] &&
            p2.coeficientes[2] == N * p1.coeficientes[2]) {
            return 1;
        }
    }

    return 0;
}

int main() {
    Polinomio p1, p2;

    printf("Para o polinômio p1:\n");
    p1 = lerPolinomio();

    printf("Para o polinômio p2:\n");
    p2 = lerPolinomio();

    if (verificarMultiplo(p1, p2)) {
        printf("Verdadeiro\n");
    } else {
        printf("Falso\n");
    }

    return 0;
}
