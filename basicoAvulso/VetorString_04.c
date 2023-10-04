/* 4. Criar um programa que leia uma frase em uma string S[] (use gets(), scanf([] ou fgets()). Para as questões abaixo, NÃO devem ser usada funções prontas do C.

a. Faça uma busca por uma palavra ou parte dela (sub-string) dentro da string S e retorne se encontrou ou não como resultado (mesma lógica da letra “g” da questão 3).

b. Calcule e exiba o tamanho/quantidade de caracteres da frase/String (mesma lógica da letra “f” da questão 3).

c. Informe uma segunda frase e faça a comparação se a frase é igual à frase contida na string S.

d. Substitua o valor da string S por “catolica” (não fucionará S = “catolica”, então deverá substituir letra a letra através e adicionar ‘\0’ ao final. 
Após, testar o tamanho da nova string com a lógica da letra “b”. */

#include <stdio.h>

int main(void) {
	
	char frase[50];
	char subfrase[50];
	
	puts("Digite a frase: ");
	fgets(frase, 50, stdin);
	
	fflush(stdin);
	
	puts("\n\nQual palavra da frase vc quer encontrar: ");
	fgets(subfrase, 50, stdin);
	
	fflush(stdin);
	
	for(int i = 0; frase[i] != '\0'; i++) {
		if(frase[i] == '\n') {
			frase[i] = '\0';
			break;
		}
	}
	
	for(int i = 0; subfrase[i] != '\0'; i++) {
		if(subfrase[i] == '\n') {
			subfrase[i] = '\0';
			break;
		}
	}

	// Letra A
	
	int flagPalavra = 0;
	
	for(int i = 0; frase[i] != '\0'; i++) {
		
		int flagLetra = 1;
		
		for(int j = 0; subfrase[j] != '\0'; j++) {
			
			if(frase[i + j] != subfrase[j]){ //incrementa J assim que encontrar a primeira letra da frase na subFrase.
				flagLetra = 0;
				break;
			}
		}
		
		if(flagLetra){ //Testa se ja encontrou a subFrase para nao testar o resto da frase ate o final.
			flagPalavra = 1;
			break;
		}
	}
	
	printf(flagPalavra ? "\nSubfrase encontrada\n" : "\nSubfrase nao encontrada\n");
	
	// Letra B
	
	int contador = 0;
	
	for(int i = 0; frase[i] != '\0'; i++) {
		if(frase[i] != ' ') {
			contador++;
		}
	}
	
	printf("\nNumero de caracteres desconsiderando os espacos vazios: %i\n", contador);
			
	// Letra C
	
	char frase2[50];
	
	puts("\nDigite a frase, se for igual a primeira, irei lhe informar: ");
	fgets(frase2, 50, stdin);
	
	fflush(stdin);
	
	for(int i = 0; frase2[i] != '\0'; i++) {
		if(frase2[i] == '\n') {
			frase2[i] = '\0';
			break;
		}
	}
	
	int flagFrase2 = 0;
	
	for(int i = 0; frase[i] != '\0'; i++) {
		
		int flag4 = 1;
		
		for(int j = 0; frase2[j] != '\0'; j++) {
			
			if(frase[i + j] != frase2[j]){ //incrementa J assim que encontrar a primeira letra da frase na subFrase.
				flag4 = 0;
				break;
			}
		}
		
		if(flag4) {
			flagFrase2 = 1;
			break;
		}
	}
	printf(flagFrase2 ? "\nFrase igual\n" : "\nFrase diferente\n");
	
	// Letra D
	
	char catolica[9] = {'c', 'a', 't', 'o', 'l', 'i', 'c', 'a', '\0'};
	
	for(int i = 0; i < 9; i++) {
		
		frase[i] = catolica[i];
		if(frase[i] == '\0') break;	
	}
	
	printf("%s", frase);
	
	int count1 = 0;
	
	for(int i = 0; frase[i] != '\0'; i++) {
		if(!(frase[i] == ' ')) count1++;
	}
	
	printf("\nTamanho da nova frase: %i", count1);
	return 0;
}

	
	
	
	
	











	
//	matriz gavetas
	
/* nome[qtd_linhas][qtd_colunas];
	double gavetas[2][4];
	
	for(i=0; i<2; i++) { //linhas
		for(j=0; j<4; j++) { //colunas
			printf("%f", gavetas[i][j];
		} //4
	printf("\n"
	} //x2 */
