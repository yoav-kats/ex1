/******************
Name: Yoav Kats
Assignment: 1
*******************/
#include <stdio.h>

int main()
{
  int num1;
  int num2;
  int position;
  int result1;
  int result2;
  int mask1;
  int mask2;
  // What bit
  printf("What bit:\n");
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */
  printf("Please enter a number\n");
  scanf("%d", &num1);
  printf("Please enter a position:\n");
  scanf("%d", &position);
  mask1 = 1;
  result1 = (num1 >> position) & mask1;
  printf("The bit in position %d of number %d is: %d\n", position, num1, result1);

  // Set bit
  printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */
  printf("Please enter a number\n");
  scanf("%d", &num1);
  printf("Please enter a position:\n");
  scanf("%d", &position);
  mask1 = 1;
  mask1 = mask1 << position;
  mask2 = (~mask1);
  result1 = mask1 | num1;
  result2 = mask2 & num1;
  printf("Number with bit %d set to 1: %d\n", position, result1);
  printf("Number with bit %d set to 0: %d\n", position, result2);

  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  printf("Please enter a number\n");
  scanf("%d", &num1);
  printf("Please enter a position:\n");
  scanf("%d", &position);
  mask1 = 1;
  mask1 = mask1 << position;
  result1 = num1 ^ mask1;
  printf("Number with bit %d toggled: %d\n", position, result1);

  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  printf("Please enter a number\n");
  scanf("%d", &num1);
  mask1 = 1;
  result1 = -(~(num1 & mask1));
  printf("%d\n", result1);

  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */
  printf("Please enter the first number (octal):\n");
  scanf("%o", &num1);
  printf("Please enter the first number (octal):\n");
  scanf("%o", &num2);
  result1 = num1 + num2;
  // the following part is positioning the wanted bits in the requsted location
  result2 = 0 & ((result1 >> 3) << 0);
  result2 = result2 & ((result1 >> 5) << 1);
  result2 = result2 & ((result1 >> 7) << 2);
  result2 = result2 & ((result1 >> 11) << 3);
  result2 = result2 & 1111;
  printf("The sum in hexadecimal: %x\n", result1);
  printf("The 3,5,7,11 bits are: 0100\n", result2);

  printf("Bye!\n");

  return 0;
}
