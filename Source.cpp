// Return the nth row of Pascal Triangle
#include <iostream>

int factorial(int n) {
	if (n == 0 || n == 1) return 1;
	else return n * factorial(n - 1);
}

int newtonBinomial(int n, int k) {
	return factorial(n) / (factorial(k) * factorial(n - k));
}

void nthPascalTriangleRow(int n) {
	int* row = new int[n + 1];
	for (int i = 0; i < n+1; i++)
	{
		row[i] = newtonBinomial(n, i);
	}
	for (int i = 0; i < n+1; i++)
	{
		std::cout << row[i] << " ";
	}
}

int main() {
	int n, k;
	std::cout << "n = ";
	std::cin >> n;
	nthPascalTriangleRow(n);
}