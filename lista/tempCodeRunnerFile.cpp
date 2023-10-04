#include <stdio.h> //ex de lista estatica (sempre o mesmo numero de posicoes) e heterogenea (tipos diferentes de dados primitivos)

typedef struct dados {
    char nome[20];
    int idade;
} Dados;


int main() {
    Dados d_array[2]; // crio uma lista com 2 posições
    int i; // contador


    //entrada de dados
    for(i = 0; i < 2; i++) {
        printf("Digite o %i nome: ", (i+1));
        scanf("%s", &d_array[i].nome);
        printf("Digite o %i idade: ", (i+1));
        scanf("%i", &d_array[i].idade);
    }

    //impressão de dados

    for(i = 0; i < 2; i++) {
        printf("\n%s tem %i anos\n", d_array[i].nome, d_array[i].idade);
    }
}