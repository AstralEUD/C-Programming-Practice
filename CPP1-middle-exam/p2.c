#include <stdio.h>
//
int main (void) {
	char a[100];
	char b[100];
	int i, count;
	count = 0;
	scanf("%s %s",&a[0],&b[0]);
	//a와 b 입력받음 
	for (i=0; a[i]!='\0'; i++) {
		if (a[i] == b[0]) {
			count=1;
		}
	}
	//a 배열의 i번째가 b[0]과 일치하는지 확인 
	if (count >= 1) {
		printf("True");
	} else {
		printf("false");
	}
	return count;
}
