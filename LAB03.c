#include <stdio.h>

int main()
{
    int sum = 0, n = 0;

    while (scanf("%d", &n) == 1)
        sum += n%10;
    printf("%d\n", sum);
    return 0;
}
