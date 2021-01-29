#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int number1 = 0;
int number2 = 0;
float number3 = 0.0;
float number4 = 0.0;

int GCD(int a, int b);
float ABSV(float c);
float SQRT(float d);

int main()
{
  // Prompts user to input 2 numbers to find GCD and outputs the number
  printf("Please enter 2 numbers to find the Greatest Common Denominator: \n");
  scanf("%d %d", &number1, &number2);
  int result = GCD(number1, number2);
  printf("The Greatest Common Denominator between %d and %d is %d!\n\n", number1, number2, result);

  // Prompts user to input a number to find the Absolute Value and outputs the number 
  printf("Please enter a number to find the Absolute Value: \n");
  scanf("%fl", &number3);
  float result2 = ABSV(number3);
  printf("The Absolute value of %.1fl is %fl.1!\n\n", number3, result2);

  // Prompts user to input a number to find the Square Root and outputs the number
  printf("Please enter a number to find the Square Root: \n");
  scanf("%fl", &number4);
  float result3 = SQRT(number4);
  printf("The Square Root of %.fl is %.fl!\n\n", number4, result3);

  return 0;
}


// Greatest Common Denominator Implementation
int GCD(int a, int b)
{
  if (a < b)
    return GCD(b, a);

  if (b == 0)
    return a;

  return GCD(b, a % b);
}

float ABSV(float c)
{
  if (c < 0)
    return -(c);
  return c;
}

// Square Root Implementation
float SQRT(float d)
{
  if ( d < 0.0)
  {
    printf("Error 404: In the SQRT function, no negative numbers are allowed. I'll fix it for you");
    d = ABSV(d);
  }  
  return sqrt(d);
}
