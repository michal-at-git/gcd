#ifndef GCD_H
#define GCD_H
#include <iostream>

int gcd(int a, int b)
{
  int result;
  if (a != b)
{
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
}

 if (a > 0) result = a;
 if (b > 0) result = b;
 if (a == b) result = a/b;
 std::cout << result << "\n";
 return result;
}

//Extended Euclideam algorithm

void egcd(int a, int b) {
  int xa = 1;
  int ya = 0;
  int xb = 0;
  int yb = 1;
  int c = 0;
  int x;
  int y;
  std::cout << "+______________________________________________+\n";
  std::cout << "| a=" << a << " | b=" << b << " | c=" << c <<" | xa=" << xa << " | ya=" << ya <<" | xb=" << xb << " | yb=" << yb << " |\n";
  std::cout << "+______________________________________________+\n";


  while ((a*b) > 0)
  {
      if (a>=b)
      {
	c = a/b;
	a = a%b;
	xa = xa - xb * c;
	ya = ya - yb * c;
	std::cout << "|a=" << a << " | b=" << b << " | c=" << c << " | xa=" << xa << " | ya=" << ya <<" | xb=" << xb << " | yb=" << yb << " |\n";
      }
      else
      {
	c = b/a;
	b = b%a;
	xb = xb - xa * c;
	yb = yb - ya * c;
		std::cout << "| a=" << a << " | b=" << b << " | c=" << c << " | xa=" << xa << " | ya=" << ya <<" | xb=" << xb << " | yb=" << yb << " |\n";

      }
      std::cout << "+______________________________________________+\n";
      
      if (a>0) {
	x = xa;
	y = ya;
      }
      else
      {
	x = xb;
	y = yb;
      }
	std::cout << "x = " << x << " y = " << y << "\n";

  }
}
#endif 