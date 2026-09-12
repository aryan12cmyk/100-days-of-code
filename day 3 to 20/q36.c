#include <stdio.h>
int main() {
    int a, b, num1, num2, hcf = 1;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    num1 = a;
    num2 = b;
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    hcf = num1;
    printf("HCF (GCD) of %d and %d = %d\n", a, b, hcf);
    return 0;
}
