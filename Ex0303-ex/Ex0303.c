//	Ex0303.c

#include  <stdio.h>

int main(void)
{
	int	num;

	printf("��������͂��Ă��������F");
	scanf_s("%d", &num);

	//if (num < 0) {
	//	num = -num;
	//}
	//printf("���̐��̐�Βl�� %d �ł��B\n", num);

	if (num < 0) {
		printf("���̐��̐�Βl�� %d �ł��B\n", -num);
	}
	else {
		printf("���̐��̐�Βl�� %d �ł�\n", num);
	}

	return 0;
}