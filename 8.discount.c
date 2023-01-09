#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a;
    printf("Enter resource value:");
    scanf("%f", &a);
    float sale = a * 0.85;
    printf("the sale value is %.2f", sale); // .2f represents the two floating point after decimal
}
