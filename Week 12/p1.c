#include <stdio.h>
#include <stdlib.h>

/* Test Case:: 
3
홍길동 
90 80 70
생김영 
70 60 50
상손호 
50 40 30
*/

//초기화를 해야한다는데 어딜 초기화 해야한다는지 모르겠음..
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
	printf("몇명을 입력하시겠습니까 ? ... ");
	scanf("%d",&cnt);
	for (x=0; x<=cnt-1; x++) {
		printf("학생이름을 입력하십시오 : ");
		scanf("%s",&namelist[x]);
		printf("%s님의점수를 국어점수 수학점수 영어점수 형태로 입력 (단, 점수는 <=100) : ",namelist[x]);
		scanf("%d %d %d",&list[x][0], &list[x][1], &list[x][2]);
	}
	printf("이름 | 국어 | 수학 | 영어 | 평균\n");
	printf("ㅡㅡㅡ+ㅡ-ㅡ+ㅡ-ㅡ+ㅡ-ㅡ+ㅡ-ㅡ\n");
	for (z=0; z<=3; z++) {
		sumt[z] = 0.0;
	}
	for (y=0; y<=cnt-1; y++) {
		avert = sum1(list[y], 3)/3;
		printf("%sㅣ %2d | %2d | %2d | %.2f\n",namelist[y],list[y][0],list[y][1],list[y][2],avert);
		printf("ㅡㅡㅡ+ㅡ-ㅡ+ㅡ-ㅡ+ㅡ-ㅡ+ㅡ-ㅡ\n");
		for (z=0; z<=2; z++) {
			sumt[z] += list[y][z]; 
		}
		sumt[3] += avert;
	}
	for (x=0; x<=3; x++) {
		sumt[x] = sumt[x] / (float)cnt;
	}
	printf("평균 | %.2f | %.2f | %.2f | %.2f ",sumt[0],sumt[1],sumt[2],sumt[3]);
}
