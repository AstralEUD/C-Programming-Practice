#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[]) {
	int x, y;
	printf("ù���� ���ڸ� �Է��Ͻÿ�: ");
	scanf("%d",&x);
	printf("�ι��� ���ڸ� �Է��Ͻÿ�: ");
	scanf("%d",&y);
	printf("%d + %d = %d \n",x,y,x+y);
	// ���ϱ�  (addition)
	printf("%d - %d = %d \n",x,y,x-y);
	// x�� y�� ���� (Subtraction)
	printf("%d * %d = %d \n",x,y,x*y);
	// ���ϱ� (Multiplication)
	printf("%d / %d = %d \n",x,y,x/y);
	// x�� y�� ������  (division)
	return 0;
}
