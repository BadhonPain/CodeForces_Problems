#include <stdio.h>
/*
 this code is also correct for the problem but it's time complexity more than
 required. That's mainly happening for running while loop inside for loop. When a large
 number will work as input it will create much complexity as a result we have to follow 
 Divisibility Problem for perfect submission. Otherwise, your submission will face (TLE)
 Time Limit Exceeds
*/ 
int main()
{
    int test, a, b;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        scanf("%d %d", &a, &b);
        int count = 0;
        while (a % b)
        {
            a++;
            count++;
        }
        printf("%d\n", count);
    }
    return 0;
} 