// Take a senternce (string )from the user which contain numers and special characters and then count
//  the number of vowels , consonents , digits and special characters in it
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    printf("This code will take a sentence (string) up to 5000 characters and will count the number of digits , vowels , consonent and special character in it \n");

    int vowel = 0, consonant = 0, space = 0, digit = 0, special = 0;

    printf("Enter a string :");
    char str[5000];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    int len = strlen(str);
    printf("You entered %d characters \n", len);

    for (int i = 0; i < len; i++)
    {
        str[i] = tolower(str[i]);

        if (isspace(str[i]))
        {
            space++;
        }
        else if (isdigit(str[i]))
        {
            digit++;
        }
        else if (isalpha(str[i]))
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                vowel++;
            }
            else
            {
                consonant++;
            }
        else
            special++;
    }
    printf("Vowels %d :\n", vowel);
    printf("Consonants %d : \n", consonant);
    printf("Digit : %d \n", digit);
    printf("Space : %d \n", space);
    printf("Special Character : %d \n", special);

    return 0;
}
