 #include<stdio.h>
 #include<stdlib.h>
 #include<time.h>

 
 int main()
 
 {  int num, guess,no_guess=1;
    srand(time(NULL));
    num= rand()%20 + 1;
    //printf("THe number is %d\n", num);
   
    while(1)
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
        no_guess++;
    }
printf("Total times guessed was: %d", no_guess); 
     return 0;
 }