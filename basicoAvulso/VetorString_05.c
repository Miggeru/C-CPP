/* 5. Criar um programa que leia uma palavra[20] com fgets(), guarde na vari�vel palavra e imprima na tela o seguinte texto (tudo na mesma linha):

Sa�da ----> �Palavra <palavra> lida com fgets()�.

(dica: Ser� necess�rio retirar o �\n� ao final da vari�vel <palavra>). */

#include <stdio.h>

int main(void) {
	
	char palavra[20];
	int i;
	
	puts("Digite sua palavra e irei ler com fgets: \n");
	fgets(palavra, 20, stdin);
	
	for(i = 0; palavra[i] != '\0'; i++){
		if(palavra[i] == '\n'){
			palavra[i] = '\0';
			break;
		}
	}
	printf("Saida ----> palavra '%s' lida com fgets()", palavra);
	return 0;	
}
