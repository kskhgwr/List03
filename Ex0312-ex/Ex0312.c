/*
	Ex0312.c
*/
#include  <stdio.h>

int main(void)
{
	int	 no;

	printf("��������͂��Ă��������F");
	scanf_s("%d", &no);

	switch (no % 2)	{
		case 0 : puts("���̐��͋����ł��B");		break;
		case 1 : 
		case -1: puts("���̐��͊�ł��B");		break;
		default: puts("�\�z���Ȃ����ʂł��B");	break;
	}

	return 0;
}
