#include <stdio.h>

int main() {
    int arr[100], n, i, search, found = 0;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &search);

    
    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Element %d found at position %d.\n", search, i + 1);
    else
        printf("Element %d not found in the array.\n", search);

    return 0;
}
