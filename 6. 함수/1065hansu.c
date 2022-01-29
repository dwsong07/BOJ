#include <stdio.h>

int main() {
    int input;
    int ans = 0;
    scanf("%d", &input);

    if (input < 100) {
        printf("%d", input);
        return 0;
    }

    for (int i = 100; i <= input; i++) {
        int temp = i;
        int a = temp / 100;
        temp %= 100;
        int b= temp / 10;
        temp %= 10;
        int c = temp;

        if (2*b == a+c) ans +=1;
    }
    ans += 99;
    printf("%d", ans);

    return 0;
}