#include <stdio.h>
#include <string.h>
#include"opop.h"

void regist(Book *book)
{
    printf("����� �̸�: ");
    scanf("%s", (*book).name);
    printf("��ȭ��ȣ: ");
    scanf("%s", (*book).num);
    printf("���� ��� �Ϸ�!\n");

}
