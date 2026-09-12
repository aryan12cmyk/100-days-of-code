#include <stdio.h>
int main() {
    int n;
    printf("Enter n (e.g. 5 for max width 9): ");
    scanf("%d", &n);

    /* Top half: increasing */
    for (int i = 1; i <= n; i++) {
        for (int s = 0; s < n - i; s++)
            printf(" ");
        for (int j = 0; j < 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
    /* Bottom half: decreasing */
    for (int i = n - 1; i >= 1; i--) {
        for (int s = 0; s < n - i; s++)
            printf(" ");
        for (int j = 0; j < 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
