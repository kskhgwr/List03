/*
�ǂݍ��񂾐����l�͊�ł��邩�����ł��邩
*/

#include<stdio.h>

main() {
	int n;

	printf("��������͂���F");
	scanf_s("%d", &n);

	if (n % 2)
		puts("���̐��͊�ł��B");
	else
		puts("���̐��͋����ł��B");
}