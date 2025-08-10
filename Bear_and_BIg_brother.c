#include <stdio.h>

int main()
{
    int a, b, k = 0;
    scanf("%d %d", &a, &b);
    while (a <= b)
    {
        a = 3 * a;
        b = 2 * b;
        k++;
    }

    printf("%d", k);

    return 0;
}