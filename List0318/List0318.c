/*
�ǂݍ��񂾌��̋G�߂�\��
*/

#include<stdio.h>

main() {
	int month;

	printf("�����ł����F");
	scanf_s("%d", &month);

	printf("%d����", month);
	if (3 <= month && month <= 5) {
		puts("�t�ł��B");
	}
	else if (6 <= month && month <= 8) {
		puts("�Ăł��B");
	}
	else if (9 <= month && month <= 11) {
		puts("�H�ł��B");
	}
	else if (month == 1 || month == 2 || month == 12) {
		puts("�~�ł��B");
	}
	else {
		puts("����܂����I�I\a");
	}
		
}