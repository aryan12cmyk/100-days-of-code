#include <stdio.h>
/* Series: 1 + 3/4 + 5/6 + 7/8 + ... up to n terms
   Term 1 = 1/1, and term i (i >= 2) = (2i-1)/(2i) */
int main() {
    int n;
    double sum = 0.0;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        double numerator = 2 * i - 1;
        double denominator = (i == 1) ? 1 : 2 * i;
        sum += numerator / denominator;
    }
    printf("Approximate sum: %.2lf\n", sum);
    return 0;
}
