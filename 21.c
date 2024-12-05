/* WAP that simply takes elements of the array from the user and finds the sum of these
elements. */

#include <stdio.h>

int main()
{
    // take element of array from user

    int arr[10], i;

    printf("Enter Elements of the Array: \n");

    for (i = 0; i < 10; i++)
    {
        printf("Enter Value of Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    // finding sum

    int sum = 0;
    for (int i; i < 10; i++)
    {
        sum = sum + arr[i];
    }
    printf("%d", sum);
}