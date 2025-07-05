#include <stdio.h>

int main() {
    int num, original, rem, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        rem = num % 10;
        reversed = reversed * 10 + rem;
        num = num / 10;
    }

    if (original == reversed) {
        printf("%d is a Palindrome number.\n", original);
    } else {
        printf("%d is not a Palindrome number.\n", original);
    }

    return 0;
}
