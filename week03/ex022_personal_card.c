#include <stdio.h>
int main()
{
    // setCharacterSet("UTF-8");
    char Name[50];
    int Age;
    float GPA;
    char Favorite_Subject[50] = "Programming";

    printf("Name: ");
    scanf("%s", Name);
    printf("Age: ");
    scanf("%d", &Age);
    printf("GPA: ");
    scanf("%f", &GPA);
    printf("Favorite Subject: %s\n", Favorite_Subject);
    printf("===Enter Data===\n");
    printf("┌─────────────────────────────┐\n");
    printf("│ Name\t\t: %-12s│\n", Name);
    printf("│ Age\t\t: %-12d│\n", Age);
    printf("│ GPA\t\t: %-12.2f│\n", GPA);
    printf("└─────────────────────────────┘\n");
    return 0;
}