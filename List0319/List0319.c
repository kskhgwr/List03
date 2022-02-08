/*
読み込んだ整数うを3で割った剰余を表示
*/

#include<stdio.h>

main() {
	int no;

	printf("整数値：");
	scanf_s("%d", &no);

	if (no % 3 == 0) {
		puts("３で割り切れます。");
	}
	else if (no % 3 == 1) {
		puts("３で割った剰余は１です。");
	}
	else {
		puts("３で割った剰余は２です。");
	}
}