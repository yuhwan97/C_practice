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
    printf("��ȭ��ȣ ����\n");
    do{

        printf("1.���\t2.��ü�˻�\t3.Ư���ΰ˻�\t4.����\n");
        printf("�޴�����: ");
        scanf("%d", &sel_service);
		if (sel_service == 4)
			break;
        if(wrong_PW == 0){
            printf("�н�����: ");
        }else
        {
            printf("�н�����(%dȸ����): ", wrong_PW);
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
		printf("***�н����� 3ȸ ����***\n");
    printf("���α׷��� �����մϴ�.");
    return 0;
}
