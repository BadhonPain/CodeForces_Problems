#include <stdio.h>

int main()
{
    int red, blue;
    scanf("%d %d", &red, &blue);
    int days_of_wearing_diff_socks, days_of_wearing_socks;
    if (red < blue)
    {
        days_of_wearing_diff_socks = red;
        days_of_wearing_socks = (blue - red) / 2;
    }
    else
    {
        days_of_wearing_diff_socks = blue;
        days_of_wearing_socks = (red - blue) / 2;
    }
    printf("%d %d", days_of_wearing_diff_socks, days_of_wearing_socks);

    return 0;
}