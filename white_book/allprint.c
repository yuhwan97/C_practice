#include <stdio.h>
#include "opop.h"

void all_print(Book book[], int i)
{
	printf("---------------------\n");
	for (int n = 0; n < i; n++) {
		printf("�̸�: %s\t", book[n].name);
		printf("��ȭ��ȣ: %s\n", book[n].num);
	}
	printf("---------------------\n");
}
