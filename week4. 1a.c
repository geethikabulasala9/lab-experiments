#include <stdio.h>

int main() {
    float A, B, C, result;
    int D, E, F, G;

    printf("Enter value of A:");
    scanf("%f", &A);

    printf("Enter value of B:");
    scanf("%f", &B);

    printf("Enter value of C:");
    scanf("%f", &C);

    printf("Enter value of D:");
    scanf("%d", &D);

    printf("Enter value of E:");
    scanf("%d", &E);

    printf("Enter value of F:");
    scanf("%d", &F);

    printf("Enter value of G:");
    scanf("%d", &G);

    result = A + B * C + (D * E) + F * G;

    printf("A+B*C+ (D*E) + F*G = %f\n", result);

    return 0;
}
