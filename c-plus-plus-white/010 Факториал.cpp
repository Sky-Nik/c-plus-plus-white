int Factorial(int n) {
	return (n > 1) ? n * Factorial(n - 1) : 1;
}