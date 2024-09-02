// Q.13 Consider an object Shape that encompasses both a Square
// and a Rectangle as the data members. The Square object should
// have an attribute for its area, while the Rectangle object
// should have attributes for length and breadth. Identify the
// most suitable data structures for this scenario and write a C
// program to define the structure and demonstrate their usage.
#include <stdio.h>

// Define the structure for Square
struct Square {
    int area;
};

// Define the structure for Rectangle
struct Rectangle {
    int length;
    int breadth;
};

// Define the structure for Shape that contains a Square and a Rectangle
struct Shape {
    struct Square square;
    struct Rectangle rectangle;
};

int main() {
    // Create an instance of Shape
    struct Shape shape;

    // Assign values to the square's area and rectangle's dimensions
    shape.square.area = 25;         // Example area of square
    shape.rectangle.length = 10;    // Example length of rectangle
    shape.rectangle.breadth = 5;    // Example breadth of rectangle

    // Perform an operation: Calculate and display the perimeter of the rectangle
    int perimeter = 2 * (shape.rectangle.length + shape.rectangle.breadth);
    printf("Square Area: %d\n", shape.square.area);
    printf("Rectangle Length: %d, Breadth: %d\n", shape.rectangle.length, shape.rectangle.breadth);
    printf("Rectangle Perimeter: %d\n", perimeter);

    return 0;
}