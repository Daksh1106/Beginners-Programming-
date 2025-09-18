// Write a program with a structure representing a Complex Numbber.
#include <stdio.h>
#include <string.h>

struct ComplexNumber
{
    float real;
    float imag;
};

int main()
{
    struct ComplexNumber c1;
    printf("Enter real part: ");
    scanf("%f", &c1.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c1.imag);
    printf("Complex number: %.2f + %.2fi\n", c1.real, c1.imag);
    return 0;
}