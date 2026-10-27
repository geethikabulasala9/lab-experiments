#include <stdio.h>

int main() {
    int s1, s2, s3, s4, s5, total;
    float avg;
    printf("Enter marks of subject1: ");
    scanf("%d", &s1);

    printf("Enter marks of subject2: ");
    scanf("%d", &s2);

    printf("Enter marks of subject3: ");
    scanf("%d", &s3);

    printf("Enter marks of subject4: ");
    scanf("%d", &s4);

    printf("Enter marks of subject5: ");
    scanf("%d", &s5);
    total = s1 + s2 + s3 + s4 + s5;
    avg = total / 5.0; 
    printf("\nTotal Marks = %d", total);
    printf("\nAverage Marks = %.2f\n", avg);
 return 0;
}
