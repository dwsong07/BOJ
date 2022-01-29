#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int m = 0, i = 1;
    while (m < a) {
        m += i++;
    }

    if (i % 2) {
        printf("%d/%d", i+a-m-1, m-a+1);
    } else {
        printf("%d/%d", m-a+1, i+a-m-1);
    }
    return 0;
}