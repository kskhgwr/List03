/*
読み込んだ3つの数値の最小値を求める
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

	int min = n1;
	if (min > n2) min = n2;
	if (min > n3) min = n3;

	printf("最小値は%dです。\n", min);
}