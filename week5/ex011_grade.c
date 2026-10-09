#include <stdio.h>
int main()
{
    int score;
    printf("Enter your score: ");
    scanf("%d", &score);

    if (score >= 80)
    {
        printf("Grade: A (4.0)\n");
    }
    else if (score >= 75)
    {
        printf("Grade: B+ (3.5)\n");
    }
    else if (score >= 70)
    {
        printf("Grade: B (3.0)\n");
    }
    else if (score >= 65)
    {
        printf("Grade: C+ (2.5)\n");
    }
    else if (score >= 60)
    {
        printf("Grade: C (2.0)\n");
    }
    else if (score >= 55)
    {
        printf("Grade: D+ (1.5)\n");
    }
    else if (score >= 50)
    {
        printf("Grade: D (1.0)\n");
    }
    else
    {
        printf("Grade: F (0.0)\n");
    }
}