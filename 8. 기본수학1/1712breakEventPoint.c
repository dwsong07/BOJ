#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d", &a, &b, &c);
    if (c == b) d = -1;
    else {
        d = a/(c-b)+1;
        if (d<=0) d = -1;
    }
    printf("%d", d);
    return 0;
}