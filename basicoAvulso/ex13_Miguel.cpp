#include <stdio.h>

int main(void) {
    int numero;
    int fatorial = 1; //está limitado pois estou usando int

    printf("Digite um numero: ");
    scanf("%i", &numero);

    if (numero < 0) {
        printf("Nao e possivel calcular o fatorial de numeros negativos.\n");
    } else {
        for (int i = 1; i <= numero; i++) {
            fatorial *= i;
        }
        
        printf("O fatorial de %i e: %d\n", numero, fatorial);
    }

    return 0;
}
