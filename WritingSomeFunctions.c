#include <stdio.h>
#include <stdlib.h>

int GCD(int a, int b);
float ABSV(int c);
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
float ABSV(int c)
{
  if (c < 0)
    return -(c);
  return c;
}

// Square Root Implementation
int SQRT(int d)
{
  return 0;
}
