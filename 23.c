// /* WAP to find the minimum and maximum element of the array. */

// #include <stdio.h>

// int main()
// {
//     int i, arr[4];

//     printf("Enter Elements of the Array: \n");

//     for (i = 0; i < 4; i++)
//     {
//         printf("Enter Value of Element %d: ", i);
//         scanf("%d", &arr[i]);
//     }

//     for (int j; j < 4; j++)
//     {
//         if (arr[j] > arr[j + 1])
//         {
//             printf("%d is greater than %d", arr[j], arr[j + 1]);
//         }
//     }
// }

#include <stdio.h>
void main()
{
    int i, ar[10], min, max;
    printf("Enter array:-\n");
    for (i = 0; i <= 9; i++)
    {
        printf("ar[%d]=", i);
        scanf("%d", &ar[i]);
    }
    min = ar[0];
    max = ar[0];
    for (i = 0; i <= 9; i++)
    {
        if (min > ar[i])
        {
            min = ar[i];
        }
        if (max < ar[i])
        {
            max = ar[i];
        }
    }
    printf("\nMin=%d", min);
    printf("\nMax=%d", max);
}
