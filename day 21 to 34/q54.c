#include <stdio.h>
int main() {
    int n;
    printf("Enter n (e.g. 4 for max width 7): ");
    scanf("%d", &n);

    printf("\n");
    /* Top half: increasing, right aligned within width 2n-1 */
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
    printf("\n");
    return 0;
}
