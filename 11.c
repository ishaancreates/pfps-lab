#include <stdio.h>

int main()
{
    printf("Get Operands: ");

    int x, y;
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);
    printf("Enter 1 for addition and 2 for substraction");
    int operant;
    scanf("%d", &operant);
    switch (operant)
    {
    case 1:
        printf("%d", (x + y));
    case 2:
        printf("%d", x - y);
    default:
        break;
    }
}