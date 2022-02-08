//	Ex0303.c

#include  <stdio.h>

int main(void)
{
	int	num;

	printf("整数を入力してください：");
	scanf_s("%d", &num);

	//if (num < 0) {
	//	num = -num;
	//}
	//printf("その数の絶対値は %d です。\n", num);

	if (num < 0) {
		printf("その数の絶対値は %d です。\n", -num);
	}
	else {
		printf("その数の絶対値は %d です\n", num);
	}

	return 0;
}