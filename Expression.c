#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d\n%d\n%d", &a, &b, &c);
    int value1 = a + b * c;
    int value2 = a * (b + c);
    int value3 = a * b * c;
    int value4 = (a + b) * c;
    int value5 = a + b + c;
    int max_value1 = (value1 > value2) ? value1 : value2;
    int max_value2 = (value3 > value4) ? value3 : value4;
    printf("%d", ((max_value1 > max_value2 ? max_value1 : max_value2) > value5 ? (max_value1 > max_value2 ? max_value1 : max_value2) : value5));

    return 0;
}