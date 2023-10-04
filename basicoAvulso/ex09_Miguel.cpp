#include <stdio.h>

int main(void) {
	
	int n1 = 10;
	int n2 = 10;
	int soma, sub, aux; 
	float mult;
	
	//A)
	
	soma = n1 + n2;
	printf("A soma de n1 + n2 sera de:  %i\n", soma);
	
	//B)
	
	sub = n1 - n2;
	printf("A subtracao de n1 - n2 sera de: %i\n", sub);
	
	//C)
	
	aux = (n1 * 2) + (n2 * 3);
	printf("O dobro da n1 mais o triplo da n2: %i\n", aux);
	
	//D)
	
	mult = (float)n1 * n2;
	printf("A multiplicacao de n1 e n2: %f", mult);
	
	
}
