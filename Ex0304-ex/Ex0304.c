/*
	Ex0304.c
*/
#include	<stdio.h>

int main(void)
{
	int	a, b;

	puts("二つの整数を入力して下さい。");

	printf("整数Ａ：");
	scanf_s("%d", &a);
	printf("整数Ｂ：");
	scanf_s("%d", &b);

	if (a == b) {
		puts("AとBは等しいです。");
	} else if (a > b) {
		puts("AはBより大きいです。");
	} else {
		puts("AはBより小さいです。");
	}
	return 0;
}