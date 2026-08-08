#include <stdio.h>
#include <string.h>

int main() {
    char text[100];
    int i;

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    text[strcspn(text, "\n")] = '\0';

    printf("Reversed string: ");

    for (i = strlen(text) - 1; i >= 0; i--) {
        printf("%c", text[i]);
    }

    printf("\n");

    return 0;
}
