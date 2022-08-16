#include <stdio.h>
#include <math.h>
int main () {
	int a, i, t;  
	float allav, allvunsan, allpuncha, zscore, grade;
	float storage_height[100] = {0};
	int storage_weight[100] = {0};
	int storage_birth[100] = {0};
	float storage_bmi[100] = {0};
	float storage_grade[100] = {0};
	int storage_count[10] = {0};
	allav = 0.0;
	printf("얼마나 많은 학생의 정보를 입력하시겠습니까..");
	/* TEST SET :: 
	5
	1.7 80 2003
	1.5 50 2003
	1.4 61 2005
	1.55 40 2007
	1.8 75 2002
	*/
	scanf("%d",&a);
	
	for (i=0; i<a; i++) {
		printf("%d번째 입력 [키(m) 체중(kg) 태어난 년도 입력(20**)]..", i+1);
		scanf("%f %d %d",&storage_height[i], &storage_weight[i], &storage_birth[i]);
		storage_bmi[i] = storage_weight[i] / (storage_height[i] * storage_height[i]);
		allav += storage_bmi[i];
	}
	allav = allav / a;
	allvunsan = 0;
	for (i=0; i<a; i++) {
		allvunsan += pow(storage_bmi[i] - allav,2);
	}
	allvunsan = allvunsan / a;
	allpuncha = sqrt(allvunsan);
	printf("\n debug, %f, %f, %f \n",allav, allvunsan, allpuncha);
	for (i=0; i<a; i++) {
		zscore = (storage_bmi[i] - allav) / allpuncha;
		grade = 2 * zscore + 5;
		grade = 10 - grade;
		storage_grade[i] = grade;
		printf("%d 번째 학생의 BMI는 %.2f, BMI 표준점수는 %.2f, 등급은 %.0f \n",i+1,storage_bmi[i],zscore,storage_grade[i]);
	}
	for (i=0; i<a; i++) {
		*(storage_count + ((int)storage_grade[i] % 10)) += 1;
	}
	for (i=1; i<=9; i++) {
		printf("%d 등급 학생 수는 %d명\n",i, *(storage_count + i));
	}
	for (i=0; i<a; i++) {
		if (((2021 - storage_birth[i]) >= 18) && ((2021 - storage_birth[i]) < 20)) {
			printf("%d번째 학생 부합 : 키: %.2f, 체중 : %d, BMI : %.2f\n",i+1, storage_height[i], storage_weight[i],storage_bmi[i]);
		}
	}
} 
