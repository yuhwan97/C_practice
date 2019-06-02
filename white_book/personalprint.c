#include <stdio.h>
#include <string.h>
#include "opop.h"
void personal_print(Book book[], int i)
{
    char entered_name[10];
    printf("검색할 이름: ");
    scanf("%s", entered_name);
	for (int n = 0; n < i; n++) {
		if (strcmp(book[n].name, entered_name) == 0) {
			printf("이름: %s\t", book[n].name);
			printf("전화번호: %s\n", book[n].num);
		}
	}

}
