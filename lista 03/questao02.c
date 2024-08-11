#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

// Função para inverter a string
void reverseString(char *str) {
    int length = strlen(str);
    int i, j;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        str[i] ^= str[j];
        str[j] ^= str[i];
        str[i] ^= str[j];
    }
}

int main() {
    char input[MAX_LENGTH];

    // Lê a string do teclado
    printf("Digite uma string: ");
    fgets(input, sizeof(input), stdin);

    // Remove o caractere de nova linha do final da string
    input[strcspn(input, "\n")] = 0;

    // Inverte a string
    reverseString(input);

    // Imprime a string invertida
    printf("String invertida: %s\n", input);

    return 0;
}
