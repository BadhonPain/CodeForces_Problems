#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    char queue[n];
    scanf("%s", queue);
    while (k)
    {
        for (int i = 0; i < n;)
        {
            if (queue[i] == 'B' && queue[i + 1] == 'G')
            {
                char temp = queue[i];
                queue[i] = queue[i + 1];
                queue[i + 1] = temp;
                i += 2;
            }
            else
                i++;
        }

        k--;
    }
    printf("%s", queue);

    return 0;
}
