#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[]) {
	int x, y;
	printf("첫번쨰 숫자를 입력하시오: ");
	scanf("%d",&x);
	printf("두번쨰 숫자를 입력하시오: ");
	scanf("%d",&y);
	printf("%d + %d = %d \n",x,y,x+y);
	// 더하기  (addition)
	printf("%d - %d = %d \n",x,y,x-y);
	// x를 y로 빼기 (Subtraction)
	printf("%d * %d = %d \n",x,y,x*y);
	// 곱하기 (Multiplication)
	printf("%d / %d = %d \n",x,y,x/y);
	// x를 y로 나누기  (division)
	return 0;
}
