#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){

int randNumber, number, guess = 1 ; 
srand(time(0));
randNumber = rand()%100 + 1; // this is a function to generate the random number foe the game
// printf("The random number is generated %d\n", randNumber);
printf("\n");
printf("\n");
printf("***********NOTE************\n");
printf("The score depends on the number of attempts you take to guess the generated random number");
printf("\n");
printf("\n");
printf("Lets Begin the game, the number is generated between 1 and 100 \n");
printf("\n");
  do{
    printf("Please Select a Number \n");
    scanf( "%d", &number);
    if (number > randNumber)
    {
          printf("Lower Number Please\n ");  
    }
    else if (number < randNumber)
    {
        printf("Higher Number Please\n");   
    }
    else
    {
        printf("your Guessed it right\n ");
        printf("your score is %d \n", guess);
    }   
  guess++;
  } while (number != randNumber);
return 0;
}