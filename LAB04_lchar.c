#include <stdio.h>

char lastchar(char word[])
{
    int i = 0;
    char c = word[i];
    while (word[i] != '\0'){
        c = word[i];
        i++;
    }
    return c;
}

int main()
{
    char msg[81];
    char str[81];
    int i = 0;
    while (scanf("%s", msg) == 1){
        str[i] = lastchar(msg);
        i++;
    }
    printf(str);
    return 0;
}
