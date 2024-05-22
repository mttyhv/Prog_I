#include <stdio.h>

int f(int n) {
	if (n/10 == 0)
		return n;
	return n%10 + f(n/10);
}

int main() {
	int x = 0;
	scanf("%d", &x);
	printf("%d\n", f(x));
	return 0;
}
