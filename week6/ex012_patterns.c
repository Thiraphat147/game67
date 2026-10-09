#include <stdio.h>
int main()
{

    printf("=== Triangle ===\n");
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("=== Square ===\n");
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= 4; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("=== Diamond ===\n");

    for (int row = 1; row <= 3; row++)
    {
        for (int col = 1; col <= 4 - row; col++)
        {
            printf(" ");
        }
        for (int col = 1; col <= 2 * row - 1; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int row = 2; row >= 1; row--)
    {
        for (int col = 1; col <= 4 - row; col++)
        {
            printf(" ");
        }
        for (int col = 1; col <= 2 * row - 1; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}