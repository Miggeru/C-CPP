/* 5. Criar um programa que utilize vetores para representar uma pilha de pratos em um restaurante, e permita adicionar ou remover pratos da pilha. */

#include <stdio.h>

#define TAMANHO_MAXIMO 100

int main(void) {
    int opcao, pilha_pratos[TAMANHO_MAXIMO];
    int remover_pratos = 0, adicionar_pratos = 0, sub = 0, soma = 0;
    int i = 0, tamanho_pilha = 0;
    char opcao_sair;


	while (1) {
    printf("Vc quer adicionar ou remover pratos da pilha?\n");
    printf("OBSERVACAO: 1 - Adiciona 2 - Remove (Ou 'S'' - Sair)\n");

    printf("---> ");
    scanf(" %c", &opcao_sair);

    if (opcao_sair == 'S' || opcao_sair == 's') {
        break;
    }
	opcao = opcao_sair - '0';
    scanf("%i", &opcao);

    if (opcao == 1) {
        printf("Quantos pratos vc quer adicionar: \n");
        scanf("%i", &adicionar_pratos);
        if (tamanho_pilha + adicionar_pratos <= TAMANHO_MAXIMO) {
            for (i = 0; i < adicionar_pratos; i++) {
                pilha_pratos[tamanho_pilha] = 1; 
                tamanho_pilha++;  
            }
            printf("%i pratos adicionados a pilha.\n", adicionar_pratos);
        } else {
            printf("Nao ha espaco suficiente na pilha para adicionar %i pratos.\n", adicionar_pratos);
        }
    }
    else if (opcao == 2) {
        printf("Quantos pratos vc quer remover: \n");
        scanf("%i", &remover_pratos);
	if (remover_pratos <= tamanho_pilha) {
	    for (i = 0; i < remover_pratos; i++) {
	        tamanho_pilha--;
    }
    printf("%i pratos removidos da pilha.\n", remover_pratos);
} else {
    printf("Inválido! A quantidade de pratos a remover é maior do que a disponível.\n");
}
    }

	printf("Quantidade de pratos na pilha: %i\n", tamanho_pilha);
}

    return 0;
}
