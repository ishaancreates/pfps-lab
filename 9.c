//  WAP that tells whether a given year is a leap year or not
#include <stdio.h>
int main()
{
    printf("Enter an year");
    int a;
    scanf("%d",&a);
    if (a>1 & a<=9999)
    {
        if (a%400==0)
        {
            printf("It is a leap year");
        }
        else
        {
            printf("It is not a leap year");
        }
    }
    else 
    {
        printf("It is not a valid year");
    }
}
