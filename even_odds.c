#include <stdio.h>

int main()
{
    int n, target;
    scanf("%d %d", &n, &target);
    int arr[target];

    for (int i = 0; i < target; i++)
    {
        arr[i] = 2 * i + 1;

        if (arr[i] > n)
        {
            if (n % 2 == 0)
            {
                arr[i] = arr[i] - n + 1;
            }
            else
                arr[i] -= n;
        }
    }
    printf("\n%d", arr[target - 1]);

    return 0;
}