#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    char first_char[100];
    char num_initial[] = {'O', 'T', 'T', 'F', 'F', 'S', 'S', 'E', 'N', 'T', 'E', 'T', 'T', 'F', 'F', 'S', 'S', 'E', 'N', 'T', 'T'};

    while (scanf("%s", first_char) != EOF){
        if(isalpha(first_char[0])){
            putchar(toupper(first_char[0]));
        }else if (isdigit(first_char[0])){
            int i = atoi(first_char);
            putchar(num_initial[i-1]);
        }else
            putchar(first_char);
    }
    return 0;
}
