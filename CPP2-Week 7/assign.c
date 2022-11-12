#include <stdio.h>
#include <string.h>
#include <math.h>
//Dept of comedu, CPP-II, week 7

union selsub {
	int soc;
	int sci;
};
struct data {
	char name [10];
	int kor;
	int tag;
	union selsub sel;
	float avg;
};
struct data arr[100];
void scan1 (struct data *t) {
	scanf("%s %d, %d",(*t).name, &(*t).tag);
	printf("국어 / 선택과목 점수 입력\n");
	if ((*t).tag == 0) {
		scanf("%d %d",&(*t).kor, &(*t).sel.soc);
	} else {
		scanf("%d %d",&(*t).kor,&(*t).sel.sci); 
	}
}//입력함수 

float avg (struct data *t) {
	if ((*t).tag == 0) {
		return (((*t).kor + (*t).sel.soc) / 2);
	} else {
		return (((*t).kor + (*t).sel.sci) / 2);
	}
} 
//평균계산함수
 
void printName (char name[]) {
	int i, len = strlen(name);
	for (i=0; i<len; i++) {
		printf("%c",name[i]);
	}
} //이름출력함 수  

float sort(int n) {
	int j, q, i;
	float min;
	struct data tmparr;
	for (i=0; i<n-1; i++) {
		j=i;
		for (q=i+1; q<n; q++) {
			if (arr[q].avg < arr[j].avg) {
				j=q;
			}
		}
		if (i!=q) {
			tmparr = arr[i];
			arr[i] = arr[j];
			arr[j] = tmparr;
		}
	}	//선택 정렬, 평균 순대로
}

void print2(int n, float kav, float mav, float eav) {
	int i;
	for (i=0; i<n; i++) {
		printName(arr[i].name);
		printf(" 학생의 평균 : %f\n",arr[i].avg);
	}
	printf("\n국어 평균 : %f, 사회 평균 : %f, 과학 평균 : %f\n\n",kav,mav,eav);
}


void main () {
	struct data tmparr;
	float stavg[10];
	int n, i, q, j, scoper, sciper;
	float kav, mav, eav;
	kav = 0; mav = 0; eav = 0; scoper = 0;
	
	printf("얼마나 입력하시겠습니까? ");
	scanf("%d",&n);
	
	for (i=0; i<n; i++) {
		printf("이름, 태그(0=사회, 1=과학), 국어 성적을 각각 띄워서 입력하십시오.\n");
		scan1(&arr[i]);
	}//입력받기 
	
	for (i=0; i<n; i++) {
		arr[i].avg = avg(&arr[i]);
		kav += arr[i].kor;
		if (arr[i].tag == 0) {
			mav += arr[i].sel.soc; //사회 점수 계산 
			scoper++; //사회 선택 인원 계산 
		} else {
			eav += arr[i].sel.sci; // 
		}
	}
	sciper = n - scoper;
	kav/=n; mav/=scoper; eav/=sciper;
	//전체 평균 계산 

	printf("\n\n\n\n");
	sort(n);
	print2(n, kav, mav, eav);
	 

}
