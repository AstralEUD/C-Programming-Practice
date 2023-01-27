#include <stdio.h>
#include <stdlib.h>
// 0부터 i-1까지는 정렬되어 있고 i부터 n까지는 비정렬
//i번째 자료를 정렬된 구간에 끼워넣기
//i번째 자료를 t에 복사
//t가 들어가야 할 자리를 찾기 : j변수 사용 (i-1부터 0까지)
//t가 j번째 자료보다 작으면 계속진행 (복사하면서)
//아니면 벗어나서 j+1자리에 t복사하고 끝냄.
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
		printf("%d 번째 학생의 키, 몸무게를 띄워서 입력하세요.",i);
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
