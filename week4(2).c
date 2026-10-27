#include <stdio.h>
int main(){
    int i, j, k;
    printf("Enter value of i: ");
    scanf("%d", &i);
    printf("Enter value of j: ");
    scanf("%d", &j);
    printf("Enter value of k: ");
    scanf("%d", &k);
    (i > j) ? (i > k ? printf("%d is largest", i) : printf("%d is largest", k)) 
            : (j > k ? printf("%d is largest", j) : printf("%d is largest", k));
    return 0;
}
