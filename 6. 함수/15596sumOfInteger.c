#include <stdio.h>

long long sum(int *a, int n) {
    long long ans = 0;
    for (int i = 0; i < n; i++ ) {
        ans += a[i];
    }
    return ans;
}


int main() {
    int array[] = {5, 8, 3, 2};
    int a = sum(array, 4);
    printf("%d", a);
}