#include <stdio.h>
float force(int m, float g);
int main()
{
    int m;
    float g, result;
    printf("Enter the mass of the body on which the force is exerted:");
    scanf("%d", &m);
    g = 9.8;
    result = force(m, g);
    printf("Force exerted on the body is: %.2f\n", result, (int)result);
    return 0;
}
float force(int m, float g)
{
    return m * g;
}
