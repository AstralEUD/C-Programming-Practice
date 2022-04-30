#include <stdio.h>

int main (void) {
	int n, i, t, cnt, p;
	cnt = 0;
	printf("n과 p입력: ");
	scanf("%d %d",&n,&p);
	for (i=0; i<=n; i++) {
		t=i;
		//i부터 시작하여, n보다 작거나 같기 전까지 반복
		//t는 아래 while문을 위한 임시 변수 
		while (t!=0) {
			//t는 나머지 연산만 하기에, t의 몫이 0이 아닌동안 반복 (== 0이 되면 중단) 
			if (t%10 == p) {
				//t를 10으로 나눴을때의 나머지가 p면....  
				cnt++;
				//그 수가 p가 나온것이므로 카운트 추가. 
			}
			t=t/10;
			//t가 30, 300, 3000이 나올때, 즉 일의 자리 수를 제외한 곳에서 p가 나올때를 위한 재반복 함수 
		}
	}
	printf("%d가 나온 횟수 : %d",p,cnt);
}
