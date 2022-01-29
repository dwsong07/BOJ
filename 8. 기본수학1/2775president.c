#include <stdio.h>

int f(int a, int b) {
    if (a == 0) {
        return b;
    }
    if (b == 1) {
        return 1;
    }
    return f(a-1, b) + f(a, b-1);
}

int main() {
    int t, k, n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d\n%d", &k, &n);
        printf("%d\n", f(k, n));
    }
    return 0;
}