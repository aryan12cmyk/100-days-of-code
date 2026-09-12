#include <stdio.h>
int main() {
    int n;
    printf("Enter number of elements (sorted ascending): ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int key;
    printf("Enter element to search: ");
    scanf("%d", &key);

    int low = 0, high = n - 1, foundIndex = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            foundIndex = mid;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (foundIndex != -1)
        printf("Found at index %d\n", foundIndex);
    else
        printf("-1\n");
    return 0;
}
