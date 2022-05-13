#include <stdio.h>
// 몫과 나머지 같은 피제수와 제수 구하기 
int main () {
	int a,b;
	a = 0; b = 0; 
	while (a<100) { //a가 100 이 되기 전까지.. 
		a++;
		b=1;
		while (a>b) {
			if ((a%b) == (a/b)) {
				printf("Success: %d / %d = %d ... %d \n",a,b,a/b,a%b);
			}
			b++;
		}
	}
}
