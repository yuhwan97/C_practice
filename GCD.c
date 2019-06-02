#include <stdio.h>

int gcd(int a, int b){
    if (a == b)
        return a;
    else if (a > b)
        return gcd(b, a);
    else
        return gcd(a, b-a);
}

int main()
{
    int a, b;

    while (scanf("%d%d", &a, &b)){
        printf("%d\n", gcd(a, b));
    }
    return 0;
}
