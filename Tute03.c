#include <stdio.h>
int main() {  //beginning of function main
  
  int number , tot = 0 , i ;//declaring variables

  printf( "Enter number :");
  scanf("%d",&number);  //getting input

  for (i=1 ;i<=number ; i++){
    tot = tot + i;
  }

  printf( "Sum : %d",tot);
  return 0;
}  //end of function main

