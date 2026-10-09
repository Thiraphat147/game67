#include <stdio.h>
int main()
{
    char Name[150];
    int Level;
    int ATK;
    int DEF;
    char HP[150] = "Programming";

    printf("Name: ");
    scanf("%s", Name);
    printf("Level: ");
    scanf("%d", &Level);
    printf("ATK: ");
    scanf("%d", &ATK);
    printf("DEF: ");
    scanf("%d", &DEF);
    printf("HP: ");
    scanf("%s", HP);

    printf("===Enter Data===\n");
    printf("Name\t: %s\n", Name);
    printf("Level\t: %d\n", Level);
    printf("ATK\t: %d\n", ATK);
    printf("DEF\t: %d\n", DEF);
    printf("HP\t: %s\n", HP);
    return 0;
}