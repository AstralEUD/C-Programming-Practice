#include <stdio.h>


int main (void) {
	float average, storage, temp;
	int count, n;
	//변수 선언 (set variables)
	count = 0;
	storage = 0.0; 
	printf("어느 개수만큼의 수를 입력?: ");
	scanf("%d",&n);
	// n개의 수의 평균을 구하므로, 얼마나 많은 수를 설정할지.  (how many number to input)
	while (count!=n) {
		count+=1;
		printf("%d번째 숫자 입력 : ",count);
		scanf("%f",&temp);
		storage+=temp;
		//카운트를 하나씩 올려가며 숫자 입력, 값은 정확히 받기 위해 float로 받음. 카운트 숫자가 정해진 숫자 (n)과 동일하면 정지  (start input while count is not n)
	}
	average = storage/count;
	printf("\n평균은 %f",average);
}
