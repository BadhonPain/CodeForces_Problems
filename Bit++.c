#include <stdio.h>
#include <string.h>

int main() {
    int n, x = 0;
    scanf("%d", &n);

    char statement[4]; 

    for (int i = 0; i < n; i++) {
        scanf("%s", statement);
        if (strchr(statement, '+')) {
            x++;
        } else {
            x--;
        }
    }

    printf("%d\n", x);
    return 0;
}
