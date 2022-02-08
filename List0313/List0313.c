/*
読み込んだ3つの数値の最大値を求める
*/

#include<stdio.h>

main() {
	int n1, n2, n3;

	puts("三つの整数を入力せよ。");

	printf("整数１：");
	scanf_s("%d", &n1);

	printf("整数２：");
	scanf_s("%d", &n2);

	printf("整数３：");
	scanf_s("%d", &n3);

	int max = n1;
	if (n2 > max) max = n2;
	if (n3 > max) max = n3;

	printf("最大値は%dです。\n", max);
}