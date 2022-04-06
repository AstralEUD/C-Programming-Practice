#include <stdio.h>

int main (void) {
	int k,t,n;
	t = 0;
	printf("정수 N을 입력하십시오");
	scanf("%d",&n);
	for (k=1; k<=n; k++) {
		t+=k;
	}
	// 1부터 시작 ,n 보다 작거나 같지 않는동안 반복. (start from 1, loop while not n or less than n)) 
	printf("1부터 %d까지의 합은 %d",n,t);
}
