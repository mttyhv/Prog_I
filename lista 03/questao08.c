#include <stdio.h>
#include <string.h>

#define MAX_PESSOAS 50
#define MAX_NOME 50

typedef struct {
    char nome[MAX_NOME];
    int idade;
    float peso;
} Pessoa;

// Função para realizar a busca binária por peso
int buscaBinariaPorPeso(Pessoa vetor[], int tamanho, float peso) {
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        if (vetor[meio].peso == peso) {
            return meio;
        } else if (vetor[meio].peso < peso) {
            inicio = meio + 1;  // Busca na metade superior
        } else {
            fim = meio - 1;  // Busca na metade inferior
        }
    }

    return -1;  // Peso não encontrado
}

int main() {
    Pessoa pessoas[MAX_PESSOAS];
    int n, i, j;

    // Leitura dos dados
    printf("Quantas pessoas deseja cadastrar (máximo %d)? ", MAX_PESSOAS);
    scanf("%d", &n);
    if (n > MAX_PESSOAS) n = MAX_PESSOAS;

    for (i = 0; i < n; i++) {
        printf("Pessoa %d:\n", i+1);
        printf("Nome: ");
        scanf(" %[^\n]", pessoas[i].nome);
        printf("Idade: ");
        scanf("%d", &pessoas[i].idade);
        printf("Peso: ");
        scanf("%f", &pessoas[i].peso);
    }

    // Ordenação por peso (ordem crescente)
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (pessoas[j].peso > pessoas[j+1].peso) {
                Pessoa temp = pessoas[j];
                pessoas[j] = pessoas[j+1];
                pessoas[j+1] = temp;
            }
        }
    }

    // Impressão do vetor ordenado
    printf("\nVetor ordenado por peso (crescente):\n");
    for (i = 0; i < n; i++) {
        printf("%s, %d anos, %.2f kg\n", pessoas[i].nome, pessoas[i].idade, pessoas[i].peso);
    }

    // Busca por peso
    float pesoBusca;
    printf("\nDigite um peso para buscar: ");
    scanf("%f", &pesoBusca);

    int indice = buscaBinariaPorPeso(pessoas, n, pesoBusca);

    if (indice != -1) {
        printf("Pessoa encontrada: %s\n", pessoas[indice].nome);
    } else {
        printf("Nenhuma pessoa encontrada com esse peso.\n");
    }

    return 0;
}
