#include <stdio.h>
// Basic Header 
#include <math.h>
// Header for pow, sqrt

int main (void) {
	float weight, height, bmi;
	// set Data type as float
	printf("키를 입력하여 주세요 (단, m단위로 입력하세요| ex: 170cm > 1.7): ");
	scanf("%f",&height);
	// Type Height as meters
	printf("무게를 입력하여 주세요 (kg단위): ");
	scanf("%f",&weight);
	// Type Weight as kilograms
	bmi = weight/pow(height,2);
	// BMI = weight / [Height(m)]^2
	printf("BMI는 %f 입니다.",bmi);
	return bmi;
}
