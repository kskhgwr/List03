/*
	Ex0312.c
*/
#include  <stdio.h>

int main(void)
{
	int	 no;

	printf("整数を入力してください：");
	scanf_s("%d", &no);

	switch (no % 2)	{
		case 0 : puts("その数は偶数です。");		break;
		case 1 : 
		case -1: puts("その数は奇数です。");		break;
		default: puts("予想しない結果です。");	break;
	}

	return 0;
}
