#include <stdio.h>

char calculateGrade(float percentage)
{
    if (percentage >= 90)
        return 'A';
    else if (percentage >= 80)
        return 'B';
    else if (percentage >= 70)
        return 'C';
    else if (percentage >= 60)
        return 'D';
    else if (percentage >= 40)
        return 'E';
    else
        return 'F';
}

int main()
{
    float percentage;

    printf("Enter percentage: ");
    scanf("%f", &percentage);

    printf("Grade = %c\n",
           calculateGrade(percentage));

    return 0;
}
