#include <stdio.h>
// Basic Header 
#include <math.h>
// Header for pow, sqrt

int main (void) {
	float a, b, arith, geo, har; 
	// set Data type as float
	printf("ù��° ���� �Է��Ͽ� �ּ���: ");
	scanf("%f",&a);
	// Type A which is first number
	printf("�ι�° ���� �Է��Ͽ� �ּ���: ");
	scanf("%f",&b);
	// Type B which is second nubmer
	arith = (a+b)/2;
	printf("%f�� %f�� �������� %f �Դϴ�. \n",a, b, arith);
	// Arithmetic Mean (������) : a+b�� 2�� ���� 
	geo = sqrt(a*b);
	printf("%f�� %f�� ��������� %f �Դϴ�. \n",a, b, geo);
	// Geometric mean (�������) : a��  b�� ���Ѱ��� ���� 
	har = (2*a*b)/(a+b);
	printf("%f�� %f�� ��ȭ����� %f �Դϴ�. \n",a, b, har);
	// Harmonic Mean (��ȭ���) : 2*a*b �� a+b�� ���� 
	
	 
	return har;
}
