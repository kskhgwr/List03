/*
* �ǂݍ���2�̐����l�̍������߂ĕ\���i�������Z�q�j
*/

#include<stdio.h>

main() {
	int n1, n2;

	puts("��̐�������͂���B");

	printf("�����P�F");
	scanf_s("%d", &n1);

	printf("�����Q�F");
	scanf_s("%d", &n2);

	printf("�����̍���%d�ł��B\n", n1 > n2 ? n1 - n2 : n2 - n1);
}