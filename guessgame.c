#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int guessno, mynum;

    srand(time(NULL));
    guessno = rand()%100;

    printf("I have a number in mind (0-100). Can you Guess it?\n");

    while (1)
    {
        printf("Enter your Guess: ");
        scanf("%d", &mynum);

        if (guessno == mynum)
        {
            printf("Congo! Your Guess is Right!");
            break;
        }
        else if (guessno > mynum)
        {
            printf("My Number is greater than %d.\nYou are too close to Guess. Try Again\n\n", mynum);
        }
        else
        {
            printf("My Number is smaller than %d.\nYou are too close to Guess. Try Again\n\n", mynum);
        }
    }
    return 0;
}