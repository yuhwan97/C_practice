#include <stdio.h>
#include <string.h>
#include"opop.h"

void regist(Book *book)
{
    printf("등록할 이름: ");
    scanf("%s", (*book).name);
    printf("전화번호: ");
    scanf("%s", (*book).num);
    printf("정보 등록 완료!\n");

}
