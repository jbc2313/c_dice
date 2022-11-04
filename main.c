#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h> // sleep function from here

# define randnum(min, max) \
    ((rand() % (int)(((max) + 1) - (min))) + (min))

int main() {
    srand(time(NULL));
    int num_dice;
    printf("Lets shoot dice!\n");
    printf("How many are you throwing?\n");
    scanf("%d", &num_dice);
    printf("You grabbed %d dice\n", num_dice);
    int die1 = randnum(1,6);
    int die2 = randnum(1,6);
    int total = die1 + die2;
    sleep(1);
    printf("Shaking the dice now..\n");
    sleep(3);
    printf("Die#1 = %d\nDie#2 = %d\nTotal=%d\n", die1, die2, total);







}
