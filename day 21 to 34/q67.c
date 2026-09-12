#include <stdio.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n + 1];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int value, position;
    printf("Enter value to insert: ");
    scanf("%d", &value);
    printf("Enter position (1-based) to insert at: ");
    scanf("%d", &position);

    if (position < 1 || position > n + 1) {
        printf("Invalid position\n");
        return 0;
    }

    for (int i = n; i >= position; i--)
        arr[i] = arr[i - 1];
    arr[position - 1] = value;
    n++;

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
