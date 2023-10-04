/* 3. Fazer um programa que possibilite várias opções de cálculos a partir de um menu. O programa chamará a função correspondente a cada cálculo.

[ a ] S = 1/1 + 3/2 + 5/3+........+ 99/50

[ b ] S = 1/1 - 2/2 + 3/3 -..........- 10/10

[ c ] S = 1000/1 - 997/2 + 994/3.........

[ d ] S = 480/10 - 475/11 + 470/12 - .......

[ f ] FIM

Obs.: Nas opções [c] e [d] fazer os cálculos para os 20 primeiros termos. */

#include <stdio.h>

void funcao1(void);
void funcao2(void);
float funcao3(void);
float funcao4(void);

int main(void) {
	
	int opcao = -1;
	
	while(opcao != 0) {
	
	printf("Ola, escolha uma das opcoes abaixo, e irei lhe mostrar o resultado do calculo:\n");
	printf("\n[ 1 ] S = 1/1 + 3/2 + 5/3+........+ 99/50\n");
	printf("\n[ 2 ] S = 1/1 - 2/2 + 3/3 -..........- 10/10\n");
	printf("\n[ 3 ] S = 1000/1 - 997/2 + 994/3.........\n");
	printf("\n[ 4 ] S = 480/10 - 475/11 + 470/12 - .......\n");
	printf("\n[ 0 ] FIM\n");
	
	scanf(" %i", &opcao);
	fflush(stdin);
	
	switch (opcao) {
		case 1: funcao1(); break; 
		case 2: funcao2(); break;
		case 3: printf("Resultado: %.2f\n", funcao3()); break;
		case 4: printf("Resultado: %.2f\n", funcao4()); break;
		default: break;
	}
	}
}

// Função 1 [ a ] S = 1/1 + 3/2 + 5/3+........+ 99/50

void funcao1(void) {
	
    int a=1, b=1;
    float s=0;
    while(a<=99 && b<=50) {
    	s+=(float)a/b;
    	a+=2;
    	b++;
	}
	printf("Resultado e %.2f\n",s);
}

void funcao2(void) {
	
	int i;
	float s = 0;
	
    for (i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            s -= (float)i / i;
        } else {
            s += (float)i / i;
        }
    }

    printf("\nResultado e: %.2f\n", s);
}

float funcao3(void) { // S = 1000/1 - 997/2 + 994/3.........\n

    float s = 0.0;
    int i;

    for (i = 1; i <= 20; i++) {
        float termo = ((i % 2 == 0) ? -1 : 1) * (1000.0 - (3.0 * (i - 1))) / i;
        s += termo;
    }

    return s;
}

float funcao4(void) { // S = 480/10 - 475/11 + 470/12 - .......\n

    float s = 0.0;
    int i;

    for (i = 10; i <= 29; i++) {
        float termo = ((i % 2 == 0) ? -1 : 1) * ((480.0 - (5.0 * (i - 9))) / i);
        s += termo;
    }

    return s;
}
