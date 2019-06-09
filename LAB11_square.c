#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    enum{NUM, STR} tag;
    union{
    int num;
    char str[11]
    };
}Price;


int main()
{
    Price price[500];
    int n;
    char c[11];
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%s", &c);
        if(isdigit(c[0])||c[0] == '-'){
            price[i].tag = 0;
            price[i].num = atoi(c);
        }
        else{
            price[i].tag = 1;
            strcpy(price[i].str, c);
        }
    }

    for(int i = n-1; i >= 0; i--){
        if(price[i].tag == 0){
            printf("%d", price[i].num*price[i].num);
            if(i != 0)
                printf(" ");
        }
        else{
            printf("%s%s", price[i].str,price[i].str);
            if(i != 0)
                printf(" ");
        }
    }

    return 0;
}
