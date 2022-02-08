/*
	3つの数字を読み込んで比較結果を表示する
*/

#include<stdio.h>

main() {
	puts("三つの数を入力せよ。");

	printf("整数A:");
	int no1;
	scanf_s("%d", &no1);

	printf("整数B:");
	int no2;
	scanf_s("%d", &no2);

	printf("整数C:");
	int no3;
	scanf_s("%d", &no3);

	if (no1 == no2 == no3) {
		puts("3つの値は等しいです。");
	}
	else if ((no1 == no2) || (no2 == no3) || (no3 == no1)) {
		puts("2つの値は等しいです。");
	}
	else {
		puts("三つの値は異なります。");
	}
}