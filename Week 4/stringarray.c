#include <stdio.h>

int main (void) {
	char a[10];
	printf("enter string: ");
	scanf("%s",&a[0]);
	// 실험을 위한 변수 입력 문장 (for test)
	printf("string = %s\n",&a[0]);
	int i;
	for (i=0; a[i]!='\0';i++) {
	}
	// i에서 출발하여, a 배열의 i번째 방이 NULL 값이 아닌동안 i를 1씩 더하며 반복 (from i to a[i] is not NULL, i plus 1)
	printf("String array's size = %d",i);
	return i;
}
