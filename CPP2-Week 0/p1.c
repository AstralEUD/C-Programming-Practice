#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

/* Test Case
4
50 1.6
70 1.7
90 1.8
50 1.5
*/
int main() {
	float BMI[100] = { 0.0 };
	int n, i;
	float stddev, mean_r, weight, height, mean, stddev_f;
	printf("얼마나 많은 학생을 입력하시겠습니까? : ");
	scanf("%d", &n);
	//n값 입력받기

	mean = 0;
	for (i = 1; i <= n; i++) {
		printf("\n%d 번째 학생의 체중(kg)와 신장(m)을 각각 띄어서 입력하세요. ", i);
		scanf("%f %f", &weight, &height);
		BMI[i] = weight / (height * height);
		printf("\n%d번째 학생의 BMI는 %f", i, BMI[i]);
		mean += BMI[i];
		//키, 체중을 입력받아 BMI 계산한 후 BMI[] 배열에 저장하기, 그리고 이 계산을 n번동안 반복한다.
		//BMI 계산식 = 체중(kg) / [키(m)^2] 
		//추후 평균 계산을 위해서 계산한 BMI를 mean 변수에 더해간다. 
	}
	mean_r = mean / n;
	//계산한 mean 변수를 n으로 나눠 평균계산한다. 
	mean = 0;
	for (i = 1; i <= n; i++) {
		mean += (BMI[i] - mean_r) * (BMI[i] - mean_r);
	}
	//분산을 구하는 반복 식  
	stddev = mean / n;
	stddev_f = sqrt(stddev);
	//구한 분산 (stddev)를 제곱근 씌워 표준편차를 구한다. 
	printf("\n표준편차는 %f", stddev_f);
}