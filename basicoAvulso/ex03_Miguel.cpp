#include <stdio.h>

int main(void) {
	
	int n, soma;
	puts("Insira o valor de n: ");
	scanf("%i", &n);
	
	for(int i = 1; i <=n; i++) {
		soma += i * i;
	}
	
	printf("O somatorio dos quadrados dos valores de um ate %i e de: %i\n", n, soma);
	
	return 0;
}
