#include <stdio.h>

int main() {
    int numbers[100];
    int n, i;
    int largest, second_largest;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    largest = numbers[0];
    second_largest = numbers[0];

    for (i = 1; i < n; i++) {
        if (numbers[i] > largest) {
            second_largest = largest;
            largest = numbers[i];
        }
        else if (numbers[i] > second_largest && numbers[i] != largest) {
            second_largest = numbers[i];
        }
    }

    printf("Largest number: %d\n", largest);
    printf("Second largest number: %d\n", second_largest);

    return 0;
}
