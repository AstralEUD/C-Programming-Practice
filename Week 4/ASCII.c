#include <stdio.h>

// for (a; b; c) {}  : a: ó����, b: ���ᰪ, c: ���а� 

int main (void) {
	int i;
	// i ���� ���� 
	for (i=33; i<=127; i=i+1) { //33���� 127���� 1�� ���ϸ� �ݺ� (Repeat form 33 to 127 during plus 1)
		printf("%x %d %o %c ",i,i,i,i); // 16����, 10����, 8����, �ϳ��� ö�ڷ� �߷� (Print 16-base, 10-base, 8-base, one letter)
	}
} 
