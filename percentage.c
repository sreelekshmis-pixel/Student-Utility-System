#include <stdio.h>

float calculatePercentage(int total)
{
    return (total / 500.0) * 100;
}

int main()
{
    int total;

    printf("Enter total marks: ");
    scanf("%d", &total);

    printf("Percentage = %.2f%%\n",
           calculatePercentage(total));

    return 0;
}
