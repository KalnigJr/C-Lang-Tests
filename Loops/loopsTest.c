#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Given two numbers a and b, for every number from a through b, print the English representation if the number is less than 10.
    // If it is 10 or more, print if it is even or odd. Create a loop to iterate from a through b. 
    
       int n;
         
     for ( n = a ; n <= b ; n++ ){
         switch(n){
             case 1:
             printf("one\n");
             break;
             case 2:
             printf("two\n");
             break;
             case 3:
             printf("three\n");
             break;
             case 4:
             printf("four\n");
             break;
             case 5:
             printf("five\n");
             break;
             case 6:
             printf("six\n");
             break;
             case 7:
             printf("seven\n");
             break;
             case 8:
             printf("eight\n");
             break;
             case 9:
             printf("nine\n");
             break;
             default:
      
             while (  n <= b ) {
             if(  n % 2 == 0 ){
                    printf("even\n"); 
                 }

            else if ( n % 2 == 1){
                       printf("odd\n");
                     }
                     n++;
             }
             break;}
     }
    return 0;
}


