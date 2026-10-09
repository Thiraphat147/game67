#include <stdio.h>
int main()
{

    printf("=== For Loop ===\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
    }

    printf("=== While Loop ===\n");
    int i = 1;
    while (i <= 10)
    {
        printf("%d\n", i);
        i++;
    }

    printf("=== Do While Loop ===\n");
    i = 1;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 10);

    printf("=== Sum ===\n");

    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
        printf("%d\n", sum);
    }

    return 0;
}