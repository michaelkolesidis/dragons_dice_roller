/*
 *  Dragon's Dice Roller
 * 
 *  Version 1.0
 * 
 *  Created by Michael Kolesidis
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int logo()
{
    printf("\n                   ,  ,\n");
    printf("                   \\\\ \\\\\n");
    printf("                   ) \\\\ \\\\    _p_\n");
    printf("                   )^\\))\\))  /  *\\\n");
    printf("                   \\_|| || / /^\\`-\'\n");
    printf("           __       -\\ \\\\--/ /\n");
    printf("         <\'  \\\\___/   ___. )\'\n");
    printf("              \\`====\\ )___/\\\\\n");
    printf("                   //     \\`\"\n");
    printf("                   \\\\    /  \\\n");
    printf("                   \\`\" +========+\n");
    printf("                       |Dragon's|\n");
    printf("                       |Dice    |\n");
    printf("                       |Roller  |\n");
    printf("                       \"\"\"\"\"\"\"\"\"\"\n");
    return 0;
}

int roll_dice(int type, int times)
{
    int value;

    if (type == 4 || type == 6 || type == 8 || type == 10 || type == 12 || type == 20)
    {
        printf("===== D%d - %d Times =====\n", type, times);
        for (int i = 0; i < times; i++)
        {
            switch (type)
            {
            case 4:
                value = rand() % 4 + 1;
                printf("%d\n", value);
                break;

            case 6:
                value = rand() % 6 + 1;
                printf("%d\n", value);
                break;

            case 8:
                value = rand() % 8 + 1;
                printf("%d\n", value);
                break;

            case 10:
                value = rand() % 10 + 1;
                printf("%d\n", value);
                break;

            case 12:
                value = rand() % 12 + 1;
                printf("%d\n", value);
                break;

            case 20:
                value = rand() % 20 + 1;
                printf("%d\n", value);
                break;
            }
        }
        printf("========================\n\n\n");
    }
    else
    {
        printf("Dice type should be 4, 6, 8, 10, 12 or 20!\n\n\n");
    }
    return 0;
}

int main()
{
    int type, times;
    srand(time(NULL));
    logo();

    printf("Which dice should I roll for you and how many times?\n");
    scanf("%d %d", &type, &times);

    while (type != 0 || times != 0)
    {
        roll_dice(type, times);
        scanf("%d %d", &type, &times);
    }

    return 0;
}