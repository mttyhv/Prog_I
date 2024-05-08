#include "leds.h"
int totalLEDS(int a) {
	int qtd = 0;
	int alg;
	do {
		alg = a % 10;
		qtd += ledsAlgarismo(alg);
		a = a/10;
	} while (a > 0);
	return qtd;
}
