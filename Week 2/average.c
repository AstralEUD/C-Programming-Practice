#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x, y;
	printf("ù���� ���ڸ� �Է��Ͻÿ�: ");
	scanf("%d",&x);
	// ù���� ���� x�� �Է¹� ��  (input first number, x)
	printf("�ι��� ���ڸ� �Է��Ͻÿ�: ");
	scanf("%d",&y);
	// �ι��� ���� y�� �Է¹��� (input second number, y)
	printf("%d �� %d �� �������� %d \n",x,y,(x+y)/2);
	// ������ (arithmetic mean) =  a+b / 2 
	printf("%d �� %d �� ��ȭ����� %d \n",x,y,(2*x*y)/(x+y));
	// ��ȭ��� (geometric mean) = 2ab / a+b 
	return 0;
}
