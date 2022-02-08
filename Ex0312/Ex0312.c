/*
読み込んだ整数値は奇数であるか偶数であるか
*/

#include<stdio.h>

main() {
	int n;

	printf("整数を入力せよ：");
	scanf_s("%d", &n);

	switch (n % 2)
	{
	case  0:
		puts("その数は偶数です。");
		break;
	case  1:
	case -1:
		puts("その数は奇数です。");
		break;
	default:
		puts("おかしいです。");
		break;
	}
}