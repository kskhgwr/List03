/*
読み込んだ整数うを3で割った剰余を表示
*/

#include<stdio.h>
int main() {
	int no;

	printf("整数値：");
	scanf_s("%d", &no);

	switch (no % 3)
	{
	case 0:
		puts("３で割り切れます。");
		break;
	case 1:
		puts("３で割った剰余は１です。");
		break;
	case 2:
		puts("３で割った剰余は２です。");
		break;
	default:
		puts("おかしい");
		break;
	}
}