/*
�ǂݍ���3�̐��l�̍ő�l�����߂�
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

	int max = n1;
	if (n2 > max) max = n2;
	if (n3 > max) max = n3;

	printf("�ő�l��%d�ł��B\n", max);
}