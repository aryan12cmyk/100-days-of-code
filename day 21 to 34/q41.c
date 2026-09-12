#include <stdio.h>
#include <math.h>
int main() {
    long long n, original, firstDigit, lastDigit, middle, digits = 0, temp, result;
    printf("Enter a number: ");
    scanf("%lld", &n);
    original = n;
    temp = n;
    if (temp == 0) digits = 1;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }
    if (digits == 1) {
        printf("Result = %lld\n", original);
        return 0;
    }
    long long power = (long long)pow(10, digits - 1);
    firstDigit = original / power;
    lastDigit = original % 10;
    middle = (original % power) / 10;
    result = lastDigit * power + middle * 10 + firstDigit;
    printf("Result = %lld\n", result);
    return 0;
}
