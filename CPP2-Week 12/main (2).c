#include <stdio.h>
#include <stdlib.h>
#define SetBit(x, n) ((x) |=(1<<(n)))
#define ClrBit(x, n) ((x) &= ~(1<<(n)))
#define TstBit(x, n) ((x) & (1<<(n)))
#define SWAP(x, y, z) ((z) = (x), (x) = (y), (y) = (z))
#define MALLOC(x, y) ((x) = (y *)malloc(sizeof(y)))
#define DEBUG

struct std
{
    int score;
    struct std * link;
};

void print(struct std *top)
        {
            while (top != NULL)
            {
                printf("%d ", top -> score);
                top = top -> link;
            }
            printf("\n");
}

main ()
{
    int i;
    struct std * top = NULL, *t;
    for (i=0; i<5; i++)
    {
#ifdef DEBUG
		printf("%d ", i);
#endif
        MALLOC(t, struct std);
        t->score = i*2+10;
        if (top == NULL) t->link = NULL;
        else t->link = top;
        top = t;
#ifdef DEBUG
		print(t);
#endif
	}	
	print(t);
}
