#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;  
        else if (arr[mid] < key)
            low = mid + 1;  
        else
            high = mid - 1; 
    }

    return -1; 
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};  
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 23;

    int result = binarySearch(arr, n, key);

    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}
