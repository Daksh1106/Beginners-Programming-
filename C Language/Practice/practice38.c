// Write a function sum vector which returns the sum of two vectors passed to it. The vectore must be 2-D.
#include <stdio.h>
// Define a structure for a 2D vector
struct Vector2D
{
    float x;
    float y;
};

// Function to sum two 2D vectors
struct Vector2D sumVector(struct Vector2D v1, struct Vector2D v2)
{
    struct Vector2D result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}

int main()
{
    struct Vector2D a, b, sum;
    printf("Enter x and y for the first vector: ");
    scanf("%f %f", &a.x, &a.y);
    printf("Enter x and y for the second vector: ");
    scanf("%f %f", &b.x, &b.y);
    sum = sumVector(a, b);
    printf("Sum vector: (%.2f, %.2f)\n", sum.x, sum.y);
    return 0;
}