/*
Autor: Felix
Data: 21/04/2024
Descrição: Este código lê um caractere do teclado e, caso o mesmo seja uma letra do alfabeto, seja minúscula ou maiúscula, o mapeia sempre para a letra ‘a’.
Entrada: Um caracter do teclado.
Saída: <o que o programa retorna para o usuário>
Defesa: <possíveis restrições de entrada>
*/

#include <stdio.h>

int main(){
	/*Dicionário de dados*/
	char letra, cifra;
	int n = 0;

	/*Corpo do programa*/
	do {
		printf("Digite uma letra: ");
		if (scanf(" %c", &letra) != 1 || ((letra < 'A' || letra > 'Z') && (letra < 'a' || letra > 'z'))) {
			printf("Caractere inválido!\n");
			while (getchar() != '\n');
		} else {
			if (letra >= 'A' && letra <= 'Z')
			cifra =  (letra + 12 - 'A') % 26 + 'A';

			else if (letra >= 'a' && letra <= 'z')
			cifra = (letra + 12 - 'a') % 26 + 'a';

			printf("A cifra de '%c' é '%c'.\n", letra, cifra);
		}
		n++;
	} while (n < 3);
	return 0;
}

