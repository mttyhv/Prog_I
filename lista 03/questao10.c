#include <stdio.h>
#include <stdlib.h>

void countingSort(int v[], int n, int k) {
    // Cria um array para contar as ocorrências de cada elemento
    int *count = (int *)calloc(k + 1, sizeof(int));
    if (count == NULL) {
        printf("Erro de alocação de memória\n");
        return;
    }

    // Conta as ocorrências de cada elemento
    for (int i = 0; i < n; i++) {
        count[v[i]]++;
    }

    // Modifica count[i] para conter a posição real deste elemento no array de saída
    for (int i = 1; i <= k; i++) {
        count[i] += count[i - 1];
    }

    // Cria um array temporário para armazenar o resultado
    int *output = (int *)malloc(n * sizeof(int));
    if (output == NULL) {
        printf("Erro de alocação de memória\n");
        free(count);
        return;
    }

    // Constrói o array de saída
    for (int i = n - 1; i >= 0; i--) {
        output[count[v[i]] - 1] = v[i];
        count[v[i]]--;
    }

    // Copia o array de saída de volta para v[]
    for (int i = 0; i < n; i++) {
        v[i] = output[i];
    }

    // Libera a memória alocada
    free(count);
    free(output);
}

// Função para imprimir o array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int n, k;

    printf("Digite o tamanho do array: ");
    scanf("%d", &n);

    printf("Digite o valor máximo dos elementos (k): ");
    scanf("%d", &k);

    int *v = (int *)malloc(n * sizeof(int));
    if (v == NULL) {
        printf("Erro de alocação de memória\n");
        return 1;
    }

    printf("Digite os %d elementos do array (entre 0 e %d):\n", n, k);
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
        if (v[i] < 0 || v[i] > k) {
            printf("Elemento inválido. Deve estar entre 0 e %d.\n", k);
            free(v);
            return 1;
        }
    }

    printf("Array original: ");
    printArray(v, n);

    countingSort(v, n, k);

    printf("Array ordenado: ");
    printArray(v, n);

    free(v);
    return 0;
}
