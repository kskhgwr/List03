/*
	Ex0307.c
*/

#include	<stdio.h>

int main(void)
{
	int	a, b, c, d, max;

	puts("四つの整数を入力してください。");
	printf("整数1：");
	scanf_s("%d", &a);

	printf("整数2：");
	scanf_s("%d", &b);

	printf("整数3：");
	scanf_s("%d", &c);

	printf("整数4：");
	scanf_s("%d", &d);

	max = a;
	if (b > max){
		max = b;
	}
	if (c > max){
		max = c;
	}
	if (d > max){
		max = d;
	}

	printf("最大値は % dです。\n", max);

	return 0;
}