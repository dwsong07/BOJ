#include <stdio.h>

int d(int n) {
    int sum = 0;
    int b = n;

    while (b != 0) {
        sum += (b %  10);
        b /= 10;
    }

    return sum + n;
}

int main() {
    int asdf[10000] = {};

    for (int i = 1; i <= 10000; i++) {
        int brrr = d(i);
        if (brrr <= 10000) asdf[brrr - 1] = 1;
    }

    for (int i = 0; i < 10000; i++) {
        if (!asdf[i]) printf("%d\n", i+1);
    }
}
