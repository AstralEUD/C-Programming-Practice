#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x, y;
	printf("첫번쨰 숫자를 입력하시오: ");
	scanf("%d",&x);
	// 첫번쨰 숫자 x를 입력받 음  (input first number, x)
	printf("두번쨰 숫자를 입력하시오: ");
	scanf("%d",&y);
	// 두번쨰 숫자 y를 입력받음 (input second number, y)
	printf("%d 와 %d 의 산술평균은 %d \n",x,y,(x+y)/2);
	// 산술평균 (arithmetic mean) =  a+b / 2 
	printf("%d 와 %d 의 조화평균은 %d \n",x,y,(2*x*y)/(x+y));
	// 조화평균 (geometric mean) = 2ab / a+b 
	return 0;
}
