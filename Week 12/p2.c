#include <stdio.h>
#define SIZE 5

int main (void) {
	int i,k, tmp, n, t;
	int list[100] = {};
	//int list[100] = {16,7,9,1,3};
	printf("얼마나 많은 수 입력? : ");
	scanf("%d",&n); 
	for (t=0; t<n; t++) {
		scanf("%d",&list[t]);
	}
	for (k=0; k<=n-1; k++) {
		for (i=0; i <n-1; i++) {
			if (list[i] > list[i+1]) {
				tmp = list [i];
				list[i] = list[i + 1];
				list[i+1] = tmp;
			}
		}
	}
		for (i=0; i<=n-1; i++) {
			printf("%d ",list[i]);
		}
}
