/*
	Ex0307.c
*/

#include	<stdio.h>

int main(void)
{
	int	a, b, c, d, max;

	puts("�l�̐�������͂��Ă��������B");
	printf("����1�F");
	scanf_s("%d", &a);

	printf("����2�F");
	scanf_s("%d", &b);

	printf("����3�F");
	scanf_s("%d", &c);

	printf("����4�F");
	scanf_s("%d", &d);

	max = a;
	if (b > max){
		max = b;
	}
	if (c > max){
		max = c;
	}
	if (d > max){
		max = d;
	}

	printf("�ő�l�� % d�ł��B\n", max);

	return 0;
}