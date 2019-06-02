#include <stdio.h>
#include <string.h>

int main()
{
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    char line[256];
    while(fgets(line, 256, stdin) != NULL) {
            for(int n = 0; n < strlen(line); n++){
                switch(line[n]){

                case 'A' :
                case 'a':
                    a++;
                    break;
                case 'E':
                case 'e':
                    e++;
                    break;
                case 'I':
                case 'i':
                    i++;
                    break;
                case 'O':
                case 'o':
                    o++;
                    break;
                case 'U':
                case 'u':
                    u++;
                    break;
                    }
        }
        printf("%d %d %d %d %d \n", a, e, i, o, u);
        a = 0, e = 0, i = 0, o = 0, u = 0;
    }
    return 0;
}
