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
		case 12 :
		case  1 :
		case  2 : printf("%d ���͓~�ł��B", month); break;
		case  3 :
		case  4 :
		case  5 : printf("%d ���͏t�ł��B", month); break;
		case  6 :
		case  7 :
		case  8 : printf("%d ���͉Ăł��B", month); break;
		case  9 :
		case 10 :
		case 11 : printf("%d ���͏H�ł��B", month); break;
		default : puts("����Ȍ��͂���܂����!!\a") ; break;
	}

	return 0;
}
