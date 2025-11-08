// Write a C program that:
// Asks the user to enter two numbers.
// Asks the user to enter an operator (+, -, *, /, %).
// Performs the operation based on the operator entered.
// Displays the final result on the screen.
// You can solve this either using:
// if-else if ladder
// or
// switch-case statement (recommended, cleaner style).

#include <stdio.h>

int main()
{
    int a, b;
    char c;
    printf("Enter first numbers :");
    scanf(" %d",&a);
    printf("Enter second numbers :");
    scanf(" %d",&b);
    printf("Enter an operation (+,-,*,/,%%) :");
    scanf(" %c",&c);
    if (c == '+')
    {
        printf("Result : %d\n", a + b);
    }
    else if (c == '-')
    {
        printf("Result %d", a - b);
    }
    else if (c == '*')
    {
        printf("Result %d", a * b);
    }
    else if (c == '/')
    {
        printf("Result %d", a / b);
    }
    else if (c == '%')
    {
        printf("Result %d", a % b);
    }
    else
        printf("Something went wrong \n");

    return 0;
}


// what i learned form this :- 

// % is used for format specifier but %% is used to literally print % 
//scanf("%d") me %d ke space mat dena nahi to dikkat hota hai 
/* scanf(" %c") me " and %c ke bich me 1 space dena is se jo second number
input dene ke baad jab enter do ge to enter ko as a character nahi lega ye 
nahi to enter ko hi as a character leke aage bad jaega ye */
