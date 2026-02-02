 // Write a program that:
// Takes a string input from the user.
 // Finds its length without using strlen() (do it manually first).
// Then find the length again using strlen() (from <string.h>).
// Bonus: Ask the user to enter another string and perform:
 // Concatenation (strcat)
 // Comparison (strcmp)
 // Copying (strcpy)

// this is  gpt improvised code , my origional code is written below in commented text
#include <stdio.h>
#include <string.h>

int main()
{
    char source[100], target[100];
    int i = 0;

    printf("Enter the first string (source): ");
    fgets(source, sizeof(source), stdin);
    source[strcspn(source, "\n")] = 0; // remove newline

    int length_builtin = strlen(source);
    printf("Length using strlen() = %d\n", length_builtin);

    while (source[i] != '\0')
        i++;
    printf("Length using manual method = %d\n", i);

    printf("Enter the second string (target): ");
    fgets(target, sizeof(target), stdin);
    target[strcspn(target, "\n")] = 0;

    printf("Target entered: %s\n", target);

    int cmp = strcmp(source, target);
    if (cmp > 0)
        printf("The first string comes after the second alphabetically.\n");
    else if (cmp < 0)
        printf("The first string comes before the second alphabetically.\n");
    else
        printf("Both strings are identical.\n");

    strcpy(target, source);
    printf("After copying, target = %s and source = %s\n", target, source);

    strcat(target, source);
    printf("Concatenated string = %s\n", target);

    return 0;
}


// my origional code 

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char source[100];
//     printf("Enter your string (source):");
   
//     scanf("%s", source);
//      fflush(stdin);
//     int length = strlen(source);
//     printf("The length of the string using built in strlen function is %d \n", length);
//     int i = 0;
//     do
//     {
//         i++;
//     } while (source[i] != '\0');

//     printf("The length of the string using my own version of strlen is %d \n", i);
//     printf("Now enter another string (target) :");
//     char target[100];
//     // gets(target);
//     fgets(target, 100, stdin);
//     printf("The new string entered is :");
//     puts(target);

//     int count = strcmp(source, target);
//     if (count > 0)
//     {
//         printf("first letter of first string comes after the first letter of second string \n");
//     }
//     else if (count < 0)
//     {
//         printf("first letter of first stringcomes before the  first letter of first string \n");
//     }
//     else {
//         printf("Both strings are same \n");
//     }
//     // strcpy( source ,target);
//     strcpy( target ,source );
//     printf("after copying source to target , now the target is  %s and source is  %s :-\n", target,source);
//     strcat(target , source);
//     printf("The concated string is %s \n", target);

//     return 0;
// }
