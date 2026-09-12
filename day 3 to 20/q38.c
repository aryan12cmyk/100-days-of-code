#include <stdio.h>
int main() {
    long long n;
    int sum = 0, remainder;
    printf("Enter a number: ");
    scanf("%lld", &n);
    long long original = n;
    if (n < 0) n = -n;
    while (n != 0) {
        remainder = n % 10;
        sum += remainder;
        n /= 10;
    }
    printf("Sum of digits of %lld = %d\n", original, sum);
    return 0;
}
