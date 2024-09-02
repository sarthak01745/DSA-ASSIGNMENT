// Q.17 (b) (i) Illustrate how asymptotic notations can be used to
// analyze an algorithm? (6Marks)
// (ii) Calculate time and space complexity for the
// following code (6Marks)
// #include<stdio.h>
// int main() {
// int i = 1, sum = 0, n;
// while (i<= n){
// i=i+1;
// sum = sum +i;
// }}


// (i) Asymptotic Notations for Analyzing an Algorithm (6 Marks)
// Asymptotic notations are mathematical tools used to describe the
// behavior of an algorithm in terms of time and space as the input size
// grows. These notations allow us to analyze the efficiency and
// scalability of algorithms by focusing on their performance in the
// worst-case, best-case, and average-case scenarios.
// The most commonly used asymptotic notations are:
// 1.Big O Notation (O):
// Represents the upper bound of an algorithm's running time. It
// gives the worst-case scenario, describing the maximum time an
// algorithm can take.
// Example: If an algorithm has a time complexity of
// O(n^2), it means that the running time increases
// quadratically with the input size.
// 2.Omega Notation (Ω):
// Represents the lower bound of an algorithm's running time. It
// gives the best-case scenario, describing the minimum time an
// algorithm can take.
// Example: If an algorithm has a time complexity of Ω(n),
// it means that in the best case, the running time increases
// linearly with the input size.
// 3.Theta Notation (Θ):
// Represents the tight bound of an algorithm's running time. It
// gives both the upper and lower bounds, indicating the exact
// growth rate of the algorithm's running time.
// Example: If an algorithm has a time complexity of Θ(nlog⁡n), it means that the running time grows at a rate
// proportional to nlog⁡n for all cases.
// Little o Notation (o):
// Represents a stricter upper bound than Big O. It shows that an
// algorithm's growth rate is strictly less than the rate described
// by the function.
// Example: If an algorithm has a time complexity of
// o(n^2), it means that the running time grows slower
// than n^2, but it doesn't exactly grow at n^2.
// Little Omega Notation (ω):
// Represents a stricter lower bound than Omega. It shows that an
// algorithm's growth rate is strictly greater than the rate
// described by the function.
// Example: If an algorithm has a time complexity of ω(n),
// it means that the running time grows faster than nnn.
// (ii) Time and Space Complexity of the Given Code
#include<stdio.h>
int main() {
    int i = 1, sum = 0, n;
    while (i <= n) {
        i = i + 1;
        sum = sum + i;
    }
}
// Time Complexity:
// Initialization:
// The initialization of variables i = 1, sum = 0, and n takes
// constant time: O(1).
// While Loop:
// The while loop runs until i exceeds n. The loop's body executes
// for each value of i from 1 to n.
// Each iteration of the loop has two operations:
// i = i + 1; takes constant time: O(1).
// sum = sum + i; takes constant time: O(1).
// Therefore, the total time taken by the loop is the number of
// iterations multiplied by the time for each iteration, which is
// O(n).
// Overall Time Complexity:
// The overall time complexity of the code is O(n).
// Space Complexity:
// Variables:
// The variables i, sum, and n are all integer variables that
// occupy a constant amount of space: O(1).
// No Additional Data Structures:
// The code does not use any additional data structures like arrays
// or dynamic memory allocation that would require extra space.
// Overall Space Complexity:
// The overall space complexity of the code is O(1), as the
// space required does not depend on the input size nnn.