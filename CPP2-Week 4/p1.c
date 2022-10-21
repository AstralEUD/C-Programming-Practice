#include <stdio.h>
#include <stdlib.h>
int check(char list[], int start, int end) {
	int i, n, length, cnt;
	length = strlen(list);
	cnt = 0;
	for (i=0; i<=length; i++) {
		n = *list - 0;
		if (n <= end) {
			if (start <= n) {
				cnt++;	
			}
		}
		list++;
	}
	return cnt;
}

main () {
	char sentence[100] = "";
	char *ptr = sentence;
	int big, small, number;
	printf("입력하세요 : ");
	gets(ptr);
	small = check(ptr, 97, 122);
	big = check(ptr, 65, 90);
	number = check(ptr, 48, 57);
	printf("소문자 : %d\n",small); 
	printf("대문자 : %d\n",big); 
	printf("숫자 : %d\n",number); 
}