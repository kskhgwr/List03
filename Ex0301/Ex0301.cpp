/*
	���͂��ꂽ���l�Q�̐��l���񐔂��ǂ����𔻒肷��
*/

#include<stdio.h>

int main(void) {
	int A, B;

	puts("��̐�������͂���B");
	printf("����A�F");
	scanf_s("%d", &A);

	printf("����B�F");
	scanf_s("%d", &B);

	if (A % B == 0) {
		puts("B��A�̖񐔂ł��B");
	}
	else {
		puts("B��A�̖񐔂ł͂���܂���B");
	}
}