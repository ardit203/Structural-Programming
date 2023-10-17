#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // top row
    printf("+");
    for (int i = 1; i < n - 1; i++) {
        printf("+");
    }
    printf("+\n");

    // middle rows
    for (int i = 1; i < n - 1; i++) {
        printf("+");
        for (int j = 1; j < n - 1; j++) {
            printf("-");
        }
        printf("+\n");
    }

    // bottom row
    printf("+");
    for (int i = 1; i < n - 1; i++) {
        printf("+");
    }
    printf("+\n");

    return 0;
}
