#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // sleep function from here

int main() {
    int num_dice;
    printf("Lets shoot dice!\n");
    printf("How many are you throwing?\n");
    scanf("%d", &num_dice);
    printf("You grabbed %d dice\n", num_dice);
    int die1 = 2;
    int die2 = 6;
    sleep(1);
    printf("Shaking the dice now..\n");
    sleep(3);
    printf("Die #1 = %d\nDie #2 = %d", die1, die2);







}
