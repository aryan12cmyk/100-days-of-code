#include <stdio.h>
int main() {
    int n;
    printf("Enter number of elements (sorted ascending): ");
    scanf("%d", &n);
    int arr[n + 1];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int value;
    printf("Enter value to insert: ");
    scanf("%d", &value);

    int i = n - 1;
    while (i >= 0 && arr[i] > value) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = value;
    n++;

    printf("Array after insertion: ");
    for (int j = 0; j < n; j++)
        printf("%d ", arr[j]);
    printf("\n");
    return 0;
}
