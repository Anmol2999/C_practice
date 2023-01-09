#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b = 0;
    printf("Enter a number : ");
    scanf("%d", &a);
    do
    {
        printf("%d\n", b); // do_while loop execute atleast once
        b = b + 1;
    } while (b < a); // checks the condition
    return 0;
}
