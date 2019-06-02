#include <stdio.h>

int main()
{
    int n = 0;
    char msg[81];
    char *p = msg;
    scanf("%s", msg);

    while (*p != '\0') {
        if (n%2 == 0 )
            printf("%c\n", *p);
        p++;
        n++;
    }
    return 0;

}
