#include <stdio.h>
int main()

{
    int p, q, r, s, max;
    scanf("%d %d %d %d", &p, &q, &r, &s);

    max = (p > q && p > r) ? p : (q > r) ? q
                                         : r;
    max = (max > s) ? max : s;

    if (max - p != 0)
    {
        printf("%d ", max - p);
    }
    if (max - q != 0)
    {
        printf("%d ", max - q);
    }
    if (max - r != 0)
    {
        printf("%d ", max - r);
    }
    if (max - s != 0)
    {
        printf("%d ", max - s);
    }

    return 0;
}


