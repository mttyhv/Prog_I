double dot_product(double v[], double w[], int n) {
	double result;
	for (int i = 0; i < n; i++)
		result += v[i]*w[i];
	return result;
}
