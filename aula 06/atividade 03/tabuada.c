#include <stdio.h>
void tabuada (int a) {
	int i = 0;
	for (i = 1; i <= 10; i++) {
		printf("%d x %d = %d\n", a, i, a*i);
	}
}
