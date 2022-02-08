// 読み込んだ二つの整数値の差を求めて表示（条件演算子）をif文に変更

#include <stdio.h>

int main(void)
{
	int n1, n2;
	int diff;
	puts("二つの整数を入力せよ。");
	printf("整数１：");   scanf_s("%d", &n1);
	printf("整数２：");   scanf_s("%d", &n2);

//	printf("それらの差は%dです。\n", n1 > n2 ? n1 - n2 : n2 - n1);
	if (n1 > n2) {
		diff = n1 - n2;
	}
	else {
		diff = n2 - n1;
	}
	printf("それらの差は%dです。\n", diff);

	return 0;
}
