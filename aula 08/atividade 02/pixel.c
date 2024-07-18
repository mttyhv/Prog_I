#include "pixel.h"
#include <stdio.h>

pixel criaPixel(void) {
	pixel P;
	do {
		printf("Insira o RGB do pixel: (somente valores entre 0 e 255)\n");
		scanf("%d %d %d", &P.R, &P.G, &P.B);
	} while ((P.R < 0) || (P.R > 255) || (P.G < 0) || (P.G > 255) || (P.B < 0) || (P.B > 255));
return P;
}

pixel pixelSoma(pixel A, pixel B) {
	pixel P;
	P.R = ((A.R + B.R) > 255) ? 255 : (A.R + B.R);
	P.G = ((A.G + B.G) > 255) ? 255 : (A.G + B.G);
	P.B = ((A.B + B.B) > 255) ? 255 : (A.B + B.B);
	return P;
}

pixel pixelDif(pixel A, pixel B) {
	pixel P;
	P.R = ((A.R - B.R) < 0) ? 0 : (A.R - B.R);
	P.G = ((A.G - B.G) < 0) ? 0 : (A.G - B.G);
	P.B = ((A.B - B.B) < 0) ? 0 : (A.B - B.B);
	return P;
}

int candyColors(pixel P) {
	int menor, maior;
	maior = ((P.R >= P.G) && (P.R >= P.B) ? P.R : (P.G >= P.B) ? P.G : P.B);
	menor = ((P.R < P.G) && (P.R < P.B) ? P.R : (P.G < P.B) ? P.G : P.B);
	if ((maior = 255) && (menor >= 192) && (menor <= 224))
		return 1;
	return 0;
}
