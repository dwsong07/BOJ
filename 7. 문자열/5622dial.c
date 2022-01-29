#include <stdio.h>
#include <string.h>

int main() {
    char s[16];
    int a, b = 0;
    scanf("%s", &s);
    short len = strlen(s);
    for (int i = 0; i < len; i++) {
        switch (s[i]) {
            case 'A':case 'B':case'C':
                a = 2;
                break;
            case 'D':case 'E':case 'F':
                a = 3;
                break;
            case 'G':case 'H':case 'I':
                a = 4;
                break;
            case 'J':case 'K':case 'L':
                a = 5;
                break;
            case 'M':case 'N':case 'O':
                a = 6;
                break;
            case 'P':case 'Q':case 'R':case 'S':
                a = 7;
                break;
            case 'T':case 'U':case 'V':
                a = 8;
                break;
            case 'W':case 'X':case 'Y':case 'Z':
                a = 9;
                break;
        }

        b += a + 1;
    }
    printf("%d", b);
    return 0;
}