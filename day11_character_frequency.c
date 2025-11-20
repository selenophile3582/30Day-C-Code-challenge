#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[500];
    int freq[256] = {0};
    int j = 0;

    printf("You can enter up to 500 characters and this will tell the no. of occurance of all characters \n");
    printf("Enter your string :");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    int len = strlen(str);
    printf("You have entered %d characters .\n", len);

    for (int i = 0; i < len; i++)
    {
        str[i] = tolower(str[i]);
        if (str[i] == ' ')
        {
            continue;
        }
        freq[(unsigned char)str[i]]++; // most important line hai ye
    }
    printf("Character frequencies :\n");

    for (int i = 0; i < 256; i++)
    {
        if (freq[i] == 0)
        {
            continue;
        }
        printf(" %c -> %d \n", i, freq[i]);
    }

    return 0;
}
