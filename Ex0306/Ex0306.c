/*
�ǂݍ���3�̐��l�̍ŏ��l�����߂�
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

	int min = n1;
	if (min > n2) min = n2;
	if (min > n3) min = n3;

	printf("�ŏ��l��%d�ł��B\n", min);
}