#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];
    int i, count = 0;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    
    printf("Special characters in the string: ");
    for (i = 0; str[i]; i++) {
        if (!isalnum(str[i])) {
            count++;
            printf("%c ", str[i]);
        }
    }
    printf("\nNumber of special characters: %d\n", count);
    return 0;
}
