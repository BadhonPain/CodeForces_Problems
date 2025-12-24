#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int cases[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &cases[i]);
    }

    int police = 0, unt = 0;

    for (int i = 0; i < n; i++)
    {
        if (cases[i] == -1)
        {
            if (police > 0)
            {
                police--;
            }
            else
            {
                unt++;
            }
        }
        else
        {
            police += cases[i];
        }
    }

    printf("%d\n", unt);
    return 0;
}
