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

	int max;
	if (n1 > n2) max = n1; else max = n2;
	printf("�傫���ق��̒l��%d�ł��B\n", max);
}