#include <stdio.h>
void main() 
{
    int p, t, r;
    float si = 0;

    printf("Enter the principal amount (p): ");
    scanf("%d", &p);

    printf("Enter the time in years (t): ");
    scanf("%d", &t);

    printf("Enter the rate of interest (r): ");
    scanf("%d", &r);

    si = p * t * r/ 100;

    printf("The simple interest is: %f", si);
}

