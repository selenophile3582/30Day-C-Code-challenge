/*This is code 2 of my 30 day challenge in which there is a unit 
convertor that keep on taking inputs and converting it's unit 
until you input exist   */


#include <stdio.h>

int main()
{
    printf("---- UNIT CONVERTER ----\n");
    printf("1. Kilometer to Miles\n");
    printf("2. Inches to Feet\n");
    printf("3. Centimeters to Inches\n");
    printf("4. Celsius to Fahrenheit\n");
    printf("5. Exit\n");

    int choice;
    float input;

    do
    {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice > 5 || choice < 1)
        {
            printf("Use valid options !!\n");
            continue;
        }

        switch (choice)
        {
        case 1:
            printf("Enter kilometers: ");
            scanf("%f", &input);
            printf("%.2f km = %.2f miles\n", input, input * 0.621371);
            break;

        case 2:
            printf("Enter inches: ");
            scanf("%f", &input);
            printf("%.2f inches = %.2f feet\n", input, input * 0.083333);
            break;

        case 3:
            printf("Enter centimeters: ");
            scanf("%f", &input);
            printf("%.2f cm = %.2f inches\n", input, input * 0.393701);
            break;

        case 4:
            printf("Enter Celsius: ");
            scanf("%f", &input);
            printf("%.2f C = %.2f F\n", input, (input * 9.0 / 5) + 32);
            break;
        }
    } while (choice != 5);

    printf("\nYou exited the Unit Converter!\n");
    return 0;
}
