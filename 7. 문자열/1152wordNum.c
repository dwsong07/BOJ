#include <string.h>
#include <stdio.h>

int main() {
    char s[1000001];
    scanf("%[^\n]", &s);
    int len = strlen(s);

    if (len == 1 && s[0] == ' ') {
        printf("0");
        return 0;
    }

    int a = 0;
    for (int i = 1; i < len - 1; i++) {
        if (s[i] == ' ') a++;
    }

    if (a == 0) printf("1");
    else printf("%d", a+1);
    return 0;
}
