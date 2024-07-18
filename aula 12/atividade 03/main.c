#include <stdio.h>
#define TAM 3

int main() {
    int vet1[TAM] = { 1,10,100 };
    int vet2[TAM] = { 2,10,1 };
    int gate = 0; //Nossa "válvula" - TODOS os bits em 0 ou em 1 SEMPRE.
    int s = 0; //somatório (acumulador).
    for (int i = 0; i < TAM; i++) {
        //O código abaixo equivale a "if (vet1[i] >= vet2[i]) s += vet1[i]":
        gate = ~((vet1[i] - vet2[i]) >> 31);
        s += gate & vet1[i];
    }
    printf("\nMAIOR OU IGUAL\nExpectativa: %d\nRealidade = %d\n", 110, s);

    s = 0; //Zeramos o somatório
    for (int i = 0; i < TAM; i++) {
        //O código abaixo equivale a "if (vet1[i] < vet2[i]) s += vet1[i]":
        gate = (vet1[i] - vet2[i]) >> 31;
        s += gate & vet1[i];
    }
    printf("\nMENOR\nExpectativa: %d\nRealidade = %d\n", 1, s);
    //IMPLEMENTAR OS DEMAIS CASOS!

    s = 0;
    for (int i = 0; i < TAM; i++) {
        // if (vet1[i] <= vet2[i]) s += vet1[i]
        gate = ((vet1[i] - vet2[i]) >> 31);
        s += gate & vet1[i];
    }
    printf("\n MENOR OU IGUAL\nExpectativa: %d\nRealidade = %d\n", 1, s);

    return 0;
}
