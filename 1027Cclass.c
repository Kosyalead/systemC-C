#include<stdio.h>
int main(void)
{
	int a, b;

	a = 0;
	b = 0;
	scanf_s("%d", &a);

	b=3*a;
	printf("%d+%d=%d\n",  b);
	
	return 0;
}
