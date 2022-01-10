#include <stdio.h>
#include <stdlib.h>

int c6(void) { 
  printf("Program 6.1\n\n"); 

  int values[10];
  int index = 0;

for (index = 0; index < 10; ++index) {
  values[0] = 0;
  values[1] = 0;
  values[2] = 0;
  values[3] = 0;
  values[4] = 0;
  values[5] = 0;
  values[6] = 0;
  values[7] = 0;
  values[8] = 0;
  values[9] = 0;
}
for ( index = 0; index < 10; ++index ) {
  values[0] = 197;
  values[2] = -100;
  values[5] = 350;
  values[3] = values[0] + values[5];
  values[9] =
  values[5] / 10;
  --values[2];
}
  for ( index = 0; index < 10; ++index )
    printf ("values[%i] = %i\n", index, values[index]);
  
  printf("\n\n");
  
  printf ("Program 6.2\n\n");
  float array [10] = {0,1,2,3,4,5,6,7,8,9};
  int sum;
  int tot;
  float avg;
    
    for ( tot = 0; tot < 10; ++tot ) {
      sum = sum + array[tot];
    }
    
    avg = (float)sum / tot;
    printf("The average is %.3f",avg);

  return 0;
}