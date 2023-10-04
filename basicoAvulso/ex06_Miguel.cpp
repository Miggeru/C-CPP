#include <stdio.h>

void mudarNumero(int *valor);

int main(void) {
	
	int numero = 50;
	
	printf("Antes de alterar: %i\n", numero);
	
	mudarNumero(&numero);
	
	printf("Depois de alterar: %i", numero);
	
}

void mudarNumero(int *valor) {
	*valor = 20;
}
