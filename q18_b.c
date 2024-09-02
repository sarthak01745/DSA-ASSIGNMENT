// Q.18(b) Demonstrate the usage of list and perform all
// the possible operation using array with suitable
// examples.
// An array is a collection of elements of the same data type, stored at
// contiguous memory locations. Arrays allow us to perform various
// operations such as insertion, deletion, searching, and sorting.

// 1. Creation and Initialization
#include <stdio.h>

int main() {
    // Create and initialize an array of integers
    int arr[10] = {10, 20, 30, 40, 50}; // The first 5 elements are initialized

    // Printing the array
    printf("Array elements: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

// 2. Insertion
#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;  // Current number of elements
    int position = 2;  // Position where the new element will be inserted (0-based index)
    int value = 25;    // New value to insert

    // Shift elements to the right
    for(int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[position] = value;
    n++;  // Increment the size of the array

    // Printing the array after insertion
    printf("Array after insertion: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

// 3. Deletion
#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;  // Current number of elements
    int position = 2;  // Position of the element to be deleted (0-based index)

    // Shift elements to the left
    for(int i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;  // Decrement the size of the array

    // Printing the array after deletion
    printf("Array after deletion: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

// 4. Traversal
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;  // Number of elements

    // Traversing and printing the array
    printf("Array elements: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

// 5.Searching
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;  // Number of elements
    int key = 30;  // Element to search for
    int found = 0;

    // Linear search
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = 1;
            printf("Element %d found at position %d\n", key, i);
            break;
        }
    }

    if(!found) {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}