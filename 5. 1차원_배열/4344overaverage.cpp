#include <stdio.h>

int main() {
    int n, m, sum, r;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        r = 0;
        sum = 0;
        scanf("%d", &m);

        int b[m];
        for (int j = 0; j < m; j++) {
            scanf("%d", &b[j]);
            sum += b[j];
        }
        for (int j = 0; j < m; j++) {
            if (b[j] > sum / m) r++;
        }
        printf("%.3f%\n", (float) r / m * 100);
    }
}