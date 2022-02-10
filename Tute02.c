#include <stdio.h>

int main() {    //beginning of function main
   float distance , payment , tot , pay ;   //declaring variables

  printf( "Enter distance van has travelled : ");
  scanf ("%f", &distance);  //getting input

  if (distance >= 0 && distance <=30){
    payment = distance * 50.00 ;
    }

  if (distance > 30){
    pay = 30 * 50.00 ;
    tot = (distance - 30) * 40.00;
    payment = tot + pay ;
  }

  printf( "Amount = %.2f",payment);
  
  return 0;
}
