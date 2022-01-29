#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = n / 5; i >= 0; i--) {
        int a = n - 5 * i;
        if (a % 3 == 0) {
            printf("%d", i + a / 3);
            return 0;
        }
    }
    printf("-1");
    return 0;
}