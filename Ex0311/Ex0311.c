/*
��̐��l�̍��̒��x��\��
*/

#include<stdio.h>

main() {
	puts("��̐��l����͂���B");

	printf("�����`�F");
	int no1;
	scanf_s("%d", &no1);

	printf("�����a�F");
	int no2;
	scanf_s("%d", &no2);

	if (no1 - no2 <= 10) {
		puts("�����̍���10�ȉ��ł��B");
	}
	else {
		puts("�����̍���11�ȏ�ł��B");
	}
}