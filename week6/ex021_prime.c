#include <stdio.h>
int main()
{
    int n, i, isPrime = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            isPrime = 1;
            break;
        }
    }
    if (isPrime == 0)
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.(divisible by %d)", n, i);
    return 0;
}