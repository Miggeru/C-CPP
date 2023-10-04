#include <stdio.h>

int vetor[10];
int i = -1;

void inserir(int n) {
    i++;

    if(i >= 0 &&  i <= 9){
        vetor[i] = n;
    }else {
        printf("\nEstouro de pilha...");
    }
}

void remover() {

    int j;

    if(i >= 0 && i <= 9) {
        i--;

        printf("Removendo o valor %i.\n", vetor[0]);
        
        for(j = 0; j <= i; j++) {
            vetor[j] = vetor[j + 1];
        }
    }else {
        printf("\nEstouro de pilha...");
    }
}

void imprime(){
    int j;
    printf("\n");
    for(j = 0; j <= i; j++) {
        printf("[%i] - %i", j, vetor[j]);
    }
    printf("\n");
}

int main(void) {

    int no;

    do{
        printf("Digite um numero: ");
        scanf("%i", &no);
        fflush(stdin);

        // adicionar elementos na fila

        if (no != -1 && no != -2)
        {
            inserir(no);
            imprime();
        }

        // remover elemento da fila

        if(no == -2) {
            remover();
            imprime();
        }
        
    }while(no != -1);
}