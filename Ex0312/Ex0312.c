/*
�ǂݍ��񂾐����l�͊�ł��邩�����ł��邩
*/

#include<stdio.h>

main() {
	int n;

	printf("��������͂���F");
	scanf_s("%d", &n);

	switch (n % 2)
	{
	case  0:
		puts("���̐��͋����ł��B");
		break;
	case  1:
	case -1:
		puts("���̐��͊�ł��B");
		break;
	default:
		puts("���������ł��B");
		break;
	}
}