/*
	�ǂݍ��񂾌��̋G�߂�\��
*/
#include  <stdio.h>

int main(void)
{
	int	month;	/* �� */

	printf("�����ł����F");
	scanf_s("%d", &month);

	switch (month)
	{
		case  1 : printf("%d ���͓~�ł��B", month);	break;
		case  2 : printf("%d ���͓~�ł��B", month); break;
		case  3 : printf("%d ���͏t�ł��B", month); break;
		case  4 : printf("%d ���͏t�ł��B", month); break;
		case  5 : printf("%d ���͏t�ł��B", month); break;
		case  6 : printf("%d ���͉Ăł��B", month); break;
		case  7 : printf("%d ���͉Ăł��B", month); break;
		case  8 : printf("%d ���͉Ăł��B", month); break;
		case  9 : printf("%d ���͏H�ł��B", month); break;
		case 10 : printf("%d ���͏H�ł��B", month); break;
		case 11 : printf("%d ���͏H�ł��B", month); break;
		case 12 : printf("%d ���͓~�ł��B", month); break;
		default : puts("����Ȍ��͂���܂����!!\a") ; break;
	}

	return 0;
}
