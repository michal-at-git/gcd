#ifndef GCD_H
#define GCD_H
#include <iostream>

int gcd(int a, int b)
{
  int result;
  while (a > 0 && b > 0)
  {
    if (a>b)
    {
      a = a%b;
    }
    else if (b > a)
    {
     b = b%a; 
    }
  }
  
 if (a > 0) result = a;
 if (b > 0) result = b;
 return result;
}
#endif