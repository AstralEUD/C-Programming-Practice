#include <stdio.h>
#include <math.h>
int avg(int *list, int cnt) {
	int av=0;
	int i;
	for(i=0; i<cnt; i++) {
		av+= *list;
		list++;
	}
	return av/cnt;	
}
//��� 
float stddev (int (*list), int cnt, int avg) {
	float stddev = 0;
	int i,n;
	for (i=0; i<cnt; i++) {
		stddev += (*list - avg) * (*list - avg);
		list++;
	}
	stddev /= cnt;
	return sqrt(stddev);
}
//ǥ������ 
main () {
	int id[100], k[100], m[100], e[100];
	float kav, mav, eav;
	int *kp, *mp, *ep;
	int cnt, i, n;
	kp = k; mp = m; ep = e;
	printf("How many? : ");
	scanf("%d",&cnt);
	for (i=0; i<cnt; i++) {
		printf("����, ����, ���� ���� ���� ����� �Է��Ͻÿ�. ");
		scanf("%d %d %d",kp, mp, ep);
		kp++; mp++; ep++; 
	}
	kp = k; mp = m; ep = e;
	kav = stddev(kp, cnt, avg(kp, cnt));
	mav = stddev(mp, cnt, avg(mp ,cnt));
	eav = stddev(ep, cnt, avg(ep, cnt));
	printf("���� ǥ������ = %f\n",kav);
	printf("���� ǥ������ = %f\n",mav);
	printf("���� ǥ������ = %f\n",eav);
}
