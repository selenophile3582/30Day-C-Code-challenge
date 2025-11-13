// 🧠 Your Task:
// Ask the user how many numbers they want to input (n).
// Take n numbers from the user one by one.
// Count how many numbers are even and how many are odd.
// Print both counts at the end.
// (Optional) Display the actual even and odd numbers separately.

#include <stdio.h>

int main()
{
    int n, evenCount = 0, oddCount = 0;

    printf("How many numbers do you want to enter :");
    scanf("%d", &n);
    int arr[n];
    int odd[n];
    int even[n];

    printf("Enter the numbers:");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[evenCount] = arr[i];
            evenCount++;
        }
        else
        {
            odd[oddCount] = arr[i];
            oddCount++;
        }
    }
    printf("The numbers that you entered are :");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("No of odd numbers are %d\n", oddCount);
    printf("Odd numbers are :");
    for (int i = 0; i < oddCount; i++)
    {
        printf("%d ", odd[i]);
    }
    printf("\n");

    printf("No of enen number are %d :\n", evenCount);
    printf("The even numbers are: ");

    for (int i = 0; i < evenCount; i++)
    {
        printf("%d ", even[i]);
    }

    return 0;
}



/*    some thing i could improve suggsested by gpt is
for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    if (arr[i] % 2 == 0)
        even[evenCount++] = arr[i];
    else
        odd[oddCount++] = arr[i];
}
this would take input and at the same time it would classify it .i t would increase efficency         */
