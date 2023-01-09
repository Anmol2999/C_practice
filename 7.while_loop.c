#include <stdio.h>

int main(int argc, char const *argv[])
{
    // True can be used under while condition for infinite loop
    int i = 0;
    while (i < 3)
    {
        printf("meow\n");
        i += 1;
    }
    return 0;
}
