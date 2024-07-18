#include <stdio.h>
#include "pixel.h"

int main() {
	pixel P, A, B = {0, 0, 0};

	A = criaPixel();
	B = criaPixel();

	P = pixelSoma(A, B);
	printf("O valor da adição dos pixels é:\n");
	printf("%d %d %d\n", P.R, P.G, P.B);

	P = pixelDif(A, B);
	printf("O valor da subtração dos pixels é:\n");
	printf("%d %d %d\n", P.R, P.G, P.B);

	P = criaPixel();
	if(candyColors(B)) printf("O primeiro pixel possui uma cor pastel.\n");
	else printf("O primeiro pixel não possui uma cor pastel.\n");
	if(candyColors(B)) printf("O segundo pixel possui uma cor pastel.\n");
	else printf("O segundo pixel não possui uma cor pastel.\n");
	printf("%d\n", candyColors(P));
	return 0;
}
