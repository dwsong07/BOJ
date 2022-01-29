#include <stdio.h>

int numLength(int n) {
    int x = 1;
    while (n/=10) {
        x++;
    }
    return x;
}

int main() {
    int a, b, c, d, e[10] = {0};
    scanf("%d\n%d\n%d", &a, &b, &c);
    int abc = a*b*c;
    int abcLen = numLength(abc);
    
    for (int i = 0; i < abcLen; i++) {
        d = abc % 10;
        abc /= 10;
        e[d]++;
    }
    
    for (int i = 0; i < 10; i++) {
        printf("%d\n", e[i]);
    }
}