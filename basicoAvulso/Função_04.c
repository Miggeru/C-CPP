/* 4. Faça uma função que receba como argumentos os valores dos lados de um triângulo, a função deverá retornar 0 se triângulo for equilátero, 1 se for 
isósceles ou 2 se for escaleno. */

#include <stdio.h>

float piramide(float l1, float l2, float l3);

int main(void) {
	
	float lado1, lado2, lado3;
	
	printf("Quantos o valor do lado 1: ");
	scanf("%f", &lado1);
	
	printf("Quantos o valor do lado 2: ");
	scanf("%f", &lado2);
	
	printf("Quantos o valor do lado 3: ");
	scanf("%f", &lado3);
	
	printf("%.1f", piramide(lado1, lado2, lado3));
	
}

float piramide(float l1, float l2, float l3) {
	
	if(l1 == l2 && l1 == l3) {
		printf("E um triangulo equilatero ");
		return 0;
	}else if(l1 == l2 && l1 != l3) {
		printf("E um triangulo isosceles ");
		return 1;
	}else if(l1 != l2 && l1 == l3) {
		printf("E um triangulo isosceles ");
		return 1;
	}else if(l1 != l2 && l1 != l3 && l2 == l3) {
		printf("E um triangulo isosceles ");
		return 1;
	}else if(l1 != l2 && l1 != l3 && l2 != l3) {
		printf("E um triangulo escaleno ");
		return 2;
	}
}
