#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
/*
 * write line of code here...
 * Remember:
 * You are not allowed to use the variable a
 * You are not allowed to modify the variable p
 * You can only write one statement
 * You are not allowed to use ,
 * You are not allowed to code anything else than the expected line of code
 */
*(p + 5) = 98;
/* ...so that this can print 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}

