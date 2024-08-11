#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1000

int procuraPalavra(char texto[], char palavra[]) {
    int textoLen = strlen(texto);
    int palavraLen = strlen(palavra);

    for (int i = 0; i <= textoLen - palavraLen; i++) {
        int j;
        for (j = 0; j < palavraLen; j++) {
            if (texto[i + j] != palavra[j]) {
                break;
            }
        }
        if (j == palavraLen) {
            return i;  // Palavra encontrada, retorna o índice
        }
    }
    return -1;  // Palavra não encontrada
}

int main() {
    char texto[MAX_LENGTH];
    char palavra[MAX_LENGTH];

    // Lê o texto
    printf("Digite o texto: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = 0;  // Remove o caractere de nova linha

    // Lê a palavra
    printf("Digite a palavra a ser procurada: ");
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strcspn(palavra, "\n")] = 0;  // Remove o caractere de nova linha

    // Chama a função procuraPalavra e imprime o resultado
    int resultado = procuraPalavra(texto, palavra);
    if (resultado == -1) {
        printf("A palavra não foi encontrada no texto.\n");
    } else {
        printf("A palavra foi encontrada na posição %d do texto.\n", resultado);
    }

    return 0;
}
