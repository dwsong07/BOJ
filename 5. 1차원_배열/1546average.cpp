#include <stdio.h>

int main() {
    int n, max = 0;
    float sum = 0;
    scanf("%d\n", &n);

    int b[n];
    for (int i = 0; i < n; i++) {
        scanf(" %d", &b[i]);
        if (max < b[i]) max = b[i];
    }
    
    for (int i = 0; i < n; i++) {
        sum += (float) b[i] / max * 100;
    }
    
    printf("%.3f", sum / n);
}