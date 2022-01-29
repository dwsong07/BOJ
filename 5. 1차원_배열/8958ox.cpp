#include <stdio.h>
#include <string.h>

int main() {
    int n, combo = 0, score;
    scanf("%d", &n);
    char a[80];
    for (int i = 0; i < n; i++) {
        score = 0;
        combo = 0;
        scanf("%s", a);
        for (int j = 0; j < strlen(a); j++) {
            if (a[j] == 'O') score += ++combo;
            else combo = 0;
        }
        printf("%d\n", score);
    }
}