#include <stdio.h>

// for (a; b; c) {}  : a: 처음값, b: 종료값, c: 증분값 

int main (void) {
	int i;
	// i 변수 선언 
	for (i=33; i<=127; i=i+1) { //33부터 127까지 1씩 더하며 반복 (Repeat form 33 to 127 during plus 1)
		printf("%x %d %o %c ",i,i,i,i); // 16진수, 10진수, 8진수, 하나의 철자로 추력 (Print 16-base, 10-base, 8-base, one letter)
	}
} 
