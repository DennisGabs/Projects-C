# include <stdio.h>

void main(){
	int num;
	scanf("%d", &num);
	int centena = (num / 100) * 100;
	int dezena = (num % 100) / 10 * 10;
	int unidade = (num - centena - dezena);
	printf("%d = %d + %d + %d", num, centena, dezena, unidade);
}