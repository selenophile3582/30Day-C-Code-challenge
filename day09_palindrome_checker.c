// 🧠 Your Task:
// Write a C program that:
// Takes a string input from the user.
// Checks whether the string is a palindrome or not.
// Ignores the case (optional bonus: ignore spaces too).
// Prints whether it is a palindrome or not.
// A palindrome is a word, phrase, or number that reads the same backward as forward.
// Example: "madam", "racecar", "121", "noon" are palindromes.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

    int palindrome = 1;
    char clean[100];
    int j = 0;

    printf("Even if you enter a capital letter it will be considered as a small letter \n");
    printf("Enter a string :");
    char str[20];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // remove newline

    int n = strlen(str);
    for (int i = 0; i < n; i++)
    {
        if (isalnum(str[i]))
        {
            clean[j++] = towlower(str[i]);
        }
    }
    clean[j] = '\0';
    int m = strlen(clean);
    for (int i = 0; i < m / 2; i++)
    {
        if (clean[i] != clean[m - i - 1])
        {
            palindrome = 0;
            break;
        }
    }
    printf("The filtered string is as : ");
    puts(clean);
    if (palindrome)
        printf(" '%s' is a palindrome.\n", clean);
    else
        printf("'%s' is not a palindrome.\n", clean);

    return 0;
}
