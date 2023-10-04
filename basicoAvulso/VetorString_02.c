/* 2. Construa um algoritmo que leia um vetor de 10 caracteres, e diga quantas consoantes foram lidas. Imprima as consoantes. */

#include <stdio.h>

#define TAMANHO 10

int main(void) {
	char letras[10];
	int i, cons = 0;
	
	printf("\nDigite 10 caracteres: ");
	
	for(i = 0; i < 10; i++) {
		printf("letra %i: ", i+1);
		scanf(" %c", &letras[i]);
	}
	
	printf("\nConsoantes digitadas: ");
	
	for(i = 0; i < 10; i++) {
		char letra = letras[i];
		
		if ((letra >= 'a' && letra <= 'z') || (letra >= 'A' && letra <= 'Z')) {
			if (letra != 'a' && letra != 'e' && letra != 'i' && letra != 'o' && letra != 'u' &&
				letra != 'A' && letra != 'E' && letra != 'I' && letra != 'O' && letra != 'U') {
					printf("%c", letra);
					cons++;
				}
			}
		}
		printf("\nQuantidade de consoantes: %i", cons);
		return 0;
	}

