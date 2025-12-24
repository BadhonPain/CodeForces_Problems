#include <stdio.h>

int main()
{
    int x, y, z, n;
    int sum = 0, sum_x = 0, sum_y = 0, sum_z = 0;
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        scanf("%d %d %d", &x, &y, &z);
        sum_x += x;
        sum_y += y;
        sum_z += z;
    }
    
    if (sum_x== 0 && sum_y==0 && sum_z==0)
        printf("YES\n");
    else
        printf("NO");

    return 0;
}