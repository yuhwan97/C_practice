#include <stdio.h>
#include <string.h>
#include "opop.h"
void personal_print(Book book[], int i)
{
    char entered_name[10];
    printf("�˻��� �̸�: ");
    scanf("%s", entered_name);
	for (int n = 0; n < i; n++) {
		if (strcmp(book[n].name, entered_name) == 0) {
			printf("�̸�: %s\t", book[n].name);
			printf("��ȭ��ȣ: %s\n", book[n].num);
		}
	}

}
