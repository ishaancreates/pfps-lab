/* WAP that inputs two arrays and saves sum of corresponding elements of these arrays in
a third array and prints them. */

#include <stdio.h>

int main()
{

    int i, j, arr1[4], arr2[4], arr3[4];
    printf("Enter Elements of the Array: \n");

    for (i = 0; i < 4; i++)
    {
        printf("Enter Value of Element %d: ", i);
        scanf("%d", &arr1[i]);
    }
    printf("\n");

    printf("Enter Values of Arr2\n");

    for (i = 0; i < 4; i++)
    {
        printf("Enter Value of Element %d: ", i);
        scanf("%d", &arr2[i]);
    }

    for (i = 0; i < 4; i++)
    {
        int sumofarr = arr1[i] + arr2[i];
        arr3[i] = sumofarr;
    }

    for (i = 0; i < 4; i++)
    {
        printf("%d", arr3[i]);
    }
}