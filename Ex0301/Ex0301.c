/*
	入力された数値２つの数値が約数かどうかを判定する
*/

#include<stdio.h>

int main(void) {
	int A, B;

	puts("二つの整数を入力せよ。");
	printf("整数A：");
	scanf_s("%d", &A);

	printf("整数B：");
	scanf_s("%d", &B);

	if (A % B == 0) {
		puts("BはAの約数です。");
	}
	else {
		puts("BはAの約数ではありません。");
	}
}