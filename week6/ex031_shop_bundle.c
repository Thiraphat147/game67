#include <stdio.h>
int main()
{
    printf("=== ITEM SHOP ===\n");
    int GolD = 1000;
    int item = 0;
    printf("Gold: %d\n", GolD);
    printf("1. Health Potion    -- 100   gold (+50 HP)\n");
    printf("2. Mana Potion      -- 50    gold  (+30 MP)\n");
    printf("3. Iron Sword       -- 500   gold (+20 ATK)\n");
    printf("4. Leather Armor    -- 150   gold (+10 DEF)\n");
    printf("5. Exit\n\n");
    typedef enum
    {
        Health_Potion = 1,
        Mana_Potion,
        Iron_Sword,
        Leather_Armor,
        Exit
    } Item;

    Item selectedItem;

    for (int i = 0; i < GolD; i++)
    {
        item++;
        printf("Select item: ");
        scanf("%d", &selectedItem);
        switch (selectedItem)
        {
        case Health_Potion:
            GolD -= 100;
            break;
        case Mana_Potion:
            GolD -= 50;
            break;
        case Iron_Sword:
            GolD -= 500;
            break;
        case Leather_Armor:
            GolD -= 150;
            break;
        case Exit:
            printf("Exiting the shop.\n");
        }

        printf("\n=== Purchase ===\n\n");
        printf("%s\n", selectedItem == Health_Potion   ? "Health Potion: 100 gold"
                       : selectedItem == Mana_Potion   ? "Mana Potion: 50 gold"
                       : selectedItem == Iron_Sword    ? "Iron Sword: 500 gold"
                       : selectedItem == Leather_Armor ? "Leather Armor: 150 gold"
                                                       : "Exit");
        printf("Remaining gold: %d\n", GolD);
        printf("ATK bonus: %s\n", selectedItem == Health_Potion   ? "0"
                                  : selectedItem == Mana_Potion   ? "0"
                                  : selectedItem == Iron_Sword    ? "+20"
                                  : selectedItem == Leather_Armor ? "0"
                                                                  : "0");
        printf("DEF bonus: %s\n", selectedItem == Health_Potion   ? "0"
                                  : selectedItem == Mana_Potion   ? "0"
                                  : selectedItem == Iron_Sword    ? "0"
                                  : selectedItem == Leather_Armor ? "+10"
                                                                  : "0");
    }
    printf("You have made %d purchases.\n", item);

    return 0;
}