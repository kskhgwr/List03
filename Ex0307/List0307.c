/*
�ǂݍ���4�̐��l�̍ő�l�����߂�
*/

#include<stdio.h>

main() {
	int n1, n2, n3, n4;

	puts("�l�̐�������͂���B");

	printf("�����P�F");
	scanf_s("%d", &n1);

	printf("�����Q�F");
	scanf_s("%d", &n2);

	printf("�����R�F");
	scanf_s("%d", &n3);

	printf("�����S�F");
	scanf_s("%d", &n4);

	if (n1 < n2) n1 = n2;
	if (n1 < n3) n1 = n3;
	if (n1 < n3) n1 = n3;

	printf("�ő�l��%d�ł��B\n", n1);
}