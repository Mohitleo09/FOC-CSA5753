#include <stdio.h>
#include <string.h>

#define MAX_ELEMENTS 100

void sortArray(char array[][MAX_ELEMENTS], int numElements) {
    int i, j;
    char temp[MAX_ELEMENTS];

    for (i = 0; i < numElements - 1; i++) {
        for (j = i + 1; j < numElements; j++) {
            if (strcmp(array[i], array[j]) > 0) {
                strcpy(temp, array[i]);
                strcpy(array[i], array[j]);
                strcpy(array[j], temp);
            }
        }
    }
}

int main() {
    char array[MAX_ELEMENTS][MAX_ELEMENTS];
    int i, numElements;

    printf("Enter the number of elements: ");
    scanf("%d", &numElements);

    printf("Enter the elements: \n");
    for (i = 0; i < numElements; i++) {
        scanf("%s", array[i]);
    }

    sortArray(array, numElements);

    printf("Sorted array: \n");
    for (i = 0; i < numElements; i++) {
        printf("%s\n", array[i]);
    }

    return 0;
}
