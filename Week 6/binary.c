#include <stdio.h>
// Decimal to Binary

int main (void) {
	int a, b, count, i;
	int c[100];
	printf("input decimal : ");
	scanf("%d",&a);
	count = 0;

	for (i=0;a	>0;i++) {
	    c[i] = a%2;
	    a=a/2;
	}
	// from i to a>0 , i++, c[i] is storage for binary.
	printf("output is : ");
	for (i=i-1;i>=0;i--) {
		printf("%d",c[i]);
	}
	// print array c by reversed numbers.
}
