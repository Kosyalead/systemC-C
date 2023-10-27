#include<stdio.h>
int main(void)
{
	int a, b, surplus, result;

	printf("Please Enter Number:");
	scanf_s("%d", &a);
	printf("Please Enter Other Number:");
	scanf_s("%d", &b);

	surplus = a % b;

	if (surplus == 0)
	{
		result = a / b;
		printf("%d / %d = %d\n", a, b, result);
	}
	
	return 0;

}