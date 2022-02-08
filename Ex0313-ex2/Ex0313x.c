/*
	読み込んだ月の季節を表示
*/
#include  <stdio.h>

int main(void)
{
	int	month;	/* 月 */

	printf("何月ですか：");
	scanf_s("%d", &month);

	switch (month)
	{
		case 12 :
		case  1 :
		case  2 : printf("%d 月は冬です。", month); break;
		case  3 :
		case  4 :
		case  5 : printf("%d 月は春です。", month); break;
		case  6 :
		case  7 :
		case  8 : printf("%d 月は夏です。", month); break;
		case  9 :
		case 10 :
		case 11 : printf("%d 月は秋です。", month); break;
		default : puts("そんな月はありませんよ!!\a") ; break;
	}

	return 0;
}
