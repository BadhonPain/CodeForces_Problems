#include <stdio.h>

int main()
{
    int citizen;
    scanf("%d", &citizen);
    int burel[citizen];
    for (int i = 0; i < citizen; i++)
    {
        scanf("%d", &burel[i]);
    }
    int max = burel[0];
    for (int i = 1; i < citizen; i++)
    {
        if (burel[i] > max)
        {
            max = burel[i];
        }
    }
    int sum = 0;
    for (int i = 0; i < citizen; i++)
    {
        sum += max - burel[i];
    }
    printf("%d", sum);

    return 0;
}