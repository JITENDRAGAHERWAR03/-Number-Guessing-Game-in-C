
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int random , guess;
    int no_of_guess = 0;
    srand(time(NULL));
        printf("Welcome to the world of guessing number game!\n");
        random = rand() % 100 + 1; // generate the random number between 1 to 100

        do
        {
            printf("\nplease Enter the number between 1 to 100: ");
            scanf("%d", &guess);
           no_of_guess++;

           if (guess<random)
           {
               printf("Enter the larger number\n");
           }
           else if (guess>random)
           {
               printf("Enter the smaller number\n");
           }
           else
           {
                printf("Congrulation !!! You have guessed the number in %d attempts\n", no_of_guess);
           }
           
           
        } while (random != guess);

        printf("\n Bye Bye! Thank you for playing the game\n");
        printf("\n developed by: @jitendra");
        
    return 0;
}