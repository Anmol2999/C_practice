#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int a, b;
    printf("Choose number a:");
    scanf("%d", &a);
    printf("Choose number b:");
    scanf("%d", &b);
    printf("1:Addition\n");
    printf("2:Substraction\n");
    printf("3:Multiplication\n");
    printf("4:Division\n");
    int c;
    printf("Choose a decision from 1 to 4 :");
    scanf("%d", &c);

    // if and else where conditon is put under bracket and == means equality and the statement of if and else comes under '{}' bracket.
    // +,-,*,/,% are used for addition,substraction,multiplication,divison,modulus respectively
    if (c == 1)
    {
        printf("The sum is %d", a + b);
    }
    // if there are more then 2 condition then else if(elif) is used which is known as nested if-else
    else if (c == 2)
    {
        printf("The difference is %d", a - b);
    }
    else if (c == 3)
    {
        printf("The multiplication of a and b is %d", a * b);
    }
    else if (c == 4)
    {
        printf("The division is %d", a / b);
    }
    else
    {
        printf("Out of range,Please choose between 1 and 4!!");
    }
    system("pause"); // this function cause a program to pause and wait for the user to press the enter key before exiting.function included from stdlib.h
    return 0;
}
