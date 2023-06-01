#include <stdio.h>

  int main() {

          char Char;

          printf("Please enter a character of your choice: \n");

          scanf("%c" , &Char);

          if (( Char >= 'a' && Char <= 'z' ) || ( Char >= 'A' && Char <= 'Z')){

                 printf("The character you enter is an alphabet!\n");
          }
          else {
                  printf("The character you entred is not an alphabet!\n");
          }
          return 0;
  }
