#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h> // sleep function from here

# define randnum(min, max) \
    ((rand() % (int)(((max) + 1) - (min))) + (min))

void shoot_loop(int totdice) {
    char user_input;
    
    while(user_input != 'q'){
        printf("%d is the total number of dice\n", totdice); 
        printf("q to quit, s to shoot again\n");
        scanf("%c", &user_input);
    }
}

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
    if(total==7){
        printf("You Hit a 7! WOW! YOU WON!");
    }else{
        printf("Sorry, you didnt hit 7... try again..\n");
    }
    
    shoot_loop(num_dice);



    return 0;

}

