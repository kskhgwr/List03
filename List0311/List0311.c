/*
* 読み込んだ二つの数値の大きいほうの値を表示
*/

#include<stdio.h>

main() {
	int n1, n2;

	puts("二つの整数を入力せよ。");
	printf("整数1：");
	scanf_s("%d", &n1);

	printf("整数2：");
	scanf_s("%d", &n2);

	if (n1 > n2) {
		printf("大きいほうの値は%dです。\n", n1);
	}
	else {
		printf("大きいほうの値は%dです。\n", n2);
	}
}