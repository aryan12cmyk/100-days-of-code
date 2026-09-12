#include <stdio.h>
int main() {
    int n, sum = 0, num = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += num;
        num += 2;
    }
    printf("Sum of first %d odd numbers = %d\n", n, sum);
    return 0;
}
