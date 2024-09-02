// Q.18(a) Given a number ‘n’, write an algorithm and the
// subsequent ‘C’ program to count the number of two-digit prime
// numbers in it when adjacent digits are taken. For example, if
// the value of ‘n’ is 114 then the two-digit numbers that can be
// formed by taking adjacent digits are 11 and 14. 11 is prime but
// 14 is not. Therefore print 1.
#include <stdio.h>
#include <string.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0;
    if (num <= 3) return 1;
    if (num % 2 == 0 || num % 3 == 0) return 0;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Convert the number to a string to process adjacent digits
    char str[12]; // Assuming a maximum of 10 digits in the number
    snprintf(str, sizeof(str), "%d", n);

    int count = 0;
    int length = strlen(str);

    // Extract two-digit numbers and check for primality
    for (int i = 0; i < length - 1; i++) {
        int num = (str[i] - '0') * 10 + (str[i + 1] - '0');
        if (isPrime(num)) {
            count++;
        }
    }

    // Print the count of prime two-digit numbers
    printf("Number of two-digit prime numbers: %d\n", count);

    return 0;
}
// 1.Prime Checking Function (isPrime):
//   This function determines if a number is prime. It efficiently
//   checks for factors up to the square root of the number,
//   improving performance over a naive approach.
// 2.Main Function:
//   The number n is read and converted to a string for easy processing of digits.
//   Adjacent pairs of digits are extracted and converted into twodigit numbers.
//   Each two-digit number is checked for primality using the isPrime function.
//   The count of prime numbers is maintained and printed.
// Time Complexity:
//   Time Complexity: O(m⋅sqrt(k)) where m is the number of adjacent
//   digit pairs and k is the maximum two-digit number (99).
//   Space Complexity: O(m), where m is the length of the string
//   representation of the number.