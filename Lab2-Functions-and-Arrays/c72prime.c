#include <stdio.h>
int prime(pri)  {

 int c; 
 int check = 1;

 for (c = 2; c <= pri/2; c++)
  {
    if (pri % c == 0)
    {
      check = 0;
      break;
    }
  }

  if (c <= pri/2 + 1)
    check = 1;

return(check);
}