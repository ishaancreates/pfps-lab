#include <stdio.h>

int main()
{
    // 5 subjects and get percentage and print grade using table

    int a = 20;
    int b = 30;
    int c = 40;
    int d = 50;
    int e = 60;
    int totalmarks = 500;

    // Calculate obtained marks
    float obtained = a + b + c + d + e;

    // Calculate percentage as a float
    float percentage = (obtained / totalmarks) * 100;

    // Print percentage with 2 decimal points
    printf("%f\n", percentage);

    // Correct range checking
    if (percentage > 90 && percentage <= 100)
    {
        printf("The Grade is A\n");
    }
    else if (percentage > 80 && percentage <= 90)
    {
        printf("Grade B\n");
    }
    else if (percentage > 60 && percentage <= 80)
    {
        printf("Grade C\n");
    }
    else if (percentage > 0 && percentage <= 60)
    {
        printf("Grade D\n");
    }
    else
    {
        printf("Invalid percentage\n");
    }

    return 0;
}
