#include <stdio.h>
//Dept of COMEDU, CPP I Final test, Problem 1
int main () {
	int i, x, y, output;
	printf("x 입력"); 
	scanf("%d",&x);
	printf("y 입력");
	scanf("%d",&y);
	output = x;
	for (i=1; i<y; i++) {
		output = output * x;
	}
	printf("%d ^ %d = %d",x,y,output);
}

