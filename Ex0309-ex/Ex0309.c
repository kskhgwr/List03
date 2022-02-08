/*
	Ex0309.c
*/

#include	<stdio.h>

int main(void)
{
	int	a, b, c;
	int min;	/* 最小値を代入する変数 */

	puts("三つの整数を入力してください。");
	printf("整数1：");
	scanf_s("%d", &a);
	printf("整数2：");
	scanf_s("%d", &b);
	printf("整数3：");
	scanf_s("%d", &c);
	min = a;
	min = (b < min) ? b : min;
	min = (c < min) ? c : min;

	//if (b < min){
	//	min = b;
	//}	
	//if (c < min){
	//	min = c;
	//}

	printf("最小値は %d です。\n", min);

	return 0;
}