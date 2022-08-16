#include <stdio.h>
int main (void) {
	int a, b, c, i;
	for (i=0; i<10; i++) {
		scanf("%d",&a);
		b = a;
		c=1;
		while (b/10 != 0) {
			b=b/10;
			c+=1;
		}
		printf("%d %d\n",a,c); 
	}
}
