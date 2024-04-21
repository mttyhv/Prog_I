/*
Autor: Felix 
Data: 10/04/2024
Descrição: O programa identifica três possíveis símbolos e diz o que é.
Entrada: Um caractere alfanumérico.
Saída: Mensagens padrões de identificação do símbolo.
Defesa: N/A
*/

#include <stdio.h>

int main(){
	char simbolo;
	printf("Digite um caractér.\n");
	scanf("%c", &simbolo);
	switch(simbolo) {
	case '!':
		printf("Exclamação.\n");
		break;
	case '?':
		printf("Interrogação.\n");
		break;
	case '@':
		printf("O próximo símbolo é %c.\n", simbolo + 1);
		break;
	default:
		printf("Símbolo qualquer.\n");
	}

	return 0;
}
