#include <stdio.h>

int main()
{
	int a;
	int b;
        
        //This program is made to give the sum of two numbers entred by the user

	printf("Please enter two numbers you want to add: \n");

	scanf("%d",&a);
	scanf("%d",&b);


	int c = a + b;


		printf("The result is: %d\n",c);

         return 0;
}		
