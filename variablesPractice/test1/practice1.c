#include <stdio.h>


  int main()
{
	// we are going to print how much we earned for selling books
	
	int numberOfBooks = 10;
	char bookRating = 'A';
	double bookPrice = 10.99;
        float bookOverallPrice = numberOfBooks * bookPrice;  

	printf("We sold %d Books.\nThe books are all rated with %c \nA single book price is %lf $ \nThe total is %f $\n", numberOfBooks, bookRating, bookPrice, bookOverallPrice);

}	
