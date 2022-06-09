#include <stdio.h>
int main () {
	int i, t;
	for (i=0; i<=5; i++) {
		for (t=0; t<=5; t++) {
			if (i==t) {
				printf("+");
			} else {
				printf("*");
			}
		}
		printf("\n");
	}
}
