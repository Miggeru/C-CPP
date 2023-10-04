#include <stdio.h>

int main() {

    int lista[10]; //lista estática (numero fixo de opcoes) e homogenea (somente um tipo de variavel) de 10 posições
    int i; //contador

    //recebendo dados

    for(i = 0; i < 10; i++) {
        printf("Digite a %i posicao: ", i);
        scanf("%i", &lista[i]);
        fflush(stdin); //limpa buffer de entrada
    }
    printf("\n");
    //exibindo dados
    for(i = 0; i < 10; i++) {
        printf("Lista[%i] = %i\n", i, lista[i]);
    }
}