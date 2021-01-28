#include <stdio.h>
#include <stdlib.h>

int GCD(int a, int b);
int ABSV(int c);
int SQRT(int d);

int main()
{


  return 0;
}


// Greatest Common Denominator Implementation
int GCD(int a, int b)
{
  if (b == 0)
    return a;
  return GCD(b, a % b);
}


// Absolute Value Implementation
int ABSV(int c)
{
  return 0;
}


// Square Root Implementation
int SQRT(int d)
{
  return 0;
}
