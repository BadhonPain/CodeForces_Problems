#include <stdio.h>

int main()
{
    int n, count = 0;
    scanf("%d", &n);
    char stone[n];
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &stone[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {

        if (stone[i] == stone[i + 1] )
            count++;
    }
    printf("%d", count);

    return 0;
}