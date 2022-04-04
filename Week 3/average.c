#include <stdio.h>
// Basic Header 
#include <math.h>
// Header for pow, sqrt

int main (void) {
	float a, b, arith, geo, har; 
	// set Data type as float
	printf("첫번째 수를 입력하여 주세요: ");
	scanf("%f",&a);
	// Type A which is first number
	printf("두번째 수를 입력하여 주세요: ");
	scanf("%f",&b);
	// Type B which is second nubmer
	arith = (a+b)/2;
	printf("%f와 %f의 산술평균은 %f 입니다. \n",a, b, arith);
	// Arithmetic Mean (산술평균) : a+b를 2로 나눔 
	geo = sqrt(a*b);
	printf("%f와 %f의 기하평균은 %f 입니다. \n",a, b, geo);
	// Geometric mean (기하평균) : a와  b를 곱한것의 제곱 
	har = (2*a*b)/(a+b);
	printf("%f와 %f의 조화평균은 %f 입니다. \n",a, b, har);
	// Harmonic Mean (조화평균) : 2*a*b 를 a+b로 나눔 
	
	 
	return har;
}
