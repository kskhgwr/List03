/*
* ��̐��l�̔�r
*/

#include<stdio.h>

main()
{
	puts("��̐�������͂���B");
	
	int no1;
	printf("����A�F");
	scanf_s("%d", &no1);

	int no2;
	printf("����B�F");
	scanf_s("%d", &no2);

	if (no1 == no2) {
		puts("A��B�͓������ł��B");
	}
	else if (no1 > no2) {
		puts("A��B���傫���ł��B");
	}
	else {
		puts("A��B��菬�����ł��B");
	}
}