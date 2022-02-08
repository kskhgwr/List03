/*
読み込んだ4つの数値の最大値を求める
*/

#include<stdio.h>

main() {
	int n1, n2, n3, n4;

	puts("四つの整数を入力せよ。");

	printf("整数１：");
	scanf_s("%d", &n1);

	printf("整数２：");
	scanf_s("%d", &n2);

	printf("整数３：");
	scanf_s("%d", &n3);

	printf("整数４：");
	scanf_s("%d", &n4);

	if (n1 < n2) n1 = n2;
	if (n1 < n3) n1 = n3;
	if (n1 < n3) n1 = n3;

	printf("最大値は%dです。\n", n1);
}