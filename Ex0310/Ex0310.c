/*
	3�̐�����ǂݍ���Ŕ�r���ʂ�\������
*/

#include<stdio.h>

main() {
	puts("�O�̐�����͂���B");

	printf("����A:");
	int no1;
	scanf_s("%d", &no1);

	printf("����B:");
	int no2;
	scanf_s("%d", &no2);

	printf("����C:");
	int no3;
	scanf_s("%d", &no3);

	if (no1 == no2 == no3) {
		puts("3�̒l�͓������ł��B");
	}
	else if ((no1 == no2) || (no2 == no3) || (no3 == no1)) {
		puts("2�̒l�͓������ł��B");
	}
	else {
		puts("�O�̒l�͈قȂ�܂��B");
	}
}