#include <stdio.h>

#define SIZE 3

// Função para calcular o determinante usando a Regra de Sarrus
int calcularDeterminante(int matriz[SIZE][SIZE]) {
    int det = 0;

    // Produtos positivos
    det += matriz[0][0] * matriz[1][1] * matriz[2][2];
    det += matriz[0][1] * matriz[1][2] * matriz[2][0];
    det += matriz[0][2] * matriz[1][0] * matriz[2][1];

    // Produtos negativos
    det -= matriz[0][2] * matriz[1][1] * matriz[2][0];
    det -= matriz[0][0] * matriz[1][2] * matriz[2][1];
    det -= matriz[0][1] * matriz[1][0] * matriz[2][2];

    return det;
}

int main() {
    int matriz[SIZE][SIZE];

    // Leitura da matriz
    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Exibição da matriz
    printf("\nMatriz inserida:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Cálculo e exibição do determinante
    int determinante = calcularDeterminante(matriz);
    printf("\nO determinante da matriz é: %d\n", determinante);

    return 0;
}
