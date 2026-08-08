#include <stdio.h>

int main() {
int number;
int i;
int is_prime = 1;
printf("Enter a number: ");
scanf("%d", &number);

  if (number <= 1) {
        is_prime = 0;
    }
 else {
      for (i = 2; i < number; i++) {
              if (number % i == 0) {
                    is_prime = 0;
                    break;
             }
        }
    }

    if (is_prime == 1) {
        printf("%d is a prime number.\n", number);
    }
    else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
