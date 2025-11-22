#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[500];
    int words = 0;
    int inWord = 0;

    printf("Enter your string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (!isspace((unsigned char)str[i])) // agar koi character aaya to
        {
            if (inWord == 0) // sabse pahle yaha enter hoga     //  jab tak bich me space nahi aa jata inword 0 hoga hi nhi to is loop ke andar enter kar hi nahi paerga
            {
                words++;    //
                inWord = 1; // and word count bad ke inword 1 jaega
            }
        }
        else
        {
            inWord = 0;
        }
    }

    printf("Words: %d\n", words);
    return 0;
}
