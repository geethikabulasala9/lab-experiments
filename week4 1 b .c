#include <stdio.h>

int main() 
{
    float A, B, C, result;
    int D;
    printf("Enter values for A, B, C (as floating-point numbers): ");
    scanf("%f %f %f", &A, &B, &C);

    printf("Enter value for D (as an integer): ");
    scanf("%d", &D);
    result = A / B * C - B + A * D / 3;
    printf("The result of the expression is: %.2f\n", result);
 return 0;
}
