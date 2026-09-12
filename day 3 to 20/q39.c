#include <stdio.h>
int main() {
    long long n;
    long long product = 1;
    int remainder, hasOddDigit = 0;
    printf("Enter a number: ");
    scanf("%lld", &n);
    long long original = n;
    if (n < 0) n = -n;
    while (n != 0) {
        remainder = n % 10;
        if (remainder % 2 != 0) {
            product *= remainder;
            hasOddDigit = 1;
        }
        n /= 10;
    }
    if (hasOddDigit)
        printf("Product of odd digits of %lld = %lld\n", original, product);
    else
        printf("%lld has no odd digits\n", original);
    return 0;
}
