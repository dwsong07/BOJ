#include <stdio.h>
#include <math.h>

int main() {
    int n, x, y, d, k;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        d = y - x;
        k = sqrt(d-1);
        if (d > k*(k+1)) {
            printf("%d\n", 2*k+1);
        } else {
            printf("%d\n", 2*k);
        }
    }

    return 0;
}