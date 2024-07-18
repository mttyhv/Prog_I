typedef struct {
	int R, G, B;
} pixel;

pixel criaPixel(void);
pixel pixelSoma(pixel, pixel);
pixel pixelDif(pixel, pixel);
int candyColors(pixel);
