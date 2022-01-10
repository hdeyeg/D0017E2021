
#include <stdio.h>

int calculateTriangularNumber (n) {

  int i, triangularNumber = 0;

    for ( i = 1; i <= n; ++i )
      triangularNumber += i;
  
  return triangularNumber;
}