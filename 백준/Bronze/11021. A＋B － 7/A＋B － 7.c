#include <stdio.h>
int main(void) {
    int num, a, b;
    scanf("%d", &num);
    for (int i = 1; i < num + 1; i++) {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d\n", i, a + b);
    }
}