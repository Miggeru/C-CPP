/* 2. Faça uma função que desenhe linhas de caracteres na tela, a função receberá como argumento o tipo de caractere, a quantidade de caracteres por linha a ser 
impressa e o número de linhas que deverá imprimir.

Ex: (c = ‘a’, qtd_caracteres=30, num_linhas = 2):

aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa

aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa */

#include <stdio.h>

void desenharLinhas(char caractere, int quantidade, int tamanho);

int main() {
	
    int quantidade, tamanho;
    char caractere;

    printf("Digite o caractere que deseja usar: ");
    scanf("%c", &caractere);

    printf("Digite a quantidade de linhas: ");
    scanf("%i", &quantidade);

    printf("Digite a quantidade de caracteres por linha: ");
    scanf("%i", &tamanho);

    desenharLinhas(caractere, quantidade, tamanho);

    return 0;
}

void desenharLinhas(char caractere, int quantidade, int tamanho) {
	
    int i, j;
    
    for (i = 0; i < quantidade; i++) {
        for (j = 0; j < tamanho; j++) {
            printf("%c", caractere);
        }
        printf("\n");
    }
}

