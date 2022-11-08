#include <stdio.h>
#include <string.h>
#include <math.h>
struct data {
	char name [10];
	int kor, math, eng;
	float avg;
};
void scan (struct data *t) {
	scanf("%s %d %d %d",(*t).name, &(*t).kor, &(*t).math, &(*t).eng);
}
float avg (int kor, int math, int eng) {
	return (kor + math + eng)/3;
}
void printName (char name[]) {
	int i, len = strlen(name);
	for (i=0; i<len; i++) {
		printf("%c",name[i]);
	}
}
float distance (struct data a, struct data b) {
	return sqrt((a.kor - b.kor) * (a.kor - b.kor) + (a.math - b.math) * (a.math - b.math) + (a.eng - b.eng) * (a.eng - b.eng));
}
void main () {
	struct data arr[100];
	float stavg[10];
	int n, i, q, j;
	float kav, mav, eav;
	printf("얼마나 입력하시겠습니까? ");
	scanf("%d",&n);
	for (i=0; i<n; i++) {
		printf("이름, 국어, 수학, 영어 성적을 각각 띄워서 입력하십시오.");
		scan(&arr[i]);
	}
	for (i=0; i<n; i++) {
		arr[i].avg = avg(arr[i].kor, arr[i].math, arr[i].eng);
		kav+=arr[i].kor;
		mav+=arr[i].math;
		eav+=arr[i].eng;
	}
	kav/=n; mav/=n; eav/=n;
	for (i=0; i<n; i++) {
		printName(arr[i].name);
		printf(" 학생의 평균 : %f\n",arr[i].avg);
	}
	printf("\n국어 평균 : %f, 수학 평균 : %f, 영어 평균 : %f\n\n",kav,mav,eav);
	for (i=0;i<n;i++) {
		for (j=0;j<n;j++) {
			printName(arr[i].name);
			printf(" 학생과 ");
			printName(arr[j].name);
			printf(" 학생의 거리 : %f\n",distance(arr[i],arr[j]));
		}
		printf("\n");
	}
}
