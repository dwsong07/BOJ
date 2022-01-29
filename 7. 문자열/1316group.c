#include <stdio.h>

int main() {
    int n, a = 0; char s[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", &s);
        int al[26] = {0};
        for (int j = 0; s[j] != '\0'; j++) {
            if (++al[s[j] - 'a'] > 1 && s[j-1] != s[j]) {
                a++;
                break;
            }
        }
    }
    printf("%d", n-a);
    return 0;
}