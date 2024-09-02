// Q.11 Mr. Ram is developing a software application to manage his
// inventory, which initially can hold a maximum of ten product
// packets. He allocates memory for ten packets at the start.
// However, as the market demand changes, he needs to dynamically
// update the allocated memory to store more or fewer packets
// without wasting memory or running out
// of space. Explain the concept of dynamic memory
// allocation and how Mr. Ram can effectively
// manage his inventory size using this concept.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int initial_size = 10; // Initial size of inventory
    int new_size;
    int *inventory;

    // Allocate memory for initial inventory
    inventory = (int *)malloc(initial_size * sizeof(int));
    if (inventory == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Initialize inventory
    for (int i = 0; i < initial_size; i++) {
        inventory[i] = i + 1; // Example initialization
    }

    // Print initial inventory
    printf("Initial inventory:\n");
    for (int i = 0; i < initial_size; i++) {
        printf("Packet %d: %d\n", i + 1, inventory[i]);
    }

    // Change the inventory size dynamically
    printf("Enter new inventory size: ");
    scanf("%d", &new_size);

    // Reallocate memory to new size
    inventory = (int *)realloc(inventory, new_size * sizeof(int));
    if (inventory == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // Initialize new packets if size increased
    if (new_size > initial_size) {
        for (int i = initial_size; i < new_size; i++) {
            inventory[i] = 0; // Example initialization
        }
    }

    // Print updated inventory
    printf("Updated inventory:\n");
    for (int i = 0; i < new_size; i++) {
        printf("Packet %d: %d\n", i + 1, inventory[i]);
    }

    // Free allocated memory
    free(inventory);

    return 0;
}