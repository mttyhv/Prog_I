#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1000

void converteParaMaiusculas(char texto[]) {
    for (int i = 0; texto[i] != '\0'; i++) {
        // Verifica se o caractere é uma letra minúscula
        if (texto[i] >= 'a' && texto[i] <= 'z') {
            // Converte para maiúscula subtraindo 32
            // (diferença entre 'a' e 'A' na tabela ASCII)
            texto[i] = texto[i] - 32;
        }
    }
}

int main() {
    char texto[MAX_LENGTH];

    // Lê a string do teclado
    printf("Digite um texto: ");
    fgets(texto, sizeof(texto), stdin);

    // Remove o caractere de nova linha do final da string
    texto[strcspn(texto, "\n")] = 0;

    // Chama a função para converter para maiúsculas
    converteParaMaiusculas(texto);

    // Imprime a string convertida
    printf("Texto em maiúsculas: %s\n", texto);

    return 0;
}
