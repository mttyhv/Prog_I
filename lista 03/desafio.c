#include <stdio.h>
#include <stdlib.h>

// Função para mesclar duas metades ordenadas do vetor
void merge(int v[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    // Cria vetores temporários
    int *L = (int*)malloc(n1 * sizeof(int));
    int *R = (int*)malloc(n2 * sizeof(int));

    // Copia dados para os vetores temporários L[] e R[]
    for (i = 0; i < n1; i++)
        L[i] = v[l + i];
    for (j = 0; j < n2; j++)
        R[j] = v[m + 1 + j];

    // Mescla os vetores temporários de volta em v[l..r]
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            v[k] = L[i];
            i++;
        } else {
            v[k] = R[j];
            j++;
        }
        k++;
    }

    // Copia os elementos restantes de L[], se houver
    while (i < n1) {
        v[k] = L[i];
        i++;
        k++;
    }

    // Copia os elementos restantes de R[], se houver
    while (j < n2) {
        v[k] = R[j];
        j++;
        k++;
    }

    // Libera a memória alocada para os vetores temporários
    free(L);
    free(R);
}

// Função mergeSort
void mergeSort(int v[], int l, int r) {
    if (l < r) {
        // Encontra o ponto médio
        int m = l + (r - l) / 2;

        // Ordena a primeira e a segunda metade
        mergeSort(v, l, m);
        mergeSort(v, m + 1, r);

        // Mescla as metades ordenadas
        merge(v, l, m, r);
    }
}

// Função para imprimir um vetor
void printArray(int A[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

// Programa principal para testar a função mergeSort
int main() {
    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int *v = (int*)malloc(n * sizeof(int));
    if (v == NULL) {
        printf("Erro de alocação de memória\n");
        return 1;
    }

    printf("Digite os %d elementos do vetor:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    printf("Vetor original: ");
    printArray(v, n);

    mergeSort(v, 0, n - 1);

    printf("Vetor ordenado: ");
    printArray(v, n);

    free(v);
    return 0;
}
