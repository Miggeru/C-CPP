#include <stdio.h>

#define MAX_ESPECIE 5

typedef struct animal{
	char raca[50], cor[50];
	float peso;
	char sexo[50];
} Animal;

Animal entrada_animais ();
void saida_animais ();

int main(void) {
	
	Animal esp[MAX_ESPECIE];
	int i;
	
	esp[MAX_ESPECIE] = entrada_animais();
	
	void saida_animais();
}

Animal entrada_animais () {
int i;
Animal esp[MAX_ESPECIE];

printf("Digite as 5 especies de animais e suas respectivas caracteristicas: \n");
	
	for(i = 0; i < 5; i++) {
		printf("\nInsira a raca do animal %i: \n", i + 1);
		scanf("%s", &esp[i].raca);
		fflush(stdin);
		
		printf("\nInsira a cor do animal %i: \n", i + 1);
		scanf("%s", &esp[i].cor);
		fflush(stdin);
		
		printf("\nInsira o peso do animal %i: \n", i + 1);
		scanf("%f", &esp[i].peso);
		fflush(stdin);

		printf("\nInsira o sexo do animal %i: \n", i + 1);
		scanf("%s", &esp[i].sexo);
		fflush(stdin);		
	}
	return esp[i];
}

void saida_animais (Animal esp[MAX_ESPECIE]) {
	int i;
	for(i = 0; i < 5; i++) {
		printf("O animal %i possui as seguintes informacoes:\n", i + 1);
		
		printf("Raca: %s\n", esp[i].raca);
		printf("cor: %s\n", esp[i].cor);
		printf("peso: %.1f\n", esp[i].peso);
		printf("sexo: %s\n", esp[i].sexo);
	}	
}
