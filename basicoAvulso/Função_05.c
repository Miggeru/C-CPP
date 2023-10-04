/* 5. Faça um programa que simule uma calculadora. Deverão ser solicitados 2 números e a operação desejada. Para cada operação, 
deverá ser chamada uma função diferente [ex: int soma(n1,n2), float divisao(n1,n2) ]. A função deverá receber como parâmetros 
os 2 números e deverá retornar o resultado (atenção para a divisão que tem que ser float). */

#include <stdio.h>

int soma(int numx, int numy);
int subtracao(int numxx, int numyy);
float divisao(float numxx, float numyy);
int multiplicacao(int numxx, int numyy);

int main(void) {
	
	int opcao = -1;
	int x, y;
	
	while(opcao != 0) {
		
		printf("Escolha uma das opcoes abaixo:\n");
		printf("[1] - Soma\n");
		printf("[2] - Subtracao\n");
		printf("[3] - Divisao\n");
		printf("[4] - Multiplicacao\n");
		printf("[0] - Sair\n");
		scanf("%i", &opcao);
		fflush(stdin);
		
        if (opcao == 0) {
            printf("Saindo do programa.\n");
            break;
        }
	
		printf("Escolha 2 numeros para a operacao que deseja: \n");
		scanf("%i %i", &x, &y);
		
		int resultado;
		float resultado1;
		
		switch (opcao) {
			case 1: resultado = soma(x, y); printf("\nResultado: %i\n\n", resultado); break;
			case 2: resultado = subtracao(x, y); printf("\nResultado: %i\n\n", resultado); break;
			case 3: resultado1 = divisao(x, y); printf("\nResultado: %.1f\n\n", resultado1); break;
			case 4: resultado = multiplicacao(x, y); printf("\nResultado: %i\n\n", resultado); break;
			default: printf("Opcao invalida\n"); break;
		}
		
	}
	
}

int soma(int numx, int numy) {
	int soma = 0;
	int resultado;
	
	soma = numx + numy;
	return soma;
}

int subtracao(int numxx, int numyy) {
	int subtracao = 0;
	int resultado;
	
	subtracao = numxx - numyy;
	return subtracao;
}

float divisao(float numxx, float numyy) {
	float divisao;
	float resultado;
	
	divisao = numxx / numyy;
	return divisao;
}

int multiplicacao(int numxx, int numyy) {
	int multiplicacao = 1;
	int resultado;
	
	multiplicacao = numxx * numyy;
	return multiplicacao;
}
