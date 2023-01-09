#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter your age: ");
    scanf("%d", &a);
    printf("Enter your marks: ");
    scanf("%d", &b);

    switch (a)
    {
    case 3:
        printf("Your age is 3\n");
        switch (b) // nested switich ..if the age is 3 then this will execute otherwise it will break
        {
        case 90: // if marks are 90 then the print would execute
            printf("Your marks is 90\n");
            break; // if the condition is true then program will break here and go outside the switch...if we remove break then even if the condition is true further cases will execute and print

        default:
            printf("Your marks are not 90");
        }
        break;

    case 5:
        printf("Your age is 5\n");
        break;

    default:
        printf("Your age is not 3 or 5");
        break;
    }
    return 0;
}
