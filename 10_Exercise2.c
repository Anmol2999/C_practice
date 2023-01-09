#include <stdio.h>

int main()
{
    char a, b;
    printf("Have you passed in mathematics? Type 'Y' or 'N' ");
    scanf("%c", &a);
    printf("Have you passed in science? Type 'Y' or 'N' ");
    scanf(" %c", &b);                                     /* (IMP CONCEPT)reason for leaving blank space before %c here because it ignores all leading whitespaces which in this case is previously Enter keypress which give \n as an input*/
    if ((a == 'y' || a == 'Y') && (b == 'y' || b == 'Y')) //&& here is for and whic applies for whole state under the bracket beside it
    {
        printf("You have won 45rs");
    }
    else if ((a == 'y' || a == 'Y') && (b == 'n' || b == 'N'))
    {
        printf("You have won 15 rs");
    }
    else if ((a == 'n' || a == 'N') && (b == 'y' || b == 'Y'))
    {
        printf("You have won 15 rs");
    }
    else
    {
        printf("You have won 0rs");
    }
}
