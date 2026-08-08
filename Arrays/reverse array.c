#include <stdio.h>

int main() {
    int numbers[100];
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Reversed array: ");

    for (i = n - 1; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    return 0;
}
