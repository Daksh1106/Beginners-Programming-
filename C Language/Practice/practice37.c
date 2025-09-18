// Create a two demensional vector using structures in C.

#include <stdio.h>

// Define a structure for a 2D vector
struct Vector2D {
    float x;
    float y;
};

int main()
{
    struct Vector2D v1, v2, sum;

    // Input for first vector
    printf("Enter x and y for the first vector: ");
    scanf("%f %f", &v1.x, &v1.y);

    // Input for second vector
    printf("Enter x and y for the second vector: ");
    scanf("%f %f", &v2.x, &v2.y);

    // Add the vectors
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    // Print the vectors
    printf("\nFirst vector: (%.2f, %.2f)\n", v1.x, v1.y);
    printf("Second vector: (%.2f, %.2f)\n", v2.x, v2.y);
    printf("Sum vector: (%.2f, %.2f)\n", sum.x, sum.y);

    return 0;
}