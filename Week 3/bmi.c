#include <stdio.h>
// Basic Header 
#include <math.h>
// Header for pow, sqrt

int main (void) {
	float weight, height, bmi;
	// set Data type as float
	printf("Ű�� �Է��Ͽ� �ּ��� (��, m������ �Է��ϼ���| ex: 170cm > 1.7): ");
	scanf("%f",&height);
	// Type Height as meters
	printf("���Ը� �Է��Ͽ� �ּ��� (kg����): ");
	scanf("%f",&weight);
	// Type Weight as kilograms
	bmi = weight/pow(height,2);
	// BMI = weight / [Height(m)]^2
	printf("BMI�� %f �Դϴ�.",bmi);
	return bmi;
}
