#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] < 0) {
            count++;
            printf("%d ", arr[i]);
        }
    }
    printf("\nNumber of negative numbers in the array: %d\n", count);
    return 0;
}
