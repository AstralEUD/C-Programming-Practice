#include <stdio.h>
#include <math.h>
//평균 
main () {
	float alist[100][3] = {0};
	float kav, mav, eav;
	float (*ptr)[3] = alist;
	int cnt, i, n;
	printf("How many? : ");
	scanf("%d",&cnt);
	kav = 0; mav = 0; eav = 0;
	for (i=0; i<cnt; i++) {
		printf("%d 번째 학생의 국어, 수학, 영어 성적 각각 띄워서 입력하시오. ",i+1);
		scanf("%f %f %f",&(ptr+i)[0],&(ptr+i)[1],&(ptr+i)[2]);
		(*(ptr+i)[3])= ((*(ptr+i)[0]) + (*(ptr+i)[1]) + (*(ptr+i)[2])) / 3;
		printf("평균 = %f\n",(*(ptr+i)[3]));
		kav+=*(ptr+i)[0]; mav += *(ptr+i)[1]; eav += *(ptr+i)[2];
	}
	i++;
	kav=kav/cnt; mav=mav/cnt; eav=eav/cnt;
	*(ptr+i)[0] = kav; *(ptr+i)[1] = mav; *(ptr+i)[2] = eav;
	printf("국어 평균 = %f\n",kav);
	printf("수학 평균 = %f\n",mav);
	printf("영어 평균 = %f\n",eav);
}
