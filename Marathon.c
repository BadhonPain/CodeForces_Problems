#include <stdio.h>

int main()
{

    int t, a, b, c, d, k = 0;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if (a < b)
            k++;
        if (a < c)
            k++;
        if (a < d)
            k++;
        printf("%d\n", k);
        k = 0;
    }

    return 0;
}