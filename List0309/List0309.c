/*
	�ǂݍ��񂾐����l�̕����𔻒�
*/

#include<stdio.h>

main() {
	int no;
	printf("�����l����͂���F");
	scanf_s("%d", &no);

	if (no == 0) {
		puts("���̐���0�ł��B");
	}
	else if (no > 0) {
		puts("���̐��͐��ł��B");
	}
	else {
		puts("���̐��͕��ł�");
	}
}