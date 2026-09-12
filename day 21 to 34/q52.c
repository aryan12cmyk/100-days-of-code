#include <stdio.h>
/* Prints vertical star groups of increasing then decreasing height:
   1, 3, 5, ..., (2n-1), ..., 5, 3, 1
   with a blank line after each group. */
int main() {
    int n;
    printf("Enter n (max height parameter, e.g. 3 for max 5 stars): ");
    scanf("%d", &n);

    /* increasing part: 1, 3, 5, ... up to 2n-1 */
    for (int k = 1; k <= n; k++) {
        int count = 2 * k - 1;
        for (int s = 0; s < count; s++)
            printf("*\n");
        printf("\n");
    }
    /* decreasing part: back down to 1 */
    for (int k = n - 1; k >= 1; k--) {
        int count = 2 * k - 1;
        for (int s = 0; s < count; s++)
            printf("*\n");
        printf("\n");
    }
    return 0;
}
