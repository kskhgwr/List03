/*
�ǂݍ���3�̐��l�̍ŏ��l�����߂�i�O�����Z�q)
*/

#include<stdio.h>

main() {
	int n1, n2, n3;

	puts("�O�̐�������͂���B");

	printf("�����P�F");
	scanf_s("%d", &n1);

	printf("�����Q�F");
	scanf_s("%d", &n2);

	printf("�����R�F");
	scanf_s("%d", &n3);

	n1 = n1 < n2 ? n1 : n2;
	n1 = n1 < n3 ? n1 : n3;

	printf("�ŏ��l��%d�ł��B\n", n1);
}