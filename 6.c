#include <stdio.h>
//WAP that checks whether the two numbers entered by the user are equal or not.
int main()
{
    printf("Enter Two Numbers");
    int a,b;
    scanf("%d %d" , &a,&b);
    if (a==b)
    printf("Numbers are Equal");
    else 
    printf("Numbers are not Equal");
}
