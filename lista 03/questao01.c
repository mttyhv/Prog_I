#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 100

// Função para remover espaços e converter para minúsculas
void cleanString(char *str) {
    int i, j;
    for (i = 0, j = 0; str[i]; i++) {
        if (!isspace((unsigned char)str[i])) {
            str[j] = tolower((unsigned char)str[i]);
            j++;
        }
    }
    str[j] = '\0';
}

// Função para verificar se a string é um palíndromo
int isPalindrome(char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return 0; // Não é um palíndromo
        }
        left++;
        right--;
    }
    return 1; // É um palíndromo
}

int main() {
    char input[MAX_LENGTH];

    printf("Digite uma palavra ou frase: ");
    fgets(input, sizeof(input), stdin);

    // Remover o caractere de nova linha do final da string
    input[strcspn(input, "\n")] = 0;

    // Limpar a string (remover espaços e converter para minúsculas)
    cleanString(input);

    if (isPalindrome(input)) {
        printf("É um palíndromo!\n");
    } else {
        printf("Não é um palíndromo.\n");
    }

    return 0;
}
