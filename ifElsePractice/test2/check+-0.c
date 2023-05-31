#include <stdio.h>

 int main(){

	 int number;


// This program checks if a given number is positive, negative or null.


          printf("Please enter the number you want to check:\n");


          scanf("%d", &number);


       if ( number > 0 ){
     

      printf("The number you entred is positive: %d > 0 \n", number);
       }


      else if ( number < 0 ){

	printf("The number you entred is negative: %d < 0 \n", number);
      }

      else {

	printf("The number you entred is null: %d = 0 \n", number);
      }
 
     return 0;
 }     
