#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int numDigitos(int x) {
    // Caso base: se x for 0, retorna 1 (0 tem um dígito)
    if (x == 0) return 1;

    // Caso base: se x for entre -9 e 9, retorna 1
    if (x > -10 && x < 10) return 1;

    // Chamada recursiva: remove o último dígito e adiciona 1
    return 1 + numDigitos(x / 10);
}

double sqrtNewton(double n, double guess, double epsilon) {
    double next_guess = (guess + n / guess) / 2;

    // Caso base: se a diferença entre as estimativas for menor que epsilon
    if (fabs(next_guess - guess) < epsilon)
        return next_guess;

    // Chamada recursiva com a nova estimativa
    return sqrtNewton(n, next_guess, epsilon);
}

// Função wrapper para iniciar a recursão
double sqrt(double n) {
    return sqrtNewton(n, 1.0, 0.00001);
}

double harmonico(int n) {
    // Caso base
    if (n == 1) return 1.0;

    // Chamada recursiva
    return 1.0 / n + harmonico(n - 1);
}

int main() {
    int N;
    printf("Digite um valor para N (<=100): ");
    scanf("%d", &N);

    if (N <= 0 || N > 100) {
        printf("N deve ser um número entre 1 e 100.\n");
        return 1;
    }

    printf("H%d = %f\n", N, harmonico(N));
    return 0;
}
