/*
�ǂݍ��񂾐�������3�Ŋ�������]��\��
*/

#include<stdio.h>

main() {
	int no;

	printf("�����l�F");
	scanf_s("%d", &no);

	if (no % 3 == 0) {
		puts("�R�Ŋ���؂�܂��B");
	}
	else if (no % 3 == 1) {
		puts("�R�Ŋ�������]�͂P�ł��B");
	}
	else {
		puts("�R�Ŋ�������]�͂Q�ł��B");
	}
}