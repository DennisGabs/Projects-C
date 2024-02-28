# include <stdio.h>

void main(){
	int num;
	printf("Enter with a number: ");
	scanf("%d", &num);
	int quadrado = pow(num, 2);
	int cubo = pow(num, 3);
	printf("numero: %d,\nQuadrado: %d, \nCubo: %d", num, quadrado, cubo);
}