/*
	Ex0309.c
*/

#include	<stdio.h>

int main(void)
{
	int	a, b, c;
	int min;	/* �ŏ��l��������ϐ� */

	puts("�O�̐�������͂��Ă��������B");
	printf("����1�F");
	scanf_s("%d", &a);
	printf("����2�F");
	scanf_s("%d", &b);
	printf("����3�F");
	scanf_s("%d", &c);
	min = a;
	min = (b < min) ? b : min;
	min = (c < min) ? c : min;

	//if (b < min){
	//	min = b;
	//}	
	//if (c < min){
	//	min = c;
	//}

	printf("�ŏ��l�� %d �ł��B\n", min);

	return 0;
}