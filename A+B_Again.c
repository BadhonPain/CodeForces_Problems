#include <stdio.h>

int main()
{

    int t, n ;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%d", &n);
        int a = n / 10;
        int b = n % 10;
        printf("%d\n", a + b);
    }

    return 0;
}