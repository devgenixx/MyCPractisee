#include<stdio.h>
int main()
{
    int Length, Breadth, Area;
   //int Length= 4, Breadth=4;
  printf("Enter length and breadth of the rectangle respectively:\n");
 scanf("%d \n %d", &Length, &Breadth);
   printf("\nLength = %d", Length);
   printf("\nBreadth= %d", Breadth);
   Area= Length * Breadth; 
   printf("\n Area of the rectangle is %d", Area);
   return 0;

}