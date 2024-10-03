// WAP that finds whether a given number is even or odd.
#include <stdio.h>
int main ()
{
    printf("Write a number");
    int a;
    scanf("%d", &a);
    if (a%2==0)
    {
        printf("Number is even");
    }
    else 
    {
        printf("Number is odd");
    }
}