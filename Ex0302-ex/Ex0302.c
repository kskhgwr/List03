/*
	Ex0302.c
*/
#include  <stdio.h>

int main(void)
{
	int	 no;

	printf("整数を入力してください：");
	scanf_s("%d", &no);

	if (no == 0)
	{
		puts("その数は０です。");
	}
	else if (no > 0)
	{
		puts("その数は正です。");		/* 入替 */
	}
	else// if (no < 0)
	{
		puts("その数は負です。");		/* 入替 */
	}

	return (0);
}
