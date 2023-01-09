#include <stdio.h>

/*Make a program to display the table of the requested number*/
int main()
{
    printf("Enter the number : ");
    int a;
    scanf("%d", &a);
    for (int i = 1; i < 11; i++)
    {
        printf("%d x %d = %d\n", a, i, a * i);
    }
    return 0;
}
