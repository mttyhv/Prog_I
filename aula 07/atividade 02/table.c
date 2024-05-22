#include <stdio.h>

/*
void f(int n, int x) {
	if (x < 1) 
		return;
	printf("%d x %d = %d\n", n, x, n*x);
	f(n, x-1);
}
*/

void f(int n, int x) {
	if (x < 1)
		return; //Esse return quebra o último ciclo da recursiva.
	f(n, x-1);
	printf("%d x %d = %d\n", n, x, n*x);
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	f(a, b);
	return 0;
}
