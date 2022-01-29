#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    scanf("%s", s);
    int a = strlen(s);
    int len = a;
    for (int i = 0; i < len; i++) {
        if (s[i] == '=' || s[i] == '-') a--;
        if (s[i] == 'd' && s[i+1] == 'z' && s[i+2] == '=') a--;
        if ((s[i] == 'l' || s[i] == 'n') && s[i+1] == 'j') a--;
    }
    printf("%d", a);
    return 0;
}