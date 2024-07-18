#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 50

long long valores[MAX] = { 0 }; //Global

long long fib(int n) {
    static int calculos = 0;
    calculos++;
    return (n == 1 || n == 0) ? n : fib(n - 1) + fib(n - 2);
}
long long smartFib(int n) {
    static int calculos = 0;
    if (n == 1 || n == 0)
        return n;
    if (!valores[n]) {
        valores[n] = smartFib(n - 1) + smartFib(n - 2);
        calculos++;
    }
    return valores[n];
}

int main(int argc, char *argv[]) {
//    printf("%d\n", argc)

//    int n = stoi(argv[1]); //same as above
    int n, f1, f2;
    sscanf(argv[1], "%d", &n);
    if (n > 50) {
        printf("Erro!\n");
        return 1;
    }
    double tempoGasto;
    clock_t inicio;
    //RECEBER n pela main!!
    inicio = clock(); //Inicia contagem de tempo
    f1 = fib(n);
    tempoGasto = ((double)(clock() - inicio)) / CLOCKS_PER_SEC;
    printf("Fib(%d) = %d (calculado em %.3fs)\n", n, f1, tempoGasto);
    //Alocação dinâmica de um vetor de inteiros de 64 bits:
    //long long* valores = (long long*)calloc(MAX, sizeof(long long));
    inicio = clock();
    f2 = smartFib(n);
    tempoGasto = ((double)(clock() - inicio)) / CLOCKS_PER_SEC;
    printf("smartFib(%d) = %d(calculado em %.3fs)\n", n, f2, tempoGasto);
    return 0;
}
