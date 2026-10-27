#include <stdio.h>
int main() 
{
    int a, b, c, sum;
    float avg;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);
    sum = a + b + c;
    avg = sum / 3.0;
    
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);
  return 0;
}
