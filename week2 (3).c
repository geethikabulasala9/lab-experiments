#include <stdio.h>

int main() 
{
    float p, n, r, si;

    
    printf("Enter the principal amount in rupees: ");
    scanf("%f", &p);
    printf("Enter the term duration in months: ");
    scanf("%f", &n);
    printf("Enter the rate of interest: ");
    scanf("%f", &r);
    si = (p * n * r) / 100;
    printf("simple Interest is %f\n", si);
 return 0;
}
