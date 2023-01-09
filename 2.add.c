#include <stdio.h>

int main(int argc, char const *argv[])
{

    // declairing the variable 'a' and 'b' as a integer datatype
    int a, b;
    printf("Enter number a\n");
    // taking input from user in a decimal format(%d) and assigning it into variable 'a' with &a command
    scanf("%d", &a);

    printf("Enter number b\n");
    scanf("%d", &b);
    printf("The sum is %d\n", a + b); // displaying the sum which is a+b in decimal format(%d)
    return 0;
}