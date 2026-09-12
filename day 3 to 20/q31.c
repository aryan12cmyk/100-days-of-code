#include <stdio.h>
int main() {
    long long n, binary = 0;
    int remainder, place = 1;
    printf("Enter a number: ");
    scanf("%lld", &n);
    long long original = n;
    while (n != 0) {
        remainder = n % 2;
        binary += remainder * place;
        n /= 2;
        place *= 10;
    }
    printf("Binary representation of %lld = %lld\n", original, binary);
    return 0;
}
