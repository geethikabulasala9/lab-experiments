#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, area, s;
    printf("Enter side a in cm: ");
    scanf("%lf", &a);
    
    printf("Enter side b in cm: ");
    scanf("%lf", &b);
    
    printf("Enter side c in cm: ");
    scanf("%lf", &c);
    s = (a + b + c) / 2.;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("The area of the triangle is: %.2lf sq. cm\n", area);
    
    return 0;
}
