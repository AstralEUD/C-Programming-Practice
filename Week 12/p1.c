#include <stdio.h>
#include <stdlib.h>

/* Test Case:: 
3
ȫ�浿 
90 80 70
���迵 
70 60 50
����? 
50 40 30
*/
int sum1 (int *p, int n) {
	int i, s=0;
	for (i=0; i<n; i++) s=s+p[i];
	return s;
}
int main () {
	int cnt, x,y,z, t;
	float sumt[5];
	float avert = 0.0;
	char namelist[100][100] = {};
	int list[100][100];
	printf("�����? �Է��Ͻðڽ��ϱ� ? ... ");
	scanf("%d",&cnt);
	for (x=0; x<=cnt-1; x++) {
		printf("�л��̸��� �Է��Ͻʽÿ� : ");
		scanf("%s",&namelist[x]);
		printf("%s���������� �������� �������� �������� ���·� �Է� (��, ������ <=100) : ",namelist[x]);
		scanf("%d %d %d",&list[x][0], &list[x][1], &list[x][2]);
	}
	printf("�̸� | ���� | ���� | ���� | ���?\n");
	printf("�ѤѤ�+��-��+��-��+��-��+��-��\n");
	for (z=0; z<=3; z++) {
		sumt[z] = 0.0;
	}
	for (y=0; y<=cnt-1; y++) {
		avert = sum1(list[y], 3)/3;
		printf("%s�� %2d | %2d | %2d | %.2f\n",namelist[y],list[y][0],list[y][1],list[y][2],avert);
		printf("�ѤѤ�+��-��+��-��+��-��+��-��\n");
		for (z=0; z<=2; z++) {
			sumt[z] += list[y][z]; 
		}
		sumt[3] += avert;
	}
	for (x=0; x<=3; x++) {
		sumt[x] = sumt[x] / (float)cnt;
	}
	printf("���? | %.2f | %.2f | %.2f | %.2f ",sumt[0],sumt[1],sumt[2],sumt[3]);
}
