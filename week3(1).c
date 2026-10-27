#include <stdio.h>
int main()
{
    double n, result;
    printf("Enter a number to find its square root: ");
    scanf("%lf", &n);
    result = sqrt(n);
    printf("\nThe square root of number %.2lf is %.2lf\n", n, result);
    return 0;
}
