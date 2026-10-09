#include <stdio.h>
int main()
{
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
    printf("Favorite Subject: ");
    scanf("%s", Favorite_Subject);

    printf("===Enter Data===\n");
    printf("Name\t\t: %s\n", Name);
    printf("Age\t\t: %d\n", Age);
    printf("GPA\t\t: %.2f\n", GPA);
    printf("Favorite Subject: %s\n", Favorite_Subject);
    return 0;
}
