typedef struct {
	float c3, c2, c1, c0;
} polinomio;
//Exemplo de representação de polinômio pela estrutura acima (de coeficientes):
//	Para c3 = 1, c2 = 5, c1 = 4 e c0 = -3, o polinômio correspondente será:
//	x³ + 5x² + 4x - 3

typedef struct { //Raízes de um polinômio de grau 2
	 float x1, x2;
} solucao;

polinomio somaPoli(polinomio p1, polinomio p2);
polinomio derivadaPoli(polinomio p); //Ex.: derivada(x³+ 5x² + 4x - 3) = 3x² + 10x + 4
solucao raizesPoli(polinomio p); //Ex.: para x = 1, temos que x³ + 5x² + 4x - 3 = 7
