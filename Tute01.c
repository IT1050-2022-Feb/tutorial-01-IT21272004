/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() { //beginning of function main
  
  float mark1 , mark2, avg ;
  
  printf( "Enter subject 1 mark:");
  scanf( "%f",&mark1);   //getting input

  printf( "Enter subject 2 mark :");
  scanf("%f",&mark2);  //getting input
  
  avg = (mark1 +mark2)/2 ;
  
  printf( "Average mark : %.2f", avg);  //printing output
  
  return 0;
}  //end of function main

