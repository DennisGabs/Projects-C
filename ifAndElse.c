#include <stdio.h>

void main(){
	int number;
	printf("Type a number: ");
	scanf("%d", &number);
	
	if(number > 10){
		printf("%d is bigger than 10.", number);
	} else {
		printf("%d is lesser than 10.", number);
	}
}