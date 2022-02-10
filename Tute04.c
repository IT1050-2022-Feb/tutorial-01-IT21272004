#include <stdio.h>

int minimum(int no1 , int no2);
int maximum (int no1 , int no2);
int multiply (int no1, int  no2);

int main() {   //beginning of function main
   int no1, no2;
   printf("Enter a value for no 1 : ");   //getting input
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);  //getting input 
   printf("%d ", minimum(no1, no2));  //printing outputs
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}  //end of function main

int minimum(int no1 , int no2){
  int result ;
  if (no1 <=no2)
    result = no1 ;

  else 
    result =no2 ;
  return result ;
}

int maximum (int no1 , int no2){
  int result ;
  if (no1 >= no2)
    result= no1 ;

  else 
    result = no2 ;

  return result ;
}

int multiply (int no1 , int no2){
  int result;
  result = no1 *no2 ;
  return result ;
}