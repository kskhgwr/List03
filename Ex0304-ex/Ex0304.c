/*
	Ex0304.c
*/
#include	<stdio.h>

int main(void)
{
	int	a, b;

	puts("��̐�������͂��ĉ������B");

	printf("�����`�F");
	scanf_s("%d", &a);
	printf("�����a�F");
	scanf_s("%d", &b);

	if (a == b) {
		puts("A��B�͓������ł��B");
	} else if (a > b) {
		puts("A��B���傫���ł��B");
	} else {
		puts("A��B��菬�����ł��B");
	}
	return 0;
}