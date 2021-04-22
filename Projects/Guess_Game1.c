 #include<stdio.h>
 #include<stdlib.h>
 #include<time.h>

 
 int main()
 
 {  int num, guess,no_guess=1;
    srand(time(NULL));
    num= rand()%20 + 1;
    //printf("THe number is %d\n", num);
  
    for ( ; ; no_guess++)
    {   printf("Guess the name between 1-20: \n");
        scanf("%d", &guess);

    
        if (guess== num)
        {
            printf(" YAY! you made me proud kiddo :3\n");
            break;
        }
        else if(guess> num)
        {
            printf("Man, go for a lower aim\n");
        }
        else if(guess< num)
        {
            printf("Duhh, why do you think so low. Choose something high\n");
        }
        
    }
        printf("Total times guessed was: %d\n", no_guess);

    
        if (no_guess<10)
        {
           printf("You did a great job!");
        }
        else 
        {
            printf("You did an O-K job!");
        }
        return 0;
 }