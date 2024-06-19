#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int guess,guesses,answer,max,min;
    printf("Max number is: ");
    scanf("%d", &max);

    printf("Min number is: ");
    scanf("%d", &min);
    srand(time(0));
     answer = rand()%(max-min+1)+min;
    do
    {
        printf("Enter a guess: ");
        scanf("%d", &guess);

        if(guess>answer)
        {
            printf("The answer is lower than your guess\n");
        }
        else if(guess<answer)
        {
            printf("The answer is higher than your guess\n");
        }
        else
        {
            printf("CORRECT!\n");
        }
        guesses++;
    } while (answer!=guess);
    printf("The answer is: %d\nYou took %d guesses\n", answer, guesses);
}