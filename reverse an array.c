#include <stdio.h>

void reverse_array(int arr[], int n) {
  int i, j, temp;
  for (i = 0, j = n - 1; i < j; i++, j--) {
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  reverse_array(arr, n);
  printf("Reversed array is: \n");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}
