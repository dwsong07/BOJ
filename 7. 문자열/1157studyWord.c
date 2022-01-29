#include <stdio.h>
#include <string.h>

int main() {
    char a[1000001];
    int b[26];
    scanf("%s", &a);
    int len = strlen(a);

    for (int i = 0; i < len; i++) {
        if (a[i] >= 'a') {
            b[a[i] - 'a']++;
        } else {
            b[a[i] - 'A']++;
        }
    }

    int m = 0; char c = 'A';
    for (int i = 1; i < 26; i++) {
        if (b[i] > b[m]) {
            m = i;
            c = i + 'A';
        } else if (b[i] == b[m]) {
            c = '?';
        }
    }

    printf("%c", c);
    return 0;
}