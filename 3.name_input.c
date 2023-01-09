#include <stdio.h>

int main(int argc, char const *argv[])
{
    // declairing variable 'a' as a char datatype and puting a limit upto 10 alphabets
    char a[10];
    printf("Whats Your name? ");
    scanf("%s", &a);
    printf("Hello %s", a);
    return 0;
}
