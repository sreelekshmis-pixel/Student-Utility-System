#include <stdio.h>

float calculateAverage(int total)
{
    return total / 5.0;
}

int main()
{
    int total;

    printf("Enter total marks: ");
    scanf("%d", &total);

    printf("Average Marks = %.2f\n",
           calculateAverage(total));

    return 0;
}
