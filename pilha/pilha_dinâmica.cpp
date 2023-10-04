#include <stdio.h>
#include <stdlib.h>

typedef struct pilha {
    int num;
    struct pilha *prox;
} PILHA;

int main(void) {
    // variaveis de controle da pilha
    PILHA *topo = NULL;
    PILHA *aux = NULL;

    int op; //variavel de operação

    do {
        system("cls");

        printf("\nMENU DE OPCOES\n");
        printf("1 - Inserir na pilha\n");
        printf("2 - Mostrar a pilha\n");
        printf("3 - Remover da pilha\n");
        printf("4 - Esvaziar a pilha\n");
        printf("5 - Sair da pilha\n");

        printf("Escolha sua opcao: ");
        scanf("%i", &op);
        fflush(stdin); //limpar buffer de entrada

        if(op < 1 || op > 5) {
            printf("Operacao invalida...\n");
			printf("Pressione qualquer tecla para continuar");
            getchar(); //espera por uma entrada do teclado
        }

        if(op == 1) {
            printf("Digite um numero: ");
            PILHA *novo = (PILHA*) malloc(sizeof(PILHA));

            scanf("%i", &novo->num);
            fflush(stdin); // limpa buffer
            novo->prox = topo;
            topo = novo;
            
            printf("Numero %i foi salvo.", novo->num);
			printf("Pressione qualquer tecla para continuar");
            getchar();
        }
        
        if (op == 2) {
        	if (topo == NULL){
        		printf("A pilha esta vazia\n");
			}else {
				aux = topo;
				
				while(aux != NULL) {
					printf("%i\n", aux->num);
					aux = aux->prox;
				}
			}
			printf("Pressione qualquer tecla para continuar");
			getchar(); //pausa codigo
		}
		
		// remover o topo
		if (op == 3) {
        	if (topo == NULL){
        		printf("A pilha esta vazia\n");
		} else {
			printf("Removendo o numero %i.\n", topo->num);
			topo = topo->prox;
		}
		printf("Pressione qualquer tecla para continuar");
		getchar();
	}

	//esvaziar pilha
		
		if (op == 4) {
		    if (topo == NULL){
	   		printf("A pilha esta vazia\n");
		} else {
			printf("Esvaziando a pilha...\n");
			topo = NULL;
		}
			printf("Pressione qualquer tecla para continuar");
			getchar();
	}
			
    }while(op != 5);
}