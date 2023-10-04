#include <stdio.h> //ex de lista dinamica (snumero de posiçoes varia) e homogenea (um tipo de dado)
#include <stdlib.h>

//dados homogeneos
typedef struct lista {
    int num;
    struct lista *prox;
} Lista;


int main() {
   Lista *inicio = NULL;
   Lista *fim = NULL;
   Lista *aux = NULL;
   int i; //contador

   for(i = 0; i < 2; i++) {
    printf("Digite o %i numero: ", (i+1));
    Lista *novo = (Lista*) malloc(sizeof(Lista)); //precisa alocar na memoria
    scanf("%i", &novo->num);
    fflush(stdin);

    if(inicio == NULL){
        novo->prox = NULL;
        inicio = novo;
        fim = inicio;
    } else {
        novo->prox = inicio;
        inicio = novo;
    }
   }

   //imprime lista

   if(inicio == NULL) {
    printf("Lista vazia...");
   } else {
    aux = inicio;

    //executa ate o final da lista
    while(aux != NULL) {
        printf("%i, ", aux->num); //imprime o valor
        aux = aux->prox; // vai para o proximo da lista
    }
   }
}