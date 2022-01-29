#include <stdio.h>
#include <vector>
#include <string.h>

int main() {
    char s[100];
    std::vector<int> a(26, -1);
    scanf("%s", &s);

    for (int i = strlen(s) - 1; i >= 0; i--) {
        a[s[i] - 'a'] = i;
    }
    
    for (int i = 0; i < 26; i++) {
        printf("%d ", a[i]);
    }
}