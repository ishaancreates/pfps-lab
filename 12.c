// print the sum of numbers given upto n
// s= n(n+1)/2
// Optimized approach

#include <stdio.h>

int getSum(int n)
{
    int s = n * (n + 1) / 2;
    return s;
}

int main()
{
    int sum = getSum(10);
    printf("the sum is: %d", sum);
}
