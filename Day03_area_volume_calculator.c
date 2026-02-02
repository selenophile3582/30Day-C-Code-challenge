#include <stdio.h>

int main()
{
    printf("----AREA AND VOLUME CALCULATOR----\n");
    printf("1. Area of Circle\n");
    printf("2. Area of Rectangle\n");
    printf("3. Volume of Cylinder\n");
    printf("4. Exit\n");

    float height, length, width;
    float radius, pi = 3.14159;

    int choice;
    do
    {
        printf("Enter your choice :- ");
        float garbage;
        scanf("%f", &garbage);
        choice = (int)garbage;

        if (garbage != (int)garbage)
            printf("Note: Decimal input ignored, using %d as your choice.\n", choice);

        if (choice > 4 || choice < 1)
        {
            printf("Use valid options !!\n");
            continue;
        }

        // printf("Enter your choice :-");
        // scanf("%d", &choice);

        // printf("Enter your choice :- ");
        // if (scanf("%d", &choice) != 1)
        // {
        //     printf("Invalid input! Please enter numbers only.\n");
        //     while (getchar() != '\n') ;
     
        // if (choice > 4 || choice < 1)
        // {
        //     printf("Use valid options !!\n");
        //     continue;
        // }
        switch (choice)
        {

        case 1:
            printf("Enter radius :");
            scanf("%f", &radius);
            printf("Area of Circle = %.2f\n", pi * radius * radius);
            break;
        case 2:
            printf("Enter length :");
            scanf("%f", &length);
            printf("Enter width : ");
            scanf("%f", &width);
            printf("The area of rectangle is %.2f \n", length * width);
            break;
        case 3:
            printf("Enter radius:");
            scanf("%f", &radius);
            printf("Enter height :");
            scanf("%f", &height);
            printf("Volume of Cylinder = %.2f\n", pi * radius * radius * height);
            break;
        }
    } while (choice != 4);

    printf("You choose to exit the calculator\n");

    printf("Thanks for using our calculator \n");

    return 0;
}

/*    What i learned ... is code me abhi v kafi dikkat hai jaise we can use 

 // printf("Enter your choice :- ");
        // if (scanf("%d", &choice) != 1)
        // {
        //     printf("Invalid input! Please enter numbers only.\n");
        //     while (getchar() != '\n') ;
        
        but i dont know much about it 
        */
