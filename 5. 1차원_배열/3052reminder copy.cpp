#include <stdio.h>
#include <set>

int main() {
    int b;
    std::set<int> a;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &b);
        a.insert(b % 42);
    }

    printf("%d", a.size());
    return 0;
}