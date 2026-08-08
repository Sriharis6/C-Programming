#include <stdio.h>
#include <string.h>

int main() {
    char text[100];
    int i;
    int length;
    int is_palindrome = 1;

    printf("Enter a word: ");
    scanf("%99s", text);

    length = strlen(text);

    for (i = 0; i < length / 2; i++) {
        if (text[i] != text[length - i - 1]) {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome == 1) {
        printf("%s is a palindrome.\n", text);
    }
    else {
        printf("%s is not a palindrome.\n", text);
    }

    return 0;
}
