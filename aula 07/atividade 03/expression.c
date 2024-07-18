#include <stdio.h>
#include <math.h>

int f(int x, int n) {
	if (n <= 1)
		return -x;
	if (n % 2)
		return -1*pow(x, n) + f(x, n-1);
	return pow(x, n) + f(x, n-1);
}

//Realizar essa função sem utilizar a função "math.pow()".

int main() {
	int x, n;
	scanf("%d %d", &x, &n);
	printf("%d\n", f(x, n));
	return 0;
}
