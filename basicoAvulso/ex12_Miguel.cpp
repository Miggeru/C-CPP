#include <stdio.h>

int main(void) {
	
	int x;
	
	puts("Escreva um valor para X: ");
	scanf("%i", &x);
	
	for(int i = 0; i <= x; i++) {
		if(i % 2 == 0 || i % 6 == 0) {
			printf("\nOs numeros pares ou multiplos de 6 entre 0 e %i sao: %i", x, i);
		}
	}
}
