#include <stdio.h>


   int main()
{


	//This program is made to calculate the multiply of two floating numbers
	 

	float a, b, result;

	printf("Please enter two numbers you want to multiply: \n");


	scanf("%f %f" , &a , &b );

	result = a * b;
	
	printf("The result is: %f \n", result);


	return 0;
}
