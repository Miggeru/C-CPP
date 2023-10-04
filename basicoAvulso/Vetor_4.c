/* 4. Faça um programa que utilize vetores para armazenar as temperaturas em diferentes pontos de um ambiente, 
e calcule a temperatura média do ambiente como um todo. */

#include <stdio.h>

int main (void) {
	
	float media, temp[3];
	int i;
	
	
	printf("Insira a temperatura (em graus celsius) de 3 lugares diferentes da sua casa, e lhe direi a media da temperatura ambiente: \n");
	
	for (i = 0; i < 3; i++) {
	printf("Ambiente %i: \n", i + 1);
	scanf("%f", &temp[i]);
	
	media += temp[i] / 3;
	}
	printf("Media da temperatura do ambiente: %.1f\n", media);
	return 0;
}
