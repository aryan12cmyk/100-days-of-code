#include <stdio.h>
int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n > 0) {
        printf("%d is Positive\n", n);
    } else {
        if (n < 0)
            printf("%d is Negative\n", n);
        else
            printf("%d is Zero\n", n);
    }
    return 0;
}
