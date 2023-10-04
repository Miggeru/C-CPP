#include <stdio.h>

float divisao(int a, int b);

int main(void) {
	
	int a, b;
	
	puts("Escreva um numero para A: ");
	scanf("%i", &a);
	
	puts("Escreva um numero para B: ");
	scanf("%i", &b);
	
	printf("A divisao de a e b sera de: %f", divisao(a, b));
	
	return 0;
}

float divisao(int a, int b) {
	

	float div;
	
	div = (float)a / b;
	
	return div;
}
