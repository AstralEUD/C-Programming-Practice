#include <stdio.h>

int main (void) {
	char a[10];
	printf("enter string: ");
	scanf("%s",&a[0]);
	// ������ ���� ���� �Է� ���� (for test)
	printf("string = %s\n",&a[0]);
	int i;
	for (i=0; a[i]!='\0';i++) {
	}
	// i���� ����Ͽ�, a �迭�� i��° ���� NULL ���� �ƴѵ��� i�� 1�� ���ϸ� �ݺ� (from i to a[i] is not NULL, i plus 1)
	printf("String array's size = %d",i);
	return i;
}
