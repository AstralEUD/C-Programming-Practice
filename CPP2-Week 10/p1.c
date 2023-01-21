#include <stdio.h>
#include <stdlib.h>
//20220507, ANU, COMEDU
int ** input(int m, int n) {
	int i, j, **a;
	a = (int **)malloc(m*sizeof(int *));
	for (i=0; i<m; i++) {
		a[i] = (int*)malloc(n*sizeof(int));
		for (j=0;j<n;j++) {
			a[i][j] = rand() % 5 + 1;
		}
	}
	return a;
}
void print(int **a, int m, int n) {
	int i, j;
	for (i=0; i<m; i++) {
		for (j=0; j<n; j++) {
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
}
int ** mul (int **a, int **b, int m, int p, int n) {
	int i, j, k, q, tmp, h;
	j=0;
	int **c;
	c=(int *)malloc(m*sizeof(int *));
	for (q=0; q<m; q++) {
		c[q] = (int)malloc(n*sizeof(int));
		for (k=0; k<n; k++) {
			c[q][k] = 0;
			for (i=0; i<m; i++) {
				c[q][k] +=  a[q][i] * b[i][k]; 
			}
		}
	}
	return c;
}
int ** add(int **a, int m, int n, int **b) {
	int i, j; int **c;
	//if (m!=p || n != q) return NULL;
	c = (int *)malloc(m*sizeof(int *));
	for (i=0; i<m; i++) {
		c[i] = (int)malloc(n*sizeof(int));
		for (j=0; j<n; j++) {
			c[i][j] = a[i][j]+b[i][j];
		}
	}
	return c;
}
int main () {
	int m, p, n, i, q;
	int **a, **b, **c, **d;
	
	printf("첫번째 행과 열의 크기, 두번째 행과 열의 크기를 각각 입력:");
	scanf("%d %d %d %d",&m,&p,&n,&q);
	a=input(m,p);
	b=input(n,q);
	print(a,m,p);
	printf("\n");
	print(b,n,q);
	
	if (m!=n && p!=q) {
		printf("행렬합 불가\n");
	} else {
		printf("\n Add : \n");
		d=add(a,m,n,b);
		print(d,m,n);
	}
	
	if (m!=q && n!=p) {
		printf("행렬곱 불가 \n");
	} else {
		printf("\n Multiply : \n");
		c=mul(a,b,m,p,n);
		print(c,m,n);	
	}
	
}
