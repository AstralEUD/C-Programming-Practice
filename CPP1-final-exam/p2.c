#include <stdio.h>
//Dept of COMEDU, CPP I Final test, Problem 2
int main () {
	int temp[1000] = {};
	int cnt, realn, n, m, output, i, p, q;
	printf("n ют╥б");
	scanf("%d",&realn);
	n = realn;
	cnt = 0;
	while (n != 0) {
		temp[cnt] = n%10;
		n = n/10;
		cnt++;
	}
	m=0;
	for (i=0; i!=cnt; i++) {
		q=1;
		for (p=1; p<(cnt-i); p++) {
			q=q*10;
		}
		m += temp[i] * q;
	}
	printf("n(%d) + m(%d) = %d",realn,m,realn+m);
}
