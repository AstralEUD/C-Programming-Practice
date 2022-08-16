#include <stdio.h>
// 
main (void) {
	int a, b, c, i, t;
	int storageA[100];
	int storageB[100];
	printf("두 수의 공약수를 구한다. 첫번째 수를 입력: ");
	scanf("%d",&a);
	printf("두 수의 공약수를 구한다. 두번째 수를 입력: ");
	scanf("%d",&b);
	if (a<b) {
		t = a;
		a = b;
		b = t;
	}
	// a<b인경우 a>b를 충족시키기 위해 교체 
	for (i=1;i<=a;i++) {
		if (a%i == 0) {
			storageA[i] = "1";
		} else {
			storageA[i] = "0";
		}
	}
	//a의 약수 구함 
	for (i=1;i<=b;i++) {
		if (b%i == 0) {
			storageB[i] = "1";
		} else {
			storageB[i] = "0";
		}
	}
	//b의 약수 구함 
	printf("\n 공약수 : ");
	for (i=0;storageA[i]!='\n';i++) {
		if ((storageA[i] == storageB[i]) && (storageA[i] == "1")) {
			printf("%d, ",i);
		}
	}
	//a와 b 모두 약수인 공통수를 찾아 공약수로 선정 
}
