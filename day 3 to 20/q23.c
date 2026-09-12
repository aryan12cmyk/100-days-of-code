#include <stdio.h>
int main() {
    int lateDays;
    double fine = 0;
    printf("Enter number of late days: ");
    scanf("%d", &lateDays);
    if (lateDays > 30) {
        printf("Membership Cancelled\n");
        return 0;
    }
    if (lateDays <= 5) {
        fine = lateDays * 2;
    } else if (lateDays <= 10) {
        fine = 5 * 2 + (lateDays - 5) * 4;
    } else {
        fine = 5 * 2 + 5 * 4 + (lateDays - 10) * 6;
    }
    printf("Fine = Rs. %.2lf\n", fine);
    return 0;
}
