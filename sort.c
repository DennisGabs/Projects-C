#include <stdio.h>

main(){
	int a;
	int b; 
	int c;
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if(a > b){
		int t = b;
		b = a;
		a = t;
	}
	if(b > c){
		int t = c;
		c = b;
		b = t;
	}
	if(a > b){
		int t = b;
		b = a;
		a = t;
	}
	
	printf("%d %d %d", a, b, c);
}