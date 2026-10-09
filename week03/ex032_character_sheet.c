#include <stdio.h>
int main()
{
    char Name[150];
    int Level;
    int ATK;
    int DEF;
    int HP;
    int Power_Score;

    printf("Name: ");
    scanf("%s", Name);
    printf("Level: ");
    scanf("%d", &Level);
    printf("ATK: ");
    scanf("%d", &ATK);
    printf("DEF: ");
    scanf("%d", &DEF);
    printf("HP: ");
    scanf("%d", &HP);
    Power_Score = (ATK * 2 + DEF + HP / 10);
    printf("===Enter Data===\n");
    printf("╔═════════════════════════════╗\n");
    printf("║ %-28s║\n", Name);
    printf("╠═════════════════════════════╣\n");
    printf("║ Level\t: %-20d║\n", Level);
    printf("║ ATK\t: %-20d║\n", ATK);
    printf("║ DEF\t: %-20d║\n", DEF);
    printf("║ HP\t: %-20d║\n", HP);
    printf("╠═════════════════════════════╣\n");
    printf("║ %-35s  ║\n", "HP Bar: [██████████] 100% ");
    printf("║ Power Score: %-14d ║\n", Power_Score);
    printf("╚═════════════════════════════╝\n");

    return 0;
}