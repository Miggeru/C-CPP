#include <stdio.h>

struct Dado {
	char nome [50];	
	int idade;
	float media;
	double numeroReal;
};

int main(void) {
	
	struct Dado dados;
	
	printf("Escreva um nome:\n");
	scanf("%s", dados.nome);
	
	printf("Escreva uma idade:\n");
	scanf("%i", &dados.idade);
	
	fflush(stdin);
	
	printf("Escreva uma media da escola:\n");
	scanf("%f", &dados.media);
	
	printf("Escreva um numero real:\n");
	scanf("%lf", &dados.numeroReal);
	
	printf("%s\n", dados.nome);
	printf("%i\n", dados.idade);
	printf("%.2f\n", dados.media);
	printf("%lf", dados.numeroReal);
}
