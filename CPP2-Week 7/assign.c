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
	printf("���� / ���ð��� ���� �Է�\n");
	if ((*t).tag == 0) {
		scanf("%d %d",&(*t).kor, &(*t).sel.soc);
	} else {
		scanf("%d %d",&(*t).kor,&(*t).sel.sci); 
	}
}//�Է��Լ� 

float avg (struct data *t) {
	if ((*t).tag == 0) {
		return (((*t).kor + (*t).sel.soc) / 2);
	} else {
		return (((*t).kor + (*t).sel.sci) / 2);
	}
} 
//��հ���Լ�
 
void printName (char name[]) {
	int i, len = strlen(name);
	for (i=0; i<len; i++) {
		printf("%c",name[i]);
	}
} //�̸������ ��  

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
	}	//���� ����, ��� �����
}

void print2(int n, float kav, float mav, float eav) {
	int i;
	for (i=0; i<n; i++) {
		printName(arr[i].name);
		printf(" �л��� ��� : %f\n",arr[i].avg);
	}
	printf("\n���� ��� : %f, ��ȸ ��� : %f, ���� ��� : %f\n\n",kav,mav,eav);
}


void main () {
	struct data tmparr;
	float stavg[10];
	int n, i, q, j, scoper, sciper;
	float kav, mav, eav;
	kav = 0; mav = 0; eav = 0; scoper = 0;
	
	printf("�󸶳� �Է��Ͻðڽ��ϱ�? ");
	scanf("%d",&n);
	
	for (i=0; i<n; i++) {
		printf("�̸�, �±�(0=��ȸ, 1=����), ���� ������ ���� ����� �Է��Ͻʽÿ�.\n");
		scan1(&arr[i]);
	}//�Է¹ޱ� 
	
	for (i=0; i<n; i++) {
		arr[i].avg = avg(&arr[i]);
		kav += arr[i].kor;
		if (arr[i].tag == 0) {
			mav += arr[i].sel.soc; //��ȸ ���� ��� 
			scoper++; //��ȸ ���� �ο� ��� 
		} else {
			eav += arr[i].sel.sci; // 
		}
	}
	sciper = n - scoper;
	kav/=n; mav/=scoper; eav/=sciper;
	//��ü ��� ��� 

	printf("\n\n\n\n");
	sort(n);
	print2(n, kav, mav, eav);
	 

}
