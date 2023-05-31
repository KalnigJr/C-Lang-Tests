#include <stdio.h>


int main(){

//This program sort numbers in asceding order.
	int a, b, c;

         printf("please enter the 3 numbers you want to sort:\n");

	 scanf("%d", &a);
	 scanf("%d", &b);
	 scanf("%d", &c);

	 if ( a<b && b<c){

		printf("The order is: %d %d %d\n", a , b ,c);
	 }

	 else if ( a<b && c<b){
		 
		 if ( a < c ) {
			 
			 printf("The order is: %d %d %d\n" , a , c , b);
		 }
		 else { 
			 printf("The order is: %d %d %d\n" , c , a , b);
		 }

	 }
	

	if ( b<a && c<b ) {

               printf("The order is: %d %d %d\n" , c , b , a);
	}		
	
        
        else if ( b<a && b<c ){

	        if ( a < c) {
		     
		         printf("The order is: %d %d %d\n" , b , a , c);
		}
             
                else {
			
	                 printf("The order is: %d %d %d\n" , b , c , a);

	        }
        }
            

              return 0;

}	      
	        
 


