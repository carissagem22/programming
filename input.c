#include <stdio.h>


/*
  This is a main class. Do not treat this as a code. 
  This method prints bunch of stuff

  Write a code which asks a user to inut a number and ouput "<number>"
*/
int main(void)
{

  // Be able to identify what the input is
  float result2 = 4.2;
  
  
  // Let user know to input a number
  int userInut;
  printf("Please enter a number:");
  scanf("%d", &userInut);
  printf("You entered: %d\n", userInut);

  // Ask user to input a float number and out it
  float floatNumber;
  printf("Please enter a decimal number:");
  scanf("%f", &floatNumber);
  printf("You entered: %f\n", floatNumber);

  // Ask a user to enter two number (a) and (b) and output a+b
  int userInut1; 
  int userInut2;
  printf("Please enter a number:");
  scanf("%d", &userInut1);
  printf("Please enter another number:");
  scanf("%d", &userInut2);
  int result = userInut1 + userInut2;
  printf("Addition of number you inputed is: %d\n", result);


  // Ask a user to enter an integer, and check if it is even or odd and print "Is is Even" if its even and "Is is Odd" if its odd
 
  int userInut3;
  printf("Please enter a number:");
  scanf("%d", &userInut3);
  
  // We know that the interger entered by a user is saved in a varianble called => userInut3

  // We now need to know if userInut3 is even or odd

  if (userInut3/2 == 0) 
  {
    printf("It is Even");
  }
  else
  {
    printf("It is Odd");
  }

  // Initializa a char to store a letter 'a'
  // 1. How do you initialize a variable?
  // Intialization vs Declaration

  // int result = 4;
  // char chr = 'a';
  // printf("The result is: %d\n", result);
  // printf("The result2 is: %.2f\n", result2);
  // printf("The result2 is: %c\n", chr);
}


// |_| -> Address  (value stored at this address)
// |_|
// |_|
// |_| -> #123sasde233 (2)  