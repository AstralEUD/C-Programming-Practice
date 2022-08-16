#include <stdio.h>
#include <math.h>
// 함수를 사용하라는데... 뭔말인지 몰루겠
int casenum = 0;
int list[100] = {};
int average () {
	int i, a = 0;
	float r;
	for (i=0; i<wjdcasenum; i++) {
		scanf("%d",&list[i]);
		a+=list[i];
	}
	r = a/casenum;
	return r;
}
int devi(int q) {
	int i;
	float b =0;
	for (i=0; i<casenum; i++) {
		b+= (list[i] - q) * (list[i] - q);
	}
	b = b / casenum;
	b = sqrt(b);
	return b;
}
int main () {
	float q, p, t;
	printf(" How many case ? : ");
	scanf("%d",&casenum);
	q = average();
	printf("average : %f",q);
	p = devi(q);
	printf("standard deviataion (ǥ������) : %f",p);
}
