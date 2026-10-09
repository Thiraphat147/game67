#include <stdio.h>
int main()
{
    int MaxHP;
    int damage;
    int attack_count;
    int is_poisoned;

    printf("Max HP: ");
    scanf("%d", &MaxHP);
    printf("damage: ");
    scanf("%d", &damage);
    printf("Is poisoned: ");
    scanf("%d", &is_poisoned);
    printf("attack count: ");
    scanf("%d", &attack_count);

    int hp = MaxHP - damage;
    if (hp < 0)
        hp = 0;
    printf("=== Character Status ===\n");
    int filled = hp * 10 / MaxHP;
    printf("HP : [");
    for (int i = 0; i < 10; i++)
    {
        printf(i < filled ? "█" : "-");
    }
    printf("] %d/%d\n", hp, MaxHP);

    if (hp <= 0)
    {
        printf("State: DEAD\n");
    }
    else if (is_poisoned == 1)
    {
        printf("State: poisoned\n");
    }
    else
    {
        printf("State: NORMAL\n");
    }

    if (attack_count % 5 == 0 && attack_count != 0)
    {
        printf("====Ultimate!====\n");
    }
    else if (hp <= MaxHP * 0.25)
    {
        printf("====CRITICA====\n");
    }
    return 0;
}