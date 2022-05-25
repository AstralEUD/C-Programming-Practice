#include <stdio.h>
#include <math.h>
int main () {
	int casenum, average, a, b, c, i;
	float d;
	int list[100];
	printf("Number Of Case : ");
	scanf("%d",&casenum);
	i=0;
	a=0;
	while (i!=casenum) {
		scanf("%d",&list[i]);
		a+=list[i];
		i++;	
	} // case 입력 및 평균 계산을 위한 합 
	i=0;
	b=0;
	average=a/casenum;
	printf("Average = %d\n",average);
	while (i!=casenum) {
		b+=pow((list[i] - average),2);
		i++;
	}
	c = b/casenum; // 분산 (편차의 제곱의 평균값) 
	d = sqrt(c); // 표준편차 (분산의 제곱근값) 
	printf("Standard Deviation (표준편차) : %.5f",d); 
	
}
