/*
* �ǂݍ���2�̐����l�̍������߂ĕ\���iif���j
*/

#include<stdio.h>

main() {
	int n1, n2;

	puts("��̐�������͂���B");

	printf("�����P�F");
	scanf_s("%d", &n1);

	printf("�����Q�F");
	scanf_s("%d", &n2);

	if (n1 > n2) {
		n1 -= n2;
	}
	else {
		n1 = n2 - n1;
	}

	printf("�����̍���%d�ł��B\n", n1);
}