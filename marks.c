#include <stdio.h>

int calculateTotal(int a, int b, int c, int d, int e)
{
    return a + b + c + d + e;
}

int main()
{
    int a, b, c, d, e;

    printf("Enter marks of five subjects: ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    printf("Total Marks = %d\n",
           calculateTotal(a, b, c, d, e));

    return 0;
}
