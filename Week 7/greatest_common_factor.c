#include <stdio.h>
//최대공약수

int main (void) {
	int a, b, c, i, temp, chedae;
	int storage_a[100];
	int storage_b[100];
	chedae = 0;
	printf("a와 b의 최대공약수를 구한다. a와 b를 한칸 띄워 입력하십시오 : ");
	scanf("%d %d",&a,&b);
	printf("%d의 약수는....  ",a);
	for (i=1; i<=a; i++) {
		if (a%i == 0) {
			storage_a[i] = 1;
			printf("%d ",i);
		} else {
			storage_a[i] = 0;
		}
	}
	// a의 약수를 구하는 반복문. 약수이면 storage_a라는 array에 1로 저장하여 구별함  
	printf("\n%d의 약수는 ....  ",b);
	for (i=1; i<=b; i++) {
		if (b%i == 0) {
			storage_b[i] = 1;
			printf("%d ",i);
		} else {
			storage_b[i] = 0;
		}
	}
	//b의 경우도 동일  
	temp = (a>b) ? a : b;
	//최대공약수를 구하기 위해, a와 b중 더 큰 수를 구함  
	for (i=temp; i!=0; i--) {
		if ((storage_a[i] == storage_b[i]) && storage_a[i] == 1) {
			printf("\n%d와 %d의 공약수는 %d",a,b,i);
			chedae = i>chedae ? i : chedae;
		}
		//storage_a와 storage_b를 모두 확인하여, 둘다 1인 (약수인) 공약수를 구함.
		//그 중, 가장 큰 공약수를  chedae 변수에 저장  
	}
	printf("\n %d와 %d의 최대공약수는 %d",a,b,chedae);
} 
