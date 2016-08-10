//
//  main.c
//  MeanderToTheBog
//
//  Created by Daniel Kwolek on 8/9/16.
//  Copyright © 2016 Arcore. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>

int askForNumber(int, char *);
void interrupt();
void replay();

int main(void)
{
    int answer = -1;
    printf("Welcome to the greatest story ever told.\nA reckless adventurer (You) wanders deep into the night.\n"); sleep(6);
    printf("The moon shines brightly across the valley causing shadows to dance as the wind carresses the trees.\n"); sleep(2);
    printf("Peering into the valley you see a bog.\n"); sleep(3);
    printf("This is no normal bog,\n");sleep(3);
    printf("oh no!!!\n"); sleep(4);
    printf("This is the bog of doom\n");
    interrupt();sleep(3);
    printf("Please don't interrupt my story,\n");sleep(3);
    printf("I was merely pausing for dramatic effect\n");sleep(3);
    printf(".\n");sleep(1);
    printf(".\n");sleep(1);
    printf(".\n");sleep(1);
    
    printf("Enter ""1"" and only ""1"" if you understand\n");
    fpurge(stdin);
    answer = askForNumber(0, "Enter ""1"" and only ""1"" if you understand\n");
    printf("""0""?\n"); sleep(3);
    printf("""0""???\n"); sleep(2);
    printf("Well then, clearly you do NOT understand and so I will have to put up with your rude interruptions for the time being\n");sleep(3);
    printf("Would you like to Meander To The Bog?\n1: Yes\n0: No\n");
    answer = askForNumber(1, "Would you like to Meander To The Bog?\n");sleep(3);
    while (answer != 1)
    {
        printf("Would you not not not not like to meander into the bog?\n");sleep(2);
        printf("0:\n");sleep(3);
        printf("Irrelevant\n");sleep(3);
        printf("1:\n");sleep(3);
        printf("The Right Choice^tm\n");sleep(3);
        answer = askForNumber(1, "Would you not not not not like to meander into the bog?\n");
    }
    printf("You ever so bravely and with great determine meander into the bog\n");sleep(2);
    printf("You see something glisten to your right on the ground\n");sleep(2);
    printf("What do you do?\n");sleep(3);
    printf("0: Go Investigate\n1: Continue on the path\n");sleep(2);
    answer = askForNumber(1, "0: Go Investigate\n1: Continue on the path\n");
    if (answer == 0)
    {
        printf("You walk over to the glistening object and see that it is a note pinned by a small dirk into a log.\nYou look around but no one is there.\nYou notice there are words on this note.\n What would you like to do?\n0: Continue on the path\n1: Read the note\n");
        answer = askForNumber(1, "What would you like to do?\n0: Continue on the path\n1: Read the note\n");
        if(answer == 1)
        {
            printf("printf(%%d), theMeaningOfLife\n");
            printf("Overcome by the momentous joy of finding the meaning of life, you cease your adventuring and head home to your loving wife and children to cherish the ever precious time you share\nYour story is over.\n Would you like to play again?\n");
            replay();
        }
        
    }
    
}

int askForNumber(int possibilities, char *prompt)
{
    int answer = -1;
    while (answer < 0 || answer > possibilities)
    {
        printf("Valid choices: 0..%d\n:", possibilities);
        fpurge(stdin);
        scanf("%d", &answer);
        if (answer < 0 || answer >= possibilities+1)
        {
            printf("Valid choices: 0..%d\nEnter %d for prompt\n:", possibilities, possibilities+1);
            fpurge(stdin);
            scanf("%d", &answer);
            if (answer == (possibilities+1))
            {
                printf("\n%s", prompt);
                printf("Valid choices: 0..%d\n:", possibilities);
                fpurge(stdin);
                scanf("%d", &answer);
            }
        }
    }

    return answer;
}
void replay()
{
    askForNumber(1, "Would you like to play again?\n");
    main();
}
void interrupt()
{
    fpurge(stdin);
    int interrupt;
    scanf("%d", &interrupt);
}

// printf("");sleep();
