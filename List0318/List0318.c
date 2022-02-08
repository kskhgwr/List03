/*
読み込んだ月の季節を表示
*/

#include<stdio.h>

main() {
	int month;

	printf("何月ですか：");
	scanf_s("%d", &month);

	printf("%d月は", month);
	if (3 <= month && month <= 5) {
		puts("春です。");
	}
	else if (6 <= month && month <= 8) {
		puts("夏です。");
	}
	else if (9 <= month && month <= 11) {
		puts("秋です。");
	}
	else if (month == 1 || month == 2 || month == 12) {
		puts("冬です。");
	}
	else {
		puts("ありませんよ！！\a");
	}
		
}