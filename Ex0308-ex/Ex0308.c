// �ǂݍ��񂾓�̐����l�̍������߂ĕ\���i�������Z�q�j��if���ɕύX

#include <stdio.h>

int main(void)
{
	int n1, n2;
	int diff;
	puts("��̐�������͂���B");
	printf("�����P�F");   scanf_s("%d", &n1);
	printf("�����Q�F");   scanf_s("%d", &n2);

//	printf("�����̍���%d�ł��B\n", n1 > n2 ? n1 - n2 : n2 - n1);
	if (n1 > n2) {
		diff = n1 - n2;
	}
	else {
		diff = n2 - n1;
	}
	printf("�����̍���%d�ł��B\n", diff);

	return 0;
}
