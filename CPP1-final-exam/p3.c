#include <stdio.h>
//Dept of COMEDU, CPP I Final test, Problem 3
int main () {
	int temp[100];
	int n, m, i, cnt;
	printf("n 입력");
	scanf("%d",&n);
	printf("m 입력");
	scanf("%d",&m);
	printf("%d, %d => ",n,m);
	cnt = 0;
	while (n!= 0) {
		temp[cnt] = n%10;
		n = n/10;
		cnt++;
	}
	for (i=0; i<cnt-1; i++) {
		printf("%d * %d^%d + ",temp[cnt-i-1],m,cnt-i-1);
	}
	printf("%d * %d^%d",temp[cnt-i-1],m,cnt-i-1);
}
