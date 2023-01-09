#include <stdio.h>

int main()
{
    // for loop conditon is written under () bracket and its statements are written under {} brackets.

    // i = i+1 can also be written as i += 1 or i++

    // the condition before first semicolon under for loop is executed first and then the condition between first semicolon and second semicolon is checked everytime before running the loop and the last condition which is between second and third semicolon is executed when the loop comes back to for loop everytime.
    // expression 1 can contain more then 1 variable and is optional.expression 2 will execute until the last condition in expression 2 becomes false.eg--(i<3,j<5)<--executes till j becomes 5.and we can update more thn 2 variable in expression 3 and expression 3 is optional.
    for (int i = 0; i < 3; i = i + 1)
    {
        printf("Hello %d \n", i);
    }
    return 0;
}
