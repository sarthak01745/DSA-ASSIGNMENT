// Q.12 Mr. John is playing the game Subway Surfers. The game has
// a total of five treasures with different weights, that he needs
// to collect. Write a C program to count the total number of
// weights he collected from the treasures during the game.
#include <stdio.h>

int main() {
    // Define the number of treasures
    const int numberOfTreasures = 5;
    
    // Define an array to hold the weights of the treasures
    int weights[numberOfTreasures];
    
    // Variable to store the total weight collected
    int totalWeight = 0;

    // Input weights for each treasure
    printf("Enter the weights of %d treasures:\n", numberOfTreasures);
    for (int i = 0; i < numberOfTreasures; i++) {
        printf("Weight of treasure %d: ", i + 1);
        scanf("%d", &weights[i]);
    }

    // Calculate the total weight
    for (int i = 0; i < numberOfTreasures; i++) {
        totalWeight += weights[i];
    }

    // Print the total weight collected
    printf("Total weight collected: %d\n", totalWeight);

    return 0;
}