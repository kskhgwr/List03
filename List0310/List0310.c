/*
* �ǂݍ��񂾐����l�����ł���΋����^��̕ʂ𔻒肵�ĕ\��
*/

#include<stdio.h>

main() {
	int no;

	printf("��������͂���F");
	scanf_s("%d", &no);

	if (no > 0) {
		if (no % 2 == 0) {
			puts("���̐��͋����ł��B");
		}
		else {
			puts("���̐��͊�ł��B");
		}
	}
	else {
		puts("���łȂ��l�����͂���܂����B\a\n");
	}
}