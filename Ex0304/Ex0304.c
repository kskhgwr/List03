/*
* 二つの数値の比較
*/

#include<stdio.h>

main()
{
	puts("二つの整数を入力せよ。");
	
	int no1;
	printf("整数A：");
	scanf_s("%d", &no1);

	int no2;
	printf("整数B：");
	scanf_s("%d", &no2);

	if (no1 == no2) {
		puts("AとBは等しいです。");
	}
	else if (no1 > no2) {
		puts("AはBより大きいです。");
	}
	else {
		puts("AはBより小さいです。");
	}
}