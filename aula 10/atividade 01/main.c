#include <stdio.h>

int main() {
  int mine[333];
  int bomb_count[333];
  int steps;
  int temp;
  printf("Quantas casas tem a sua trilha? Máximo 333.\n");
  scanf("%d", &steps);
  for (int i = 0; i < steps; i++) {
    printf("É uma mina? \"0\" ou \"1\". \n");
    scanf("%d", &temp);
    mine[i] = temp;
  }
  for (int i = 0; i < steps; i++) {
    temp = 0;
    if (i && mine[i-1]) temp++;
    if (mine[i]) temp++;
    if ((i+1 != steps) && mine[i+1]) temp++;
    bomb_count[i] = temp;
  }

  for (int i = 0; i < steps; i++) printf("%d ", bomb_count[i]);
  printf("\n");

  return 0;
}
   
