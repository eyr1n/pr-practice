#include <stdio.h>

int multiply(int a, int b) {
	return a * b;
}

int main(void) {
	int a = 3;
	int b = 4;
	printf("%d * %d = %d\n", a, b, multiply(a, b));
	return 0;
}
