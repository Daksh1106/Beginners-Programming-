#include<stdio.h>
int main()
{
    char input;
    float kmsToMiles = 0.621371;
    float inchesToFoot = 0.0833333;
    float cmsToInches = 0.393701;
    float poundsToKgs = 0.453592;
    float inchesToMeters = 0.0254;
    float first, second;
    printf("Enter the conversion type:\n");
    while(1)
    {
        printf("1. Kms to Miles\n");
        printf("2. Inches to Foot\n");
        printf("3. Cms to Inches\n");
        printf("4. Pounds to Kgs\n");
        printf("5. Inches to Meters\n");
        printf("6. Exit\n");
        scanf(" %c", &input);
        
        switch(input)
        {
            case '1':
                printf("Enter distance in Kms: ");
                scanf("%f", &first);
                second = first * kmsToMiles;
                printf("%.2f Kms = %.2f Miles\n", first, second);
                break;
            case '2':
                printf("Enter distance in Inches: ");
                scanf("%f", &first);
                second = first * inchesToFoot;
                printf("%.2f Inches = %.2f Foot\n", first, second);
                break;
            case '3':
                printf("Enter distance in Cms: ");
                scanf("%f", &first);
                second = first * cmsToInches;
                printf("%.2f Cms = %.2f Inches\n", first, second);
                break;
            case '4':
                printf("Enter weight in Pounds: ");
                scanf("%f", &first);
                second = first * poundsToKgs;
                printf("%.2f Pounds = %.2f Kgs\n", first, second);
                break;
            case '5':
                printf("Enter distance in Inches: ");
                scanf("%f", &first);
                second = first * inchesToMeters;
                printf("%.2f Inches = %.2f Meters\n", first, second);
                break;
            case '6':
                return 0;
            default:
                printf("Invalid option! Please try again.\n");
        }
    }
}