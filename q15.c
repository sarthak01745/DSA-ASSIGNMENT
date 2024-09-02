// Q.15 Students need to check the availability of a book in the
// library based on its ID. Create an ordered list which will
// contain only book id. Implement a C program to search whether a
// particular book is available in the list or not.
#include <stdio.h>

int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1;
    
    while (low <= high) {
        int mid = (low + high) / 2;
        
        if (arr[mid] == key) {
            return mid;
        }
        if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    return -1;
}

int main() {
    int bookList[] = {101, 203, 305, 407, 509}; // Ordered list of book IDs
    int size = sizeof(bookList) / sizeof(bookList[0]);
    int bookID;

    printf("Enter the book ID to search: ");
    scanf("%d", &bookID);

    int result = binarySearch(bookList, size, bookID);

    if (result != -1) {
        printf("Book ID %d is available in the library.\n", bookID);
    } else {
        printf("Book ID %d is not available in the library.\n", bookID);
    }

    return 0;
}