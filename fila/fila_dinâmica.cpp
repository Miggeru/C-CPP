#include <stdio.h>
#include <stdlib.h>

typedef struct fila {
	int num;
	struct fila *prox;
} FILA;

void informa() {
	printf("\n(pressione qualquer tecla para continuar)");
	getchar(); // adiciona uma pausa
}

int main (){
	// variáveis de controle da fila
	FILA *inicio = NULL;
	FILA *fim = NULL;
	FILA *aux = NULL;
	
	int op;
	
	do {
		system("cls");
		
		printf("\nMENU DE OPCOES\n");
		printf("1 - Inserir na fila\n");
		printf("2 - Mostrar a fila\n");
		printf("3 - Remover da fila\n");
		printf("4 - Esvaziar a fila\n");
		printf("5 - Sair...\n");
		
		printf("Escolha sua opcao: ");
		scanf("%i", &op);
		fflush(stdin); //limpar o buffer de entrada
		
		if (op < 1 || op > 5) {
			printf("Operacao invalida...");
			informa();
		}
		
		if (op == 1) {
			printf("Digite um numero: ");
			FILA *novo = (FILA*) malloc(sizeof(FILA));
			
			scanf("%i", &novo->num);
			fflush(stdin); // limpa o buffer de entrada
			novo->prox = NULL;
			
			if (inicio == NULL) {
				inicio = novo;
			} else {
				fim->prox = novo;
			}
			fim = novo;
			
			printf("O numero %i foi salvo.", novo->num);
			informa();
		}
		
		// mostra a fila
		if (op == 2) {
			if (inicio == NULL) {
				printf("A fila esta vazia.");
			} else {
				aux = inicio;
				
				while(aux != NULL) {
					printf("%i ", aux->num);
					aux = aux->prox;
				}
			}
			informa();
		}
		
		if (op == 3) {
			if (inicio == NULL) {
				printf("A fila esta vazia.");
			} else {
				printf("\nRemovendo o valor %i.", inicio->num);
				inicio = inicio->prox;
			}
			informa();
		}
		
		// esvaziar a fila
		if (op == 4) {
			if (inicio == NULL) {
				printf("A fila esta vazia.");
			} else {
				printf("\nEsvaziando a fila.");
				inicio = NULL;
			}
			informa();
		}
		
	} while (op != 5);
}