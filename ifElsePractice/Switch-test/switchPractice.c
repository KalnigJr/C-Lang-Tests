#include <stdio.h>

//This code calculate your weight on the planet you choose!


int main() {
  double earthWeight, fightPlanetWeight, relativeGravity;
  int planetNumber;

  printf("Please enter your weight on Earth: \n");
  scanf("%lf", &earthWeight);

  /* 1    Mercury    0.38
     2    Venus      0.91
     3    Mars       0.38
     4    Jupiter    2.34
     5    Saturn     1.06
     6    Uranus     0.92
     7    Neptune    1.19 */

  printf("Please enter the number of the planet you want to fight on:\n1-Mercury\n2-Venus\n3-Mars\n4-Jupiter\n5-Saturn\n6-Uranus\n7-Neptune\n");
  scanf("%d", &planetNumber);

  switch (planetNumber) {
    case 1:
      relativeGravity = 0.38;
      break;

    case 2:
      relativeGravity = 0.91;
      break;

    case 3:
      relativeGravity = 0.38;
      break;

    case 4:
      relativeGravity = 2.34;
      break;

    case 5:
      relativeGravity = 1.06;
      break;

    case 6:
      relativeGravity = 0.92;
      break;

    case 7:
      relativeGravity = 1.19;
      break;

    default:
      printf("The planet you entered doesn't exist!!! \n");
      return 0;
  }

  fightPlanetWeight = earthWeight * relativeGravity;
  printf("Your weight on the destination planet is: %.2lf\n", fightPlanetWeight);

  return 0;
}

