#include <stdio.h>
#include <string.h>
#include "opop.h"


int i = 0;
static int wrong_PW = 0;
int main()
{
    int sel_service;
	Book book[10];
    char PW[] = "qwer1234";
    char entered_PW[10];
    printf("전화번호 관리\n");
    do{

        printf("1.등록\t2.전체검색\t3.특정인검색\t4.종료\n");
        printf("메뉴선택: ");
        scanf("%d", &sel_service);
		if (sel_service == 4)
			break;
        if(wrong_PW == 0){
            printf("패스워드: ");
        }else
        {
            printf("패스워드(%d회실패): ", wrong_PW);
        }
        scanf("%s", entered_PW);
        if(strcmp(entered_PW, PW) == 0){
        switch(sel_service){
        case 1:
            regist(&book[i]);
			i++;
			break;
        case 2:
			all_print(book, i);
			break;
        case 3:
			personal_print(book, i);
			break;
        }
        }
        else
        {
            wrong_PW++;
        }
    }while(wrong_PW != 3);
	if (wrong_PW == 3)
		printf("***패스워드 3회 오류***\n");
    printf("프로그램을 종료합니다.");
    return 0;
}
