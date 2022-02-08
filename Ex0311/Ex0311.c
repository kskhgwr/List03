/*
二つの数値の差の程度を表示
*/

#include<stdio.h>

main() {
	puts("二つの数値を入力せよ。");

	printf("整数Ａ：");
	int no1;
	scanf_s("%d", &no1);

	printf("整数Ｂ：");
	int no2;
	scanf_s("%d", &no2);

	if (no1 - no2 <= 10) {
		puts("それらの差は10以下です。");
	}
	else {
		puts("それらの差は11以上です。");
	}
}