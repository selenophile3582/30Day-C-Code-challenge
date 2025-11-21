#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[500];
    char clean[500];
    int j = 0;

    printf("You can enter up to 500 characters \n");
    printf("Enter your string :");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    int len = strlen(str);
    printf("You have entered %d characters .\n", len);

    for (int i = 0; str[i] != '\0'; i++)
    {
        // remove ALL whitespace (space, tab, etc.)
        if (!isspace((unsigned char)str[i]))
            clean[j++] = str[i];
    }
    clean[j] = '\0';

    // for (int i = 0; str[i] != '\0'; i++)
    // {
    //     if (str[i] != ' ' && !isspace(str[i]))
    //         clean[j++] = str[i];
    // }
    // clean[j] = '\0';
    printf("The output is :-\n");
    puts(clean);

    return 0;
}
