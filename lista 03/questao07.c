#include <stdio.h>
#include <string.h>

#define MAX_PESSOAS 50
#define MAX_NOME 50

typedef struct {
    char nome[MAX_NOME];
    int idade;
    float peso;
} Pessoa;

// Função para realizar a busca binária
int buscaBinaria(Pessoa vetor[], int tamanho, int idade) {
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        if (vetor[meio].idade == idade) {
            return meio;
        } else if (vetor[meio].idade < idade) {
            fim = meio - 1;  // Busca na metade superior (lembre-se, está em ordem decrescente)
        } else {
            inicio = meio + 1;  // Busca na metade inferior
        }
    }

    return -1;  // Idade não encontrada
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

    // Ordenação por idade (ordem decrescente)
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (pessoas[j].idade < pessoas[j+1].idade) {
                Pessoa temp = pessoas[j];
                pessoas[j] = pessoas[j+1];
                pessoas[j+1] = temp;
            }
        }
    }

    // Impressão do vetor ordenado
    printf("\nVetor ordenado por idade (decrescente):\n");
    for (i = 0; i < n; i++) {
        printf("%s, %d anos, %.2f kg\n", pessoas[i].nome, pessoas[i].idade, pessoas[i].peso);
    }

    // Busca por idade
    int idadeBusca;
    printf("\nDigite uma idade para buscar: ");
    scanf("%d", &idadeBusca);

    int indice = buscaBinaria(pessoas, n, idadeBusca);

    if (indice != -1) {
        printf("Pessoa encontrada: %s\n", pessoas[indice].nome);
    } else {
        printf("Nenhuma pessoa encontrada com essa idade.\n");
    }

    return 0;
}
