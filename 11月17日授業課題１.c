#include<stdio.h>
#include<ctype.h>

int main()
{
	int j;
	j = 0;
	char a;
	printf("入力:");
	scanf_s("%c", &a);
	while ((a = getchar()) != EOF) {
		if (isupper(a))
		{
			j += 1;
		}
		else
		{
			j += 0;
		}
	}
	if (j >= 1)
		printf("大文字あり");
	else
		printf("大文字なし");
}
