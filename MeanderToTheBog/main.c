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
int sleepOn;
void interrupt();
int replay();
void sleepPlease(int);
int main(void)
{
    int answer = -1;
    printf("Welcome to the greatest story ever told.\n");
    sleep(6);
    printf("Would you like your prompts timed(1) or instant(0)\n0: instant\n1: timed (MUCH more fun, takes longer)\n");
    sleepOn = askForNumber(1, "Would you like your prompts timed(1) or instant(0)\n0: instant\n1: timed (MUCH more fun, takes longer)");
    printf("A reckless adventurer (You) wanders deep into the night.\nThe moon shines brightly across the valley causing shadows to dance as the wind carresses the trees.\n");
    sleepPlease(4);
    printf("Peering into the valley you see a bog.\n");
    sleepPlease(3);
    printf("That is no normal bog,\n");
    sleepPlease(3);
    printf("oh no!!!\n");
    sleepPlease(4);
    printf("That is the bog of doom (*Should I enter?*)\n");
    interrupt();
    sleepPlease(3); //fake pause
    printf("Please don't interrupt my story,\n");
    sleepPlease(3);
    printf("I was merely pausing for dramatic effect");
    fflush(stdout);
    sleep(3);
    fflush(stdout);
    printf(".");
    fflush(stdout);
    sleep(1);
    fflush(stdout);
    printf(".");
    fflush(stdout);
    sleep(1);
    printf(".\n");
    sleep(1);

    printf("Would you like to Meander To The Bog?\n1: Yes\n0: No\n");
    answer = askForNumber(1, "Would you like to Meander To The Bog?\n"); //goto bog rhetorical
    while (answer != 1)
    {
        printf(".");
        fflush(stdout);
        sleep(1);
        printf(".");
        fflush(stdout);
        sleep(1);
        printf(".\n");
        fflush(stdout);
        sleep(2);
        printf("Would you not not not not like to meander towards the bog?\n");
        sleepPlease(2);
        printf("0:\n");
        sleepPlease(3);
        printf("Irrelevant\n");
        sleepPlease(2);
        printf("1:\n");
        sleepPlease(2);
        printf("The Right Choice^tm\n");
        sleepPlease(2);
        answer = askForNumber(1, "Would you not not not not like to meander towards the bog?\n");
    }
    printf("You ever so bravely and with great determine meander towards the bog\n");
    sleepPlease(2);
    printf("You see something glisten to your right on the ground\n");
    sleepPlease(2);
    printf("What do you do?\n");
    sleepPlease(1);
    printf("0: Go Investigate\n1: Continue on the path\n");
    answer = askForNumber(1, "0: Go Investigate\n1: Continue on the path\n"); //investigate off path?
    if (answer == 0)
    {
        printf("You walk over to the glistening object and see that it is a note pinned by a small dirk into a log.\n");
        sleepPlease(2);
        printf("You look around but no one is there.\n");
        sleepPlease(2);
        printf("You notice there are words on this note.\n");
        sleepPlease(2);
        printf("What would you like to do?\n0: Continue on the path\n1: Read the note\n");
        answer = askForNumber(1, "What would you like to do?\n0: Continue on the path\n1: Read the note\n"); // Meaning of life
        if(answer == 1)
        {
            printf("printf(\"%%d\\n\", theMeaningOfLife); sleepPlease(3);\n");
            sleepPlease(3);
            printf("Overcome by the momentous joy of finding the meaning of life,\n");
            sleepPlease(1);
            printf("you cease your adventuring and head home to your loving wife and children to cherish the ever precious time you share\n");
            sleepPlease(4);
            printf("Your story is over.\n");
            sleepPlease(5);
            replay();
            return 0;
        }
    }
    printf("Continuing on the path, you meander towards the bog.\n");
    sleep(2);
    printf("*Oh look, a butterfly!*\n");
    sleep(3);
    printf("*Gee golly, that's real neat!*\n");
    sleep(3);
    printf("Are..\n");
    sleepPlease(2);
    printf("are you looking at a butterfly...\n");
    sleepPlease(2);
    printf(".");
    sleepPlease(1);
    printf(".");
    sleepPlease(1);
    printf(".\n");
    sleepPlease(1);
    printf("FOCUS PLEASE!\n");sleepPlease(2);
    printf("As you approach the bog of doom you hear heavy footsteps off to your right\n What is your next action?\n0: hide behind a large mossy boulder\n1: Run along the path\n2: Stand your ground\n");
    answer = askForNumber(2, "As you approach the bog of doom you hear heavy footsteps off to your right\n What is your next action?\n0: hide behind a large mossy boulder\n1: Run along the path\n2: Stand your ground\n");
    switch (answer)
    {
        case(0):
        {
            printf("As you hide behind a large mossy boulder the footsteps grow closer and louder, soon becoming a monstrous stomp that could belong only to an ogre\n");
            sleepPlease(4);
            printf("All of a sudden you hear the ogre call out ""BLARG'NAK GET ON FEET. I FOUND A HUMAN.""\n");
            sleepPlease(3);
            printf("The very boulder you are hiding behind starts moving! Only too late do you realize, it isn't a boulder at all, but a massive ogre taking a nap\n");
            sleepPlease(4);
            printf("Despite scrambling away as quickly as possible, the ogres catch up to you in no time and have you captured\n");
            sleepPlease(3);
            printf("Sorry, You've become Ogre Soup!!\n");
            sleepPlease(6);
            replay();
            return 0;
            break;
        }
        case(1):
        {
            break;
        }
        case(2):
        {
            printf("You decide to stand your ground and face whatever may come head on.\n");
            sleepPlease(3);
            printf("The footsteps grow closer and louder, soon becoming a monstrous stomp that could belong only to an ogre\n");
            sleepPlease(4);
            printf("From out of the trees comes a massive ogre, dragging behind it a freshly killed moose as if it were a ragdoll\n");
            sleepPlease(4);
            printf("For a moment you think that you might be able to still sneak away but in that very same moment the ogre looks directly towards you and lets out a warcry\n");
            sleepPlease(4);
            printf("Realizing that you must make a finer meal than the moose, it lets go of it's prize and in a single charge manages to knock you against a tree, rendering you unconscious\n");
            sleepPlease(4);
            printf("You became Ogre Soup!!!");
            sleepPlease(6);
            replay();
            return 0;
            break;
        }
        default:
        {
            printf("Congratulations, you broke the game.. Or did you?");
            sleepPlease(3);
            replay();
            return 0;
        }
    }
    printf("You quickly run away because in your heart of hearts you are just a coward\n");
    sleepPlease(2);
    printf("After slowing down to a meandering pace for about 30 minutes, You finally meander to the bog of doom\n");
    sleepPlease(3);
    printf("OH NO, I'VE MADE A TERRIBLE MISTAKE\n");
    sleepPlease(2);
    printf("THIS ISN'T THE BOG OF DOOM\n");
    sleepPlease(2);
    printf("IF ONLY YOU COULD BEEN SO LUCKY\n");
    sleepPlease(2);
    printf("This is the bog..");
    sleepPlease(2);
    printf(".\n");
    sleepPlease(1);
    printf("of");
    sleepPlease(1);
    printf(".");
    sleepPlease(1);
    printf(".\n");
    sleepPlease(1);
    printf("IMPENDING D");
    fflush(stdout);
    sleep(3);
    for (int i = 0; i < 15; i++)
    {
        printf("O");
        sleepPlease(1);
    }
    printf("M\n");
    sleep(4);
    printf("Sorry, you are kinda screwed now: The bog of impending doom, once acknowledged, is inescapable.\n");
    sleep(3);
    printf("The bog of doom smacks you across the face and you die. You needn't ask how..\n\n");
    sleepPlease(4);
    replay();
    return 0;
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
                printf("\n%s\n", prompt);
                printf("Valid choices: 0..%d\n:", possibilities);
                fpurge(stdin);
                scanf("%d", &answer);
            }
        }
    }

    return answer;
}
void sleepPlease(int sleepNumber)
{
    if (sleepOn == 1) //if true then "initializes" sleep function in most circumstances
    {
        fflush(stdout);
        sleep(sleepNumber);
    }
}
int replay()
{
    int replayCheck = 0;
    printf("\n\nWould you like to play again?\n1: Yes\n0: No\n");
    replayCheck = askForNumber(1, "Would you like to play again?\n1: Yes\n2: No\n");
    if(replayCheck == 1)
    {
    main();
    }
    return 0;
}
void interrupt()
{
    fpurge(stdin);
    getchar();
}

// printf("");sleepPlease();
