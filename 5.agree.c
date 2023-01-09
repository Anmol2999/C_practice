#include <stdio.h>

int main(int argc, char const *argv[])
{
    char c;
    printf("Do you agree? ");
    scanf("%c", &c);
    if (c == 'y' || c == 'Y') // '||' is used for or here.....a single char is always written under single quote and string under double quote
    {
        printf("You agree!!");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("You dont agree!!");
    }
    return 0;
}
