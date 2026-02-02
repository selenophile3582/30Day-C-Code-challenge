#include <stdio.h>

float siCalculator(float p, float r, float t)
{
    return (p * r * t) / 100;
}

int main()
{
    char ch;
    float p, r, t, si;
    printf("This is a calculator to get S.I and Amount \n");

    do
    {
        printf("Enter Principal amount: ");
        scanf("%f", &p);

        printf("Enter Rate of Interest: ");
        scanf("%f", &r);

        printf("Enter Time (in years): ");
        scanf("%f", &t);

        si = siCalculator(p, r, t);
        printf("Simple Interest = %.2f\n", si);
        printf("Total Amount = %.2f\n", si + p);

        printf("----***----\n");

        do
        {
            printf("Do you want to calculate again? (y/n): ");
            scanf(" %c", &ch);
            if (ch != 'y' && ch != 'n')
            {
                printf("Please only enter y or n.\n");
            }
        } while (ch != 'y' && ch != 'n');

    } while (ch == 'y');

    printf("Thanks for using Simple Interest Calculator!\n");

    return 0;
}


/*    What i did wrong :- maine  if (ch != 'y' && ch != 'n')   
        maine isme && ke jagah || use karke break use kiya tha 
which was a bug because
    Suppose ch == 'y' →
→ ch != 'y' → false
→ ch != 'n' → true
→ false || true → true

Suppose ch == 'n' →
→ ch != 'y' → true
→ ch != 'n' → false
→ true || false → true

So no matter what the user enters, my condition was always true,
and the loop will always run at least once before being broken manually.
*/
