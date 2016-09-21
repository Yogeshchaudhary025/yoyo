#include <stdio.h>
void swap (int*,int*);
int main ()
{
	static int a,b;
	printf ("enter the two no.\n");
	scanf ("%d %d",&a,&b);
	swap (&a,&b);
	printf ("the no. after swaping will Be %d and %d ", a,b);
	return 0;
}
void swap (int *m,int *n)
{
	int t;
t = *m;
*m = *n;
*n = t;
}

