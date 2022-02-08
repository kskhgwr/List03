/*
* 読み込んだ2つの整数値の差を求めて表示（条件演算子）
*/

#include<stdio.h>

main() {
	int n1, n2;

	puts("二つの整数を入力せよ。");

	printf("整数１：");
	scanf_s("%d", &n1);

	printf("整数２：");
	scanf_s("%d", &n2);

	printf("それらの差は%dです。\n", n1 > n2 ? n1 - n2 : n2 - n1);
}