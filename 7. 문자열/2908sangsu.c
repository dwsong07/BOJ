#include <stdio.h>

int swap(int n) {
    int a = n / 100; n%=100;
    int b = n / 10; n%=10;
    int c = n;

    return 100*c+10*b+a;
}

int main () {
    int a, b;
    scanf("%d %d", &a, &b);
    int c = swap(a), d = swap(b);
    printf("%d", c>d?c:d);
    return 0;
}

