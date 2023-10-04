#include <stdio.h>
const int n = 10; // tamanho vetor

void imprimeVetor(int *v, int contador, int posicao){
    int i;
    
    printf("%i - Vetor [ ");
    for(i = 0; i < n; i++) {
        printf("%i ", v[i]);
    }
    printf("] (posicao %i)\n", posicao);
}

int main(void){
    int vetor[n] = {2, 7, 3, 9, 4, 0, 1, 8, 6, 5}; // vetor de 10 posições

    int contador = 0, aux_n = 0, pos, troca, trocou = 1;
    int iteracoes = n - 1;

    imprimeVetor(vetor, contador, -1);

    //garante que será verificado cada posição do vetor
    while (aux_n <= n && trocou == 1){ 

        trocou = 0; // Limpa o trocou

        //verifica cada posição
        for(pos = 0; pos < iteracoes; pos++){
            if(vetor[pos] > vetor[pos + 1]){
                trocou = 1;

                troca = vetor[pos]; // variavel auxiliar para n perder o valor atual
                vetor[pos] = vetor[pos + 1]; //coloca o proximo no posicao atual
                vetor[pos + 1] = troca;
            }
            contador++;
            imprimeVetor(vetor, contador, pos);
        }
        aux_n += 1;
        iteracoes -= 1;
    }
}