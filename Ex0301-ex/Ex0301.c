/*
	Ex0301.c
*/
#include	<stdio.h>

int main(void)
{
	int a, b;
	puts("��̐�������͂��Ă�������");
	printf("����A�F");
	scanf_s("%d", &a);
	printf("����B�F");
	scanf_s("%d", &b);

	if (a % b) {
		puts("B��A�̖񐔂ł͂���܂���B");	//	������
	}
	else {
		puts("B��A�̖񐔂ł��B");	//	������
	}
	return 0;
}

