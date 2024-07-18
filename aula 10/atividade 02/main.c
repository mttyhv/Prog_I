#include <stdio.h>

typedef struct {
  int idade;
  int peso;
} Pessoa;

int main() {
  Pessoa clients[333];
  int n;
  printf("Digite a quantidade de pessoas: ");
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    printf("Digite a idade da pessoa e seu peso: ");
    scanf("%d %d", &(clients[i].idade), &(clients[i].peso));
  }
  for (int i = 0; i < n; i++) {
    for(int j = 0; j < n-i-1; j++) {
      Pessoa A = clients[j];
      Pessoa B = clients[j+1];
      if (A.peso > B.peso) {
	clients[j+1] = A;
	clients[j] = B;
      }
    }
  }
  for (int i = 0; i < n; i++) printf("%d %d\n", clients[i].idade, clients[i].peso);

  return 0;
}

