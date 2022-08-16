#include <stdio.h>
// 함수를 사용하라는데... 뭔말인지 몰루겠
int list[100] = {0};
int casenum = 0;
void fn_input() {
	int i;
	for (i=0; i<casenum; i++) {
		printf("%d ��° case �Է� : ",i+1);
		scanf("%d",&list[i]);
	}
}
int selection_sort () {
	int i, q, t, p;
	for (t=0; t<casenum; t++) {
		q = list[t];
		p=t;
		for (i=t+1; i<casenum; i++) {
			if (q > list[i]) {
				q = list[i];
				p=i;
			}
		}
		list[p] = list[t];
		list[t] = q;
		fn_print(t+1);
	}
}
int fn_print(int w) {
	int i;
	printf("\n (%d) LIST : ",w);
	for (i=0; i<casenum; i++) {
		printf("%d, ",list[i]);
	}
}
int main () {
	printf(" How many case? ");
	scanf("%d",&casenum);
	fn_input();
	fn_print(0);
	selection_sort();
}
