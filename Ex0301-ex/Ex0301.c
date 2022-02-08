/*
	Ex0301.c
*/
#include	<stdio.h>

int main(void)
{
	int a, b;
	puts("二つの整数を入力してください");
	printf("整数A：");
	scanf_s("%d", &a);
	printf("整数B：");
	scanf_s("%d", &b);

	if (a % b) {
		puts("BはAの約数ではありません。");	//	処理文
	}
	else {
		puts("BはAの約数です。");	//	処理文
	}
	return 0;
}

