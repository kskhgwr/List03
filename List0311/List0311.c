/*
* �ǂݍ��񂾓�̐��l�̑傫���ق��̒l��\��
*/

#include<stdio.h>

main() {
	int n1, n2;

	puts("��̐�������͂���B");
	printf("����1�F");
	scanf_s("%d", &n1);

	printf("����2�F");
	scanf_s("%d", &n2);

	if (n1 > n2) {
		printf("�傫���ق��̒l��%d�ł��B\n", n1);
	}
	else {
		printf("�傫���ق��̒l��%d�ł��B\n", n2);
	}
}