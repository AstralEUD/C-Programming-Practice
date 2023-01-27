#include <stdio.h>
#include <stdlib.h>
// 0���� i-1������ ���ĵǾ� �ְ� i���� n������ ������
//i��° �ڷḦ ���ĵ� ������ �����ֱ�
//i��° �ڷḦ t�� ����
//t�� ���� �� �ڸ��� ã�� : j���� ��� (i-1���� 0����)
//t�� j��° �ڷẸ�� ������ ������� (�����ϸ鼭)
//�ƴϸ� ����� j+1�ڸ��� t�����ϰ� ����.
struct std {
	int h, w;
	float bmi;
	struct std * next;
};
void print(struct std *a) {
	while(a) {
		printf("%4.1f ",(*a).bmi);
		a = a->next;
	}
	printf("\n\n");
}
void printAll(struct std *a) {
	int i = 0;
	while (a) {
		printf("%d : %d %d %f\n",i,(*a).h, (*a).w, (*a).bmi);
		i++;
		a=a->next;
	}
}
struct std * push(struct std *top, struct std tmp) {
	struct std *t;
	t = (struct std *) malloc (sizeof (struct std));
	*t = tmp;
	t->next = top; top =t;
	//free(t);
	return top;
}
struct std * pop (struct std *top) {
	struct std * t = top;
	printf("Pop : %d %d %f\n",t->h, t->w, t->bmi);
	top = top->next;
	return top;
}
void search (struct std * top, int fh) {
	struct std * t = top;
	while (1) {
		if (t->h == fh) {
			printf("Search : %d %d %f\n",t->h, t->w, t->bmi);
			return;
		} else if (t == NULL) {
			printf("Cannot Find!");
			return;
		}
		t = t->next;
	}
	free(t);
}
main() {
	struct std *top=NULL, tmp;
	int i,j,n,fh;
	printf("enter n : ");
	scanf("%d",&n);
	
	//tmp = (struct std *) malloc (sizeof (struct std));
	for (i=0; i<n; i++) {
		printf("%d ��° �л��� Ű, �����Ը� ����� �Է��ϼ���.",i);
		scanf("%d %d",&tmp.h,&tmp.w);
		tmp.bmi = (float) 10000 * tmp.w/(tmp.h * tmp.h);
		top = push(top, tmp);
	}	
	print(top);
	top = pop(top);
	print(top);
	printAll(top);
	printf("Search height : ");
	scanf("%d",&fh);
	search(top,fh);
	printf("");
	free(top);
}
