#include <stdio.h>
int main (void) {
	int a, i, t;
	int c[100];
	scanf("%d",&a);
	for (i=1; a!=0; i++) {
		c[i] = a%10;
		a = a/10;
	}
	for (i=3; i!=0; i--) {
		printf("%d | ",c[i]);
		for (t=1; t<=c[i]; t++) {
			printf(" O ");
		}
		printf("\n");
	}
}
