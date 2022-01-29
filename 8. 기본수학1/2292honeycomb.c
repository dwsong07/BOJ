#include <stdio.h>

int main () {
    int a;
    scanf("%d", &a);

    int n = 1, m = 1;
    while (n < a) {
        n += 6*(m++);
    }
    printf("%d", m);
    return 0;
}