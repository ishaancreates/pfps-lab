//WAP to find the greatest of three numbers. 
#include <stdio.h>
 int main()
 {
    printf("Enter three numbers");
    int a,b,c;
    if (a>b)
    {
        if(a>c)
        printf("%d is the greatest number" ,a);
        else 
        printf("%d is the greatest number" ,c);
    }
    else 
    {
        if (b>c)
        printf("%d is the greatest number" ,b);
        else 
        printf("%d is the greatest number" ,c);
    }
 }