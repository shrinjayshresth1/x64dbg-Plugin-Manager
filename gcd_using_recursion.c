#include <stdio.h>
// Function declaration//
int GCD(int a, int b)
{
    if (a % b == 0)
    {
        return b;
    }
    else
    {
        return GCD(a, a % b);
    }
}
int main()
{
    int x, y, gcd;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);
    gcd = GCD(x, y);
    printf("The GCD of %d and %d is %d", x, y, gcd);
    return 0;
}
