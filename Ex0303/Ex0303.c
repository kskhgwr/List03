/*
* 入力された値の絶対値を求めて表示する
*/

#include<stdio.h>
#include<stdlib.h>

main()
{
	printf("整数を入力せよ：");
	int no;
	scanf_s("%d", &no);

	printf("絶対値は%dです。", abs(no));
}