/*
読み込んだ整数値は奇数であるか偶数であるか
*/

#include<stdio.h>

main() {
	int n;

	printf("整数を入力せよ：");
	scanf_s("%d", &n);

	if (n % 2)
		puts("その数は奇数です。");
	else
		puts("その数は偶数です。");
}