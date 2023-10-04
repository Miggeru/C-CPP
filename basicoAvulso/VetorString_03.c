/* 3. Faça um programa que possua um vetor de caracteres (aka. String) com 7 posições e valor inicial a palavra “OLA”. O programa deve executar os seguintes passos:

(a) Atribua manualmente um a um estes valores ao vetor: ‘b’, ‘r’, ‘a’, ‘s’, ‘i’, ‘l’,’\0’.

(b) Mostre na tela a palavra/vetor, utilizando WHILE() para imprimir letra por letra da palavra

(c) Converta a palavra para maiúsculo utilizando valores TABELA ASCII

Tabela ASCII: https://www.ime.usp.br/~pf/algoritmos/apend/ascii.html

(d) Substitua as letras ‘A’ pelo número 4 e “I’ pelo número 1

(e) Exclua a última letra da palavra, utilizando caractere terminador (identifica o final da String)

(f) Calcule o tamanho preenchido do Vetor (Tamanho da palavra), percorrendo-a com FOR

(g) Leia (scanf) duas letras juntas (ex: “R4” em “BR4S1L”) e informe se encontrou ou não */

#include <stdio.h>

int main(void) {
	char vetor[7] = {'o', 'l', 'a'};
	char vetorM[3];
	int i, contador = 0;
	
	vetor[0] = 'b';
	vetor[1] = 'r';
	vetor[2] = 'a';
	vetor[3] = 's';
	vetor[4] = 'i';
	vetor[5] = 'l';
	vetor[6] = '\0';
	
	// Letra A
	
	// Letra B e C
	
	while(i < 6) {
		vetor[i] = vetor[i] - 32;
		printf("%c", vetor[i]);
		i++;
	}
	
	// Letra D
	
	vetor[2] = '4';
	vetor[4] = '1';
	
	// Letra E
	
	vetor[5] = '\0';
	
	// Letra F
	
	i = 0;
	
	printf("\n\nO tamanho da palavra:\n");
	for(i = 0; i < 6; i++) {
		printf("%c\n", vetor[i]);
		contador++;
	}
	printf("%i\n", contador - 1);
	
	// Letra G - (g) Leia (scanf) duas letras juntas (ex: “R4” em “BR4S1L”) e informe se encontrou ou não
	
	printf("Escreva duas letras juntas para verificar se estao presentes na palavra: ");
	scanf("%s", &vetorM);
	
	int verificador = 0;
	for(i = 0; i < 5; i++) {
		if(vetorM[0] == vetor[i] && vetorM[1] == vetor[i+1]) {
			verificador = 1;	
		}
	}
	if (verificador) {
		printf("Esta na palavra");
	}else{
		printf("Nao esta na palavra");	
	}
	
	
}
