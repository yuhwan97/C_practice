#include <stdio.h>
#include "opop.h"

void all_print(Book book[], int i)
{
	printf("---------------------\n");
	for (int n = 0; n < i; n++) {
		printf("이름: %s\t", book[n].name);
		printf("전화번호: %s\n", book[n].num);
	}
	printf("---------------------\n");
}
