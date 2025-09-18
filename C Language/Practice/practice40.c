// Create an array of 5 complez numbers created in 'practice39.c' and display then with the help of a display function. The values must be taken as an input from the user.

#include <stdio.h>

struct ComplexNumber
{
    float real;
    float imag;
};

// Function to display a complex number with index
void display(struct ComplexNumber c, int index)
{
    printf("Complex number %d: %.2f + %.2fi\n", index + 1, c.real, c.imag);
}

int main()
{
    struct ComplexNumber arr[5];
    printf("This program stores and displays 5 complex numbers.\n");
    printf("A complex number has a real part and an imaginary part.\n\n");

    // Input loop
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real part of complex number %d: ", i + 1);
        scanf("%f", &arr[i].real);
        printf("Enter the imaginary part of complex number %d: ", i + 1);
        scanf("%f", &arr[i].imag);
        printf("You entered: %.2f + %.2fi\n\n", arr[i].real, arr[i].imag);
    }

    printf("\nAll complex numbers entered:\n");
    for (int i = 0; i < 5; i++)
    {
        display(arr[i], i);
    }

    printf("\nEach complex number is of the form a + bi, where:\n");
    printf("  a = real part, b = imaginary part\n");
    printf("For example, 3.00 + 4.00i means real part is 3.00 and imaginary part is 4.00.\n");

    return 0;
}