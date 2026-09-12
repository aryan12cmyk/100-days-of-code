#include <stdio.h>
int main() {
    long long n;
    printf("Enter a number: ");
    scanf("%lld", &n);
    if (n < 0) n = -n;

    int count[10] = {0};
    if (n == 0) {
        count[0] = 1;
    }
    long long temp = n;
    while (temp != 0) {
        int digit = temp % 10;
        count[digit]++;
        temp /= 10;
    }

    int maxCount = 0, maxDigit = 0;
    for (int d = 0; d <= 9; d++) {
        if (count[d] > maxCount) {
            maxCount = count[d];
            maxDigit = d;
        }
    }
    printf("%d\n", maxDigit);
    return 0;
}
